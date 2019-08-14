package com.jiuqi.etl.rpa.runtime.control.getcheck;

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
 * 获取勾选
 * 
 * @author liangxiao01
 */
public class GetCheckTaskModel extends TaskModel {

	private TaskTarget taskTarget = new TaskTarget();
	private String outputParamCheck = null;
	private String outputParamState = null;
	private final String ATTR_OUTPUT_PARAM_CHECK = "OUTPUT_PARAM_CHECK";
	private final String ATTR_OUTPUT_PARAM_STATE = "OUTPUT_PARAM_STATE";
	private final String ATTR_TASK_TARGET = "TASK_TARGET";
	private final String ATTR_TARGET_ELEMENT = "TARGET_ELEMENT";
	private final String ATTR_TARGET_PATH = "TARGET_PATH";
	private final String ATTR_TARGET_TIMEOUT = "TARGET_TIMEOUT";

	protected void saveToJson(JSONObject e, Context context) throws ETLModelException {
		try {
			e.putOpt(ATTR_OUTPUT_PARAM_CHECK, outputParamCheck);
			e.putOpt(ATTR_OUTPUT_PARAM_STATE, outputParamState);

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
		this.outputParamCheck = obj.optString(ATTR_OUTPUT_PARAM_CHECK);
		this.outputParamState = obj.optString(ATTR_OUTPUT_PARAM_STATE);
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

	public TaskTarget getTaskTarget() {
		return taskTarget;
	}

	@Override
	public String getId() {
		return GetCheckTaskFactory.ID;
	}

	public GetCheckTaskModel clone() {
		GetCheckTaskModel cloned = (GetCheckTaskModel) super.clone();
		cloned.taskTarget = new TaskTarget();
		cloned.taskTarget.setTimeout(taskTarget.getTimeout());
		cloned.taskTarget.setElement(taskTarget.getElement());
		cloned.taskTarget.setPath(taskTarget.getPath());
		return cloned;
	}

	public String getOutputParamCheck() {
		return outputParamCheck;
	}

	public void setOutputParamCheck(String outputParamCheck) {
		this.outputParamCheck = outputParamCheck;
	}

	public String getOutputParamState() {
		return outputParamState;
	}

	public void setOutputParamState(String outputParamState) {
		this.outputParamState = outputParamState;
	}

	@Override
	public boolean validate(IProblems problems, IModel parent) {
		boolean result = super.validate(problems, parent);
		if (!(parent instanceof ControlFlowModel)) {
			Problem problem = new Problem();
			problem.setLevel(Level.ERROR);
			problem.setParent(parent);
			problem.setSource(this);
			problem.setDescription("无法验证适配器的正确性");
			problems.add(problem);
			return false;
		}
		if (taskTarget.getPath() == null && StringUtils.isEmpty(taskTarget.getElement())) {
			Problem p = new Problem();
			p.setLevel(Level.ERROR);
			p.setParent(parent);
			p.setSource(this);
			p.setDescription("没有设置操作对象");
			problems.add(p);
			result &= false;
		}
		return result;
	}
}
