using System;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.UI;

public class SingularityNativeAndroid {
	private static ISingularityUnitySdkProtocol _listener = null;

	public static void StartLogin(string hashMapConfig, ISingularityUnitySdkProtocol _mListener) {
		_listener = _mListener;
		var androidJC = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		var jo = androidJC.GetStatic<AndroidJavaObject>("currentActivity");
		var jc = new AndroidJavaClass("io.neobrix.singularity_sdk_android.SingularityUnityPlugin");
		var unityPluginObject = jc.CallStatic<AndroidJavaObject>("getInstance");
		var deviceCallback = new DeviceCallback();
		unityPluginObject.Call("startLogin", jo, hashMapConfig, deviceCallback);
	}

	public static string GetUserDataJson()
	{
		var jc = new AndroidJavaObject("io.neobrix.singularity_sdk_android.SingularityUtils");
		string userDataJson = jc.Call<string>("getUserDataJson");
		return userDataJson;
	}

		private class DeviceCallback : AndroidJavaProxy
	{
		public DeviceCallback() : base("io.neobrix.singularity_sdk_android.SingularityUnityPluginListener") {}

		void onGetSingularityUserInfo(string info)
		{
			Dictionary<string, object> values = JsonConvert.DeserializeObject<Dictionary<string, object>>(info);
			_listener.onGetSingularityUserInfo(values);
		}

		void onSingularityClose()
		{
			_listener.onSingularityClose();
		}

		void onSingularityLogout()
		{
			_listener.onSingularityLogout();
		}

		void onSingularityError(string info, int err)
		{
			_listener.onSingularityError(info, err);
		}
	}
}

