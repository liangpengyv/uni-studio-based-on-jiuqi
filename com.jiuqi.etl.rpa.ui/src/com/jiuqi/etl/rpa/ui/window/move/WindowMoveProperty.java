package com.jiuqi.etl.rpa.ui.window.move;

import org.eclipse.jface.viewers.ICellEditorValidator;
import org.eclipse.ui.views.properties.IPropertyDescriptor;
import org.eclipse.ui.views.properties.IPropertySource;
import org.eclipse.ui.views.properties.TextPropertyDescriptor;
import org.json.JSONException;
import org.json.JSONObject;

import com.jiuqi.bi.util.StringUtils;
import com.jiuqi.etl.DataType;
import com.jiuqi.etl.model.ParameterModel;
import com.jiuqi.etl.rpa.runtime.window.move.WindowMoveTaskModel;
import com.jiuqi.etl.rpa.ui.EditableComboPropertyDescriptor;
import com.jiuqi.etl.rpa.ui.UIPickerPopupPropertyDescriptor;
import com.jiuqi.etl.ui.editor.ext.TaskContext;
import com.jiuqi.rpa.lib.find.Path;

public class WindowMoveProperty implements IPropertySource {

	private WindowMoveTaskModel model;
	private IPropertyDescriptor[] pds;
	private String[] integerParamStrs;
	private ParameterModel[] integerParams;
	private static final String KEY_TARGETPARAM = "元素";
	private static final String KEY_PATHPICKER = "选择器";
	private static final String KEY_TARGETDELAY = "选择超时";
	private static final String KEY_X = "X";
	private static final String KEY_Y = "Y";
	private static final String KEY_H = "高";
	private static final String KEY_W = "宽";
	public WindowMoveProperty(TaskContext context) {
		this.model = (WindowMoveTaskModel) context.getTaskModel();
		integerParams = context.getParameters(new DataType[] {DataType.INTEGER});
		integerParamStrs = new String[integerParams.length];
		for (int i = 0; i < integerParams.length; i++) {
			integerParamStrs[i] = integerParams[i].getName();
		}
		TextPropertyDescriptor targetParam = new TextPropertyDescriptor(KEY_TARGETPARAM, KEY_TARGETPARAM);
		UIPickerPopupPropertyDescriptor picker = new UIPickerPopupPropertyDescriptor(KEY_PATHPICKER,KEY_PATHPICKER, this.model.getTaskTarget(), true);
		EditableComboPropertyDescriptor targetDelay = new EditableComboPropertyDescriptor(KEY_TARGETDELAY, KEY_TARGETDELAY,integerParamStrs);
		EditableComboPropertyDescriptor inputX = new EditableComboPropertyDescriptor(KEY_X, KEY_X,integerParamStrs);
		EditableComboPropertyDescriptor inputY = new EditableComboPropertyDescriptor(KEY_Y, KEY_Y,integerParamStrs);
		EditableComboPropertyDescriptor inputW = new EditableComboPropertyDescriptor(KEY_W, KEY_W,integerParamStrs);
		EditableComboPropertyDescriptor inputH = new EditableComboPropertyDescriptor(KEY_H, KEY_H,integerParamStrs);
		inputW.setValidator(numberValidate);
		inputH.setValidator(numberValidate);
		inputY.setCategory("输入");
		inputX.setCategory("输入");
		inputW.setCategory("输入");
		inputH.setCategory("输入");
		targetDelay.setValidator(numberValidate);
		targetParam.setCategory("目标");
		picker.setCategory("目标");
		targetDelay.setCategory("目标");
		
		pds = new IPropertyDescriptor[]{/*目标*/targetParam,picker,targetDelay,
										/*输入*/inputX,inputY,inputW,inputH
										};
	
	}

	public Object getPropertyValue(Object id) {
		if(id.equals(KEY_TARGETPARAM)) {
			if(StringUtils.isNotEmpty(this.model.getTaskTarget().getElement())){
				return this.model.getTaskTarget().getElement();
			}
			return "";
		} else if(id.equals(KEY_PATHPICKER)) {
			if(this.model.getTaskTarget().getPath()==null || this.model.getTaskTarget().getPath().getElements().size()==0){
				return "<未配置>";
			}
			return "<已配置>";
		} else if(id.equals(KEY_TARGETDELAY)) {
			return String.valueOf(this.model.getTaskTarget().getTimeout());
		} else if(id.equals(KEY_X)) {
			return String.valueOf(this.model.getInputX());
		} else if(id.equals(KEY_Y)) {
			return String.valueOf(this.model.getInputY());
		} else if(id.equals(KEY_W)) {
			return String.valueOf(this.model.getInputW());
		} else if(id.equals(KEY_H)) {
			return String.valueOf(this.model.getInputH());
		}
		return null;
	}


	public void setPropertyValue(Object id, Object value) {
		if(id.equals(KEY_TARGETPARAM)) {
			this.model.getTaskTarget().setElement((String) value);

		} else if(id.equals(KEY_PATHPICKER)) {
			Path path = new Path();
			try {
				if("".equals(value)){
					this.model.getTaskTarget().setPath(null);
				}else{
					path.fromJson(new JSONObject((String)value));
					this.model.getTaskTarget().setPath(path);					
				}
			} catch (JSONException e) {
				e.printStackTrace();
				this.model.getTaskTarget().setPath(null);
			}
		} else if(id.equals(KEY_TARGETDELAY)) {
			this.model.getTaskTarget().setTimeout((String) value);
		} else if(id.equals(KEY_X)) {
			this.model.setInputX((String) value);
		} else if(id.equals(KEY_Y)) {
			this.model.setInputY((String) value);
		} else if(id.equals(KEY_W)) {
			this.model.setInputW((String) value);
		} else if(id.equals(KEY_H)) {
			this.model.setInputH((String) value);
		}
	}
	public Object getEditableValue() {
		return this.model;
	}
	public boolean isPropertySet(Object id) {
		return false;
	}
	public IPropertyDescriptor[] getPropertyDescriptors() {
		return pds;
	}
	public void resetPropertyValue(Object id) {}

	//正整数
	ICellEditorValidator numberValidate = new ICellEditorValidator() {
		public String isValid(Object value) {
			try {
				if(StringUtils.isEmpty((String) value)){
					return null;
				}
				int v = Integer.parseInt((String) value);
				if (v < 0){
					return "不能输入负数";					
				}else{
					return null;
				}
			} catch (Exception e) {
				String paramName = ((String) value).trim();
				for (int i = 0; i < integerParamStrs.length; i++) {
					if(paramName.equals(integerParamStrs[i])){
						return null;
					}
				}
				return "参数不存在";
			}
		}
	};
}
