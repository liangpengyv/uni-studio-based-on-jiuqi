package com.jiuqi.etl.rpa.runtime.control.setfocus;

import com.jiuqi.bi.util.StringUtils;
import com.jiuqi.etl.engine.ETLEngineException;
import com.jiuqi.etl.engine.ITaskRunner;
import com.jiuqi.etl.engine.TaskConditionException;
import com.jiuqi.etl.env.Env;
import com.jiuqi.etl.model.ParameterModel;
import com.jiuqi.etl.rpa.execute.RPAEnvHelper;
import com.jiuqi.rpa.action.ActionException;
import com.jiuqi.rpa.action.Delay;
import com.jiuqi.rpa.action.Target;
import com.jiuqi.rpa.action.control.setfocus.SetFocusAction;
import com.jiuqi.rpa.action.control.setfocus.SetFocusInput;
import com.jiuqi.rpa.lib.Context;
import com.jiuqi.rpa.lib.IUIHandler;

public final class SetFocusTaskRunner implements ITaskRunner {
	private SetFocusTaskModel taskModel;
	private Env env;

	public SetFocusTaskRunner(SetFocusTaskModel taskModel) {
		this.taskModel = taskModel;
	}

	public void run(Env env) throws TaskConditionException, ETLEngineException {
		this.env = env;

		SetFocusInput actionInput = toActionInput(taskModel);
		SetFocusAction action = new SetFocusAction(actionInput);
		try {
			Context context = new RPAEnvHelper().getContext(env);
			action.run(context);
		} catch (ActionException e) {
			e.printStackTrace();
			throw new ETLEngineException(e.getMessage(), e);
		}
	}

	private SetFocusInput toActionInput(SetFocusTaskModel model) throws ETLEngineException {
		SetFocusInput typetextInput = new SetFocusInput();
		Target target = new Target();
		String elementName = taskModel.getTaskTarget().getElement();
		if (StringUtils.isNotEmpty(elementName)) {
			IUIHandler element = new RPAEnvHelper().getElement(env, elementName);
			target.setElement(element);
		}
		target.setPath(taskModel.getTaskTarget().getPath());
		try{
			target.setTimeout(Integer.parseInt(taskModel.getTaskTarget().getTimeout()));
		}catch (Exception e) {
			ParameterModel paramModel = env.getParamModel(taskModel.getTaskTarget().getTimeout());
			if(paramModel!=null){
				target.setTimeout((int) env.getValue(taskModel.getTaskTarget().getTimeout()));
			}
		}
		typetextInput.setTarget(target);

		Delay delay = new Delay();
		try{
			delay.setBefore(Integer.parseInt(taskModel.getDelay().getBefore()));
		}catch (Exception e) {
			ParameterModel paramModel = env.getParamModel(taskModel.getDelay().getBefore());
			if(paramModel!=null){
				delay.setBefore((int) env.getValue(taskModel.getDelay().getBefore()));
			}
		}
		try{
			delay.setAfter(Integer.parseInt(taskModel.getDelay().getAfter()));
		}catch (Exception e) {
			ParameterModel paramModel = env.getParamModel(taskModel.getDelay().getAfter());
			if(paramModel!=null){
				delay.setAfter((int) env.getValue(taskModel.getDelay().getAfter()));
			}
		}
		typetextInput.setDelay(delay);
		return typetextInput;
	}

}
