package com.jiuqi.rpa.lib.find;

/**
 * �������Ϣ
 * 
 * @author zhouxubo.jiuqi.com.cn
 */
public class BrowserInfo {
	public String application;
	public String title;
	public String url;

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		BrowserInfo other = (BrowserInfo) obj;
		if (application == null) {
			if (other.application != null)
				return false;
		} else if (!application.equals(other.application))
			return false;
		if (title == null) {
			if (other.title != null)
				return false;
		} else if (!title.equals(other.title))
			return false;
		if (url == null) {
			if (other.url != null)
				return false;
		} else if (!url.equals(other.url))
			return false;
		return true;
	}

	@Override
	public String toString() {
		return "(" + application + ", " + title + "," + url + ")";
	}
}
