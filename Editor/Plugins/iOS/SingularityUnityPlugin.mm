
#import "SingularityUnityPlugin.h"
#import <SingularityKit/SingularityKit-Swift.h>

@implementation SingularityUnityPlugin


- (id)init
{
    self = [super init];
}

- (void)startLogin:(NSString *) paramString {
    UIViewController *vc;
        for (UIWindowScene *scene in [UIApplication sharedApplication].connectedScenes) {
            if (scene.activationState == UISceneActivationStateForegroundActive) {
                for (UIWindow *window in scene.windows) {
                    if (window.isKeyWindow) {
                        vc = window.rootViewController;
                        break;
                    }
                }
                break;
            }
        }
        NSData *data = [paramString dataUsingEncoding:NSUTF8StringEncoding];
        NSDictionary* params = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
        [SingularitySDKInitializer startLoginOn:vc with:params listener:self];
}


- (void)onGetSingularityUserInfoWithUser:(NSDictionary<NSString *,id> * _Nonnull)user {
    NSLog(@"user :: %@", user);
}

- (void)onSingularityClose {
    printf("close");
}

- (void)onSingularityErrorWithMessage:(NSString * _Nonnull)message code:(NSInteger)code {
    NSLog(@"message :: %@", message);
}

- (void)onSingularityLogout {
    printf("logout");
}

@end

static SingularityUnityPlugin * plugin = nil;
// Converts C style string to NSString
NSString* CreateNSString (const char* string)
{
    if (string)
        return [NSString stringWithUTF8String: string];
    else
        return [NSString stringWithUTF8String: ""];
}

// Helper method to create C string copy
char* MakeStringCopy (const char* string)
{
    if (string == NULL)
        return NULL;
    
    char* res = (char*)malloc(strlen(string) + 1);
    strcpy(res, string);
    return res;
}

// When native code plugin is implemented in .mm / .cpp file, then functions
// should be surrounded with extern "C" block to conform C function naming rules
extern "C" {

    void StartLogin (const char* configParams)
    {
        plugin= [[SingularityUnityPlugin alloc] init];
        
        [plugin startLogin: CreateNSString(configParams)];
    }
    
    
}

