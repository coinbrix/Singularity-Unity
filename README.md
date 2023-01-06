# Unity wrapper for Singularity SDK - singularity-unity
You  can integrate singularity sdk to easy implement login flow and wallet integration

{
    "dependencies": {
        "com.neobrix.singularity-unity": "https://github.com/coinbrix/Singularity-Unity#upm"
    }
}

## ISingularityUnitySdkProtocol

We emit below events to get callbacks.Inherit your listner with name "ISingularityUnitySdkProtocol"
 
- onGetSingularityUserInfo
This event you get after successfully login. You will get the login user detail as json string in parameter.

- onSingularityClose
This event you get when you click on close icon or press back button.


- onSingularityLogout
This event you get after successfully logout. It also delete user detail from shared preference.

- onSingularityError
This event you get when any Error occured

## open Login screen
You can call this function to start login flow or can open profile page
  ###### key - provide user key as string
  ###### singularityConfig - provide configurations details as map, pass'environment' to set environment 0 for test 1 for production
  ```cs
if (_singularityUnity == null)
        {
            _singularityUnity = new SingularityUnity(this);
        }
_singularityUnity.OpenLoginScreen(parameters);
  
```

## getUserData
You will logged in get user data anytime
```cs
SingularityUnity.GetUserData();
```
  
  
  
