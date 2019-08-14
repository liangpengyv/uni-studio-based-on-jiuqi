package com.jiuqi.etl.rpa.runtime.extract.getposition;

import org.json.JSONException;
import org.json.JSONObject;

import com.jiuqi.bi.util.StringUtils;
import com.jiuqi.etl.model.ControlFlowModel;
import com.jiuqi.etl.model.ETLModelException;
import com.jiuqi.etl.model.IModel;
import com.jiuqi.etl.model.TaskModel;
import com.jiuqi.etl.model.graph.Context;
import com.jiuqi.etl.model.problem.IProblems;
import com.jiuqi.etl.model.problem.Problem;
import com.jiuqi.etl.model.problem.Problem.Level;
import com.jiuqi.etl.rpa.runtime.TaskTarget;
import com.jiuqi.rpa.lib.find.Path;

/**
 * ��ȡλ��
 * 
 * @author liangxiao01
 */
public class GetPositionTaskModel extends TaskModel {
	private String outputParamX;
	private String outputParamY;
	private String outputParamW;
	private String outputParamH;
	private TaskTarget taskTarget = new TaskTarget();
	private final String ATTR_OUTPUT_X = "OUTPUT_X";
	private final String ATTR_OUTPUT_Y = "OUTPUT_Y";
	private final String ATTR_OUTPUT_W = "OUTPUT_W";
	private final String ATTR_OUTPUT_H = "OUTPUT_H";
	private final String ATTR_TASK_TARGET = "TASK_TARGET";
	private final String ATTR_TARGET_ELEMENT = "TARGET_ELEMENT";
	private final String ATTR_TARGET_PATH = "TARGET_PATH";
	private final String ATTR_TARGET_TIMEOUT = "TARGET_TIMEOUT";

	protected void saveToJson(JSONObject e, Context context) throws ETLModelException {
		try {
			e.putOpt(ATTR_OUTPUT_X, outputParamX);
			e.putOpt(ATTR_OUTPUT_Y, outputParamY);
			e.putOpt(ATTR_OUTPUT_W, outputParamW);
			e.putOpt(ATTR_OUTPUT_H, outputParamH);
			JSONObject targetObj = new JSONObject();
			if (taskTarget.getElement() != null) {
				targetObj.putOpt(ATTR_TARGET_ELEMENT, taskTarget.getElement());
			}
			if (taskTarget.getPath() != null) {
				targetObj.putOpt(ATTR_TARGET_PATH, taskTarget.getPath().toJson().toString());
			}
			targetObj.putOpt(ATTR_TARGET_TIMEOUT, taskTarget.getTimeout());
			e.put(ATTR_TASK_TARGET, targetObj);
		} catch (JSONException e1) {
			e1.printStackTrace();
		}

	}

	protected void loadFromJson(JSONObject e, Context context) throws ETLModelException {
		JSONObject obj = e;
		this.outputParamX = obj.optString(ATTR_OUTPUT_X);
		this.outputParamY = obj.optString(ATTR_OUTPUT_Y);
		this.outputParamW = obj.optString(ATTR_OUTPUT_W);
		this.outputParamH = obj.optString(ATTR_OUTPUT_H);
		JSONObject targetObj = obj.optJSONObject(ATTR_TASK_TARGET);
		this.getTaskTarget().setTimeout(targetObj.optString(ATTR_TARGET_TIMEOUT));
		if (targetObj.has(ATTR_TARGET_ELEMENT)) {
			this.getTaskTarget().setElement(targetObj.optString(ATTR_TARGET_ELEMENT));
		}
		if (targetObj.has(ATTR_TARGET_PATH)) {
			Path path = new Path();
			try {
				path.fromJson(new JSONObject(targetObj.optString(ATTR_TARGET_PATH)));
				this.getTaskTarget().setPath(path);
			} catch (JSONException e1) {
				e1.printStackTrace();
			}
		}
	}

	public String getOutputParamX() {
		return outputParamX;
	}

	public void setOutputParamX(String outputParamX) {
		this.outputParamX = outputParamX;
	}

	public String getOutputParamY() {
		return outputParamY;
	}

	public void setOutputParamY(String outputParamY) {
		this.outputParamY = outputParamY;
	}

	public String getOutputParamW() {
		return outputParamW;
	}

	public void setOutputParamW(String outputParamW) {
		this.outputParamW = outputParamW;
	}

	public String getOutputParamH() {
		return outputParamH;
	}

	public void setOutputParamH(String outputParamH) {
		this.outputParamH = outputParamH;
	}

	public TaskTarget getTaskTarget() {
		return taskTarget;
	}

	@Override
	public String getId() {
		return GetPositionTaskFactory.ID;
	}

	public GetPositionTaskModel clone() {
		GetPositionTaskModel cloned = (GetPositionTaskModel) super.clone();
		cloned.taskTarget = new TaskTarget();
		cloned.taskTarget.setTimeout(taskTarget.getTimeout());
		cloned.taskTarget.setElement(taskTarget.getElement());
		cloned.taskTarget.setPath(taskTarget.getPath());
		return cloned;
	}
	@Override
	public boolean validate(IProblems problems, IModel parent) {
		boolean result =  super.validate(problems, parent);
		if (!(parent instanceof ControlFlowModel)) {
			Problem problem = new Problem();
			problem.setLevel(Level.ERROR);
			problem.setParent(parent);
			problem.setSource(this);
			problem.setDescription("�޷���֤����������ȷ��");
			problems.add(problem);
			return false;
		}
		if(taskTarget.getPath()==null && StringUtils.isEmpty(taskTarget.getElement())) {
			Problem p = new Problem();
			p.setLevel(Level.ERROR);
			p.setParent(parent);
			p.setSource(this);
			p.setDescription("û�����ò�������");
			problems.add(p);
			result &= false;
		}
		return result;
	}
}