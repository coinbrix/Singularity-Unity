//
//  SingularityUnityPlugin.swift
//  SingularityKit
//
//  Created by Shubham Garg on 25/12/22.
//

import Foundation
import SingularityKit

var listner: SingularityUnityPlugin? = nil


@_cdecl("_startLogin")
func startLogin(_ configParams: UnsafePointer<CChar>?,  completion: @escaping @convention(c)  (UnsafePointer<CChar>, UnsafePointer<CChar>) -> Void) {
    if let params = configParams {
        var vc: UIViewController?
        for scene in UIApplication.shared.connectedScenes {
            guard let scene = scene as? UIWindowScene else {
                continue
            }
            if scene.activationState == .foregroundActive {
                for window in scene.windows {
                    if window.isKeyWindow {
                        vc = window.rootViewController
                        break
                    }
                }
                break
            }
        }
        listner = SingularityUnityPlugin(singularityCompletion: completion)
        let jsonString = String(cString: params)
        if let paramDict = listner?.convertToDictionary(text: jsonString), let vc = vc {
            SingularitySDKInitializer.startLogin(on: vc, with: paramDict, listener: listner!)
        }
    }
}

@_cdecl("_getUserData")
func getUserData() -> UnsafePointer<CChar>? {
    let userDict = SingularitySDKInitializer.getUserInfo()
    if let jSONData = try? JSONSerialization.data(
        withJSONObject: userDict,
        options: []), let jsonString = String(data: jSONData,
                                              encoding: .utf8) {
        return listner?.toPointer(str: jsonString)
    }
    return nil
}

class SingularityUnityPlugin: SingularityListener {
    var singularityCompletion: (UnsafePointer<CChar>, UnsafePointer<CChar>) -> Void
    
    init(singularityCompletion: @escaping (UnsafePointer<CChar>, UnsafePointer<CChar>) -> Void) {
        self.singularityCompletion = singularityCompletion
    }
    
    func onGetSingularityUserInfo(user: [String : Any]) {
        print(user)
        if let jSONData = try? JSONSerialization.data(
            withJSONObject: user, options: []),
           let jsonString = String(data: jSONData, encoding: .utf8) {
            singularityCompletion("onGetSingularityUserInfo", jsonString)
        }
        
    }
    
    func onSingularityClose() {
        print("Close")
        singularityCompletion("onSingularityClose", "Close")
    }
    
    func onSingularityLogout() {
        print("Logout")
        singularityCompletion("onSingularityLogout", "Logout")
    }
    
    func onSingularityError(message: String, code: Int) {
        print(message)
        singularityCompletion("onSingularityError", message)
    }
    
    
    func convertToDictionary(text: String) -> [String: Any]? {
        if let data = text.data(using: .utf8) {
            do {
                return try JSONSerialization.jsonObject(with: data, options: []) as? [String: Any]
            } catch {
                print(error.localizedDescription)
            }
        }
        return nil
    }
    
    func toPointer(str: String) -> UnsafePointer<CChar>? {
        guard let data = str.data(using: String.Encoding.utf8) else { return nil }
        
        let buffer = UnsafeMutablePointer<CChar>.allocate(capacity: data.count)
        let stream = OutputStream(toBuffer: buffer, capacity: data.count)
        
        stream.open()
        data.withUnsafeBytes { p in
            stream.write(p, maxLength: data.count)
        }
        
        stream.close()
        
        return UnsafePointer<CChar>(buffer)
    }
    
}
