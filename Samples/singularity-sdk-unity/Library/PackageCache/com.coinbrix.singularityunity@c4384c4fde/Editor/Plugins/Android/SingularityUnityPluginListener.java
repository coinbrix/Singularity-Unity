package io.neobrix.singularity_sdk_android;


import androidx.annotation.Nullable;

interface SingularityUnityPluginListener {
    void onGetSingularityUserInfo(@Nullable String userJsonData);
    void onSingularityClose();
    void onSingularityLogout();
    void onSingularityError(@Nullable String errorMessage, @Nullable Integer errorCod);
}