using System;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.UI;

public class SingularityUnity {

	private static ISingularityUnitySdkProtocol _mListener = null;

	void Awake()
	{
  	  UnityThread.initUnityThread();
	}

	public SingularityUnity(ISingularityUnitySdkProtocol _listener)
	{
		_mListener = _listener;
	}

	public void OpenLoginScreen(Dictionary<string, object> parameters) {
		var hashMapConfig = JsonConvert.SerializeObject(parameters);
		Debug.Log("hasmMapConfig: " + hashMapConfig );

		#if UNITY_ANDROID
			SingularityNativeAndroid.StartLogin(hashMapConfig, _mListener);
		#elif UNITY_IOS 
        	Debug.Log("StartLogin-ios");
			Debug.Log(hashMapConfig);
			SingularityNativeiOS.startLogin(hashMapConfig, _mListener);
		#endif
		
	}

	public static Dictionary<string, object> GetUserData()
	{
		#if UNITY_ANDROID
			string userDataJson = SingularityNativeAndroid.GetUserDataJson();
			Dictionary<string, object> values = JsonConvert.DeserializeObject<Dictionary<string, object>>(userDataJson);
			return values;
			
		#elif UNITY_IOS 
        	Debug.Log("GetUserData-ios");
			string userDataJson = SingularityNativeiOS.getUserData();
			Dictionary<string, object> values = JsonConvert.DeserializeObject<Dictionary<string, object>>(userDataJson);
			return values;
		#endif
	}

}

