package io.neobrix.singularity_sdk_android;

import android.app.Activity;

import androidx.annotation.Nullable;

import com.google.gson.Gson;

import java.util.HashMap;
import java.util.Map;

class SingularityUnityPlugin implements SingularityListener {
    //handler that connects SDKUI with merchant app and passes all transaction related callbacks

    private static SingularityUnityPlugin INSTANCE = null;

    public @Nullable
    SingularityUnityPluginListener listener=null;

    private SingularityUnityPlugin() {}

    public static SingularityUnityPlugin getInstance()
    {
        if (INSTANCE == null)
            INSTANCE = new SingularityUnityPlugin();

        return INSTANCE;
    }

    public void startLogin(
            Activity activity,
            @Nullable Object params,
            SingularityUnityPluginListener listener
    ) {
        this.listener = listener;
        if(params == null){
            SingularitySDKInitializer.INSTANCE.startLogin(activity, params, this);
        }
        else{
            Map<?, ?> paramsMap = SingularityUtils.INSTANCE.jsonStringToMap((String)params);
            Map<String, Object> config = (Map<String, Object>) paramsMap.get(SingularityConstants.SingularityConfigs.SINGULARITY_CONFIG);
            String env = (String) config.get(SingularityConstants.SingularityConfigs.ENVIRONMENT);
            config.put(SingularityConstants.SingularityConfigs.ENVIRONMENT, Integer.valueOf(env));
            SingularitySDKInitializer.INSTANCE.startLogin(activity, paramsMap, this);
        }
    }

    public String getUserDataJson() {
        return new Gson().toJson(SingularitySDKInitializer.INSTANCE.getUserData());
    }

    @Override
    public void onGetSingularityUserInfo(@Nullable Map<?, ?> user) {
        String jsonUserData = new Gson().toJson(user);
        if(listener == null)return;
        listener.onGetSingularityUserInfo(jsonUserData);
    }

    @Override
    public void onSingularityClose() {
        if(listener == null)return;
        listener.onSingularityClose();
    }

    @Override
    public void onSingularityLogout() {
        if(listener == null)return;
        listener.onSingularityLogout();
    }

    @Override
    public void onSingularityError(@Nullable String errorMessage, @Nullable Integer errorCode) {
        if(listener == null)return;
        listener.onSingularityError(errorMessage, errorCode);
    }
}