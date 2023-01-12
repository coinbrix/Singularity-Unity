using UnityEngine;
using AOT;
using System;
using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine.UI;

public class SingularityNativeiOS {
	#if UNITY_IOS
		/* Interface to native implementation */
		[DllImport ("__Internal")]
		private static extern void _startLogin(string configParams, [MarshalAs(UnmanagedType.FunctionPtr)] Callback callback);

		[DllImport ("__Internal")]
		private static extern string _getUserData();
	#endif
	private static ISingularityUnitySdkProtocol _listener = null;
	delegate void Callback(string method, string response);

	public static void startLogin(string configParams, ISingularityUnitySdkProtocol _mListener) {
		#if UNITY_IOS
			Debug.Log(configParams);
			_listener = _mListener;
			_startLogin(configParams, SingularityMethod);

		#endif
	}

	public static string getUserData() {
		string user = "";
		#if UNITY_IOS
			user = _getUserData();
			Debug.Log(user);
		#endif
		return user;
	}

	[MonoPInvokeCallback(typeof(Callback))]
	private static void SingularityMethod(string method, string response) {
		// Convert Int pointer foo to a managed string
		Debug.Log("Parameter is " + method);
		switch (method)
		{
			case "onGetSingularityUserInfo":
			Dictionary<string, object> values = JsonConvert.DeserializeObject<Dictionary<string, object>>(response);
			_listener.onGetSingularityUserInfo(values);
			break;
			case "onSingularityClose":
			_listener.onSingularityClose();
			break;
			case "onSingularityLogout":
			_listener.onSingularityLogout();
			break;
			case "onSingularityError":
			_listener.onSingularityError(response,400);
			break;
			default:
			break;
		}
	}
	
}


public interface ISingularityUnitySdkProtocol
{
	public void onGetSingularityUserInfo(Dictionary<string, object> info);
	public void onSingularityClose();
	public void onSingularityLogout();
	public void onSingularityError(string message, int errCode);
}