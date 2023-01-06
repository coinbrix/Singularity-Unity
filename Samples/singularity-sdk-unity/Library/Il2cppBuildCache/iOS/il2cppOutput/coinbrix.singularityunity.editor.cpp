#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_tEA17B83295B756EFB23F3357537A3AAC9B4D9732;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ISingularityUnitySdkProtocol
struct ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SingularityNativeAndroid
struct SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38;
// SingularityNativeiOS
struct SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95;
// SingularityUnity
struct SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A;
// System.String
struct String_t;
// UnityThread
struct UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SingularityNativeAndroid/DeviceCallback
struct DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1;
// SingularityNativeiOS/Callback
struct Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C;
// UnityThread/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04961AF525F9368A8AA744FE98A313E1DE5CEDBC;
IL2CPP_EXTERN_C String_t* _stringLiteral185AE62083C0AC6E445FA920CB74C9685390B193;
IL2CPP_EXTERN_C String_t* _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E;
IL2CPP_EXTERN_C String_t* _stringLiteral39A73B55E278147B29CBAB2048F2C0706D38D798;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5CC6D49E2E0D8906971EB80877C3CA899F6D4D2A;
IL2CPP_EXTERN_C String_t* _stringLiteral6664028F2D4E127E226EB31A7943029883FC4913;
IL2CPP_EXTERN_C String_t* _stringLiteral7197F4479AE5BAD06A962C32CBBBE1FD795774D7;
IL2CPP_EXTERN_C String_t* _stringLiteral759E20BAFF886486A9BF3EDF0F562C88696FBFDA;
IL2CPP_EXTERN_C String_t* _stringLiteralA6CD97555691D5F097E1F27F6EAEC7055CF04856;
IL2CPP_EXTERN_C String_t* _stringLiteralBAA074910B1A05F46301A1BCCB583C68B9B8514F;
IL2CPP_EXTERN_C String_t* _stringLiteralBEAA2007B92A75EEA9D7E33862F390ED84A9DE6C;
IL2CPP_EXTERN_C String_t* _stringLiteralD4733ADC174BCCEA49BE481AC8FE5DA3B488D363;
IL2CPP_EXTERN_C String_t* _stringLiteralF5ED9AE1C337C43C83FC31DC75A03F2F441AD1BD;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFF72443D615D1A292083B8C0ADA45DE8D71B0F24;
IL2CPP_EXTERN_C String_t* _stringLiteralFFAEFCC52FEAFE8D0FA6F413DEC3C2ECAFFE5C38;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_m8C2EC28B1105D59926FE74CC34A8ABC23D5FB6E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingularityNativeiOS_SingularityMethod_m9B34E44005F6721FEFF5AE3BB9210879571AB114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CexecuteCoroutineU3Eb__0_m8B596984CEF2C2EC3F6D37A8E7EFE524AF58E10D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityThread_executeInFixedUpdate_m7B13D9409797E8D16911C05F77222D78B5E3555B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityThread_executeInLateUpdate_mCF0F46E2389B32B8345612DFD15DC659795771A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityThread_executeInUpdate_m90DE1CCC4446A32E22471B84E0E1CE202498852D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDBAC91B4A89B73B0CB7CFE40172B209BDFEDAC41 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// SingularityNativeAndroid
struct SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38  : public RuntimeObject
{
};

struct SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_StaticFields
{
	// ISingularityUnitySdkProtocol SingularityNativeAndroid::_listener
	RuntimeObject* ____listener_0;
};

// SingularityNativeiOS
struct SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95  : public RuntimeObject
{
};

struct SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_StaticFields
{
	// ISingularityUnitySdkProtocol SingularityNativeiOS::_listener
	RuntimeObject* ____listener_0;
};

// SingularityUnity
struct SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A  : public RuntimeObject
{
};

struct SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A_StaticFields
{
	// ISingularityUnitySdkProtocol SingularityUnity::_mListener
	RuntimeObject* ____mListener_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityThread/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132  : public RuntimeObject
{
	// System.Collections.IEnumerator UnityThread/<>c__DisplayClass12_0::action
	RuntimeObject* ___action_0;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// SingularityNativeAndroid/DeviceCallback
struct DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SingularityNativeiOS/Callback
struct Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityThread
struct UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionCopiedQueueUpdateFunc
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___actionCopiedQueueUpdateFunc_6;
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionCopiedQueueLateUpdateFunc
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___actionCopiedQueueLateUpdateFunc_9;
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionCopiedQueueFixedUpdateFunc
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___actionCopiedQueueFixedUpdateFunc_12;
};

struct UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields
{
	// UnityThread UnityThread::instance
	UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* ___instance_4;
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionQueuesUpdateFunc
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___actionQueuesUpdateFunc_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityThread::noActionQueueToExecuteUpdateFunc
	bool ___noActionQueueToExecuteUpdateFunc_7;
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionQueuesLateUpdateFunc
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___actionQueuesLateUpdateFunc_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityThread::noActionQueueToExecuteLateUpdateFunc
	bool ___noActionQueueToExecuteLateUpdateFunc_10;
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionQueuesFixedUpdateFunc
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___actionQueuesFixedUpdateFunc_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityThread::noActionQueueToExecuteFixedUpdateFunc
	bool ___noActionQueueToExecuteFixedUpdateFunc_13;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void SingularityNativeAndroid/DeviceCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCallback__ctor_m5C93431D05584824CB89566C5A8B97AAFBCD2AD6 (DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.Dictionary`2<System.String,System.Object>>(System.String)
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
}
// System.Void SingularityNativeiOS::SingularityMethod(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityNativeiOS_SingularityMethod_m9B34E44005F6721FEFF5AE3BB9210879571AB114 (String_t* ___method0, String_t* ___response1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void SingularityNativeiOS/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mDF7DEBC89E1F534B996B13A31211B1E0365E5A24 (Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SingularityNativeiOS::_startLogin(System.String,SingularityNativeiOS/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityNativeiOS__startLogin_m82D2752BB93C0FE9E558A85DD9444AF83B992846 (String_t* ___configParams0, Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* ___callback1, const RuntimeMethod* method) ;
// System.String SingularityNativeiOS::_getUserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SingularityNativeiOS__getUserData_m8676A58E2985A3988A0DAC5B90952389075FA3E5 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityThread::initUnityThread(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_initUnityThread_mEF5ECFF1735D459D6D6A597F619CE7327D4E561C (bool ___visible0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void SingularityNativeiOS::startLogin(System.String,ISingularityUnitySdkProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityNativeiOS_startLogin_m64D3B1A3F40FB69811952EDF642A248E153989C1 (String_t* ___configParams0, RuntimeObject* ____mListener1, const RuntimeMethod* method) ;
// System.String SingularityNativeiOS::getUserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SingularityNativeiOS_getUserData_m2F1DDFEE512405BC2370F00688833CF6CEFEC82F (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityThread>()
inline UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* GameObject_AddComponent_TisUnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_m8C2EC28B1105D59926FE74CC34A8ABC23D5FB6E1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityThread/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m5DF0A49D28F79C8066E3B51023F38C724970507D (U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityThread::executeInUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_executeInUpdate_m90DE1CCC4446A32E22471B84E0E1CE202498852D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// T System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL _startLogin(char*, Il2CppMethodPointer);
IL2CPP_EXTERN_C char* DEFAULT_CALL _getUserData();
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SingularityNativeAndroid::StartLogin(System.String,ISingularityUnitySdkProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityNativeAndroid_StartLogin_mF2D00313BE6977DE1E7AC7029C7E1CBB4F3A93CD (String_t* ___hashMapConfig0, RuntimeObject* ____mListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39A73B55E278147B29CBAB2048F2C0706D38D798);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFAEFCC52FEAFE8D0FA6F413DEC3C2ECAFFE5C38);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1* V_1 = NULL;
	{
		// _listener = _mListener;
		RuntimeObject* L_0 = ____mListener1;
		((SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var))->____listener_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var))->____listener_0), (void*)L_0);
		// var androidJC = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// var jo = androidJC.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_0 = L_2;
		// var jc = new AndroidJavaClass("io.neobrix.singularity_sdk_android.SingularityUnityPlugin");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral39A73B55E278147B29CBAB2048F2C0706D38D798, NULL);
		// var unityPluginObject = jc.CallStatic<AndroidJavaObject>("getInstance");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_3, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_4, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		// var deviceCallback = new DeviceCallback();
		DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1* L_6 = (DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1*)il2cpp_codegen_object_new(DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DeviceCallback__ctor_m5C93431D05584824CB89566C5A8B97AAFBCD2AD6(L_6, NULL);
		V_1 = L_6;
		// unityPluginObject.Call("startLogin", jo, hashMapConfig, deviceCallback);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___hashMapConfig0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1* L_13 = V_1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		NullCheck(L_5);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_5, _stringLiteralFFAEFCC52FEAFE8D0FA6F413DEC3C2ECAFFE5C38, L_12, NULL);
		// }
		return;
	}
}
// System.String SingularityNativeAndroid::GetUserDataJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SingularityNativeAndroid_GetUserDataJson_mCD59187ACBF11415635D0E660E1361604726E9E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6664028F2D4E127E226EB31A7943029883FC4913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7197F4479AE5BAD06A962C32CBBBE1FD795774D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var jc = new AndroidJavaObject("io.neobrix.singularity_sdk_android.SingularityUtils");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral7197F4479AE5BAD06A962C32CBBBE1FD795774D7, L_0, NULL);
		// string userDataJson = jc.Call<string>("getUserDataJson");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_1, _stringLiteral6664028F2D4E127E226EB31A7943029883FC4913, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		// return userDataJson;
		return L_3;
	}
}
// System.Void SingularityNativeAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityNativeAndroid__ctor_m5E71B643493463A222D602E2BF6939562B7C2ECE (SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SingularityNativeAndroid/DeviceCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCallback__ctor_m5C93431D05584824CB89566C5A8B97AAFBCD2AD6 (DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral759E20BAFF886486A9BF3EDF0F562C88696FBFDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DeviceCallback() : base("io.neobrix.singularity_sdk_android.SingularityUnityPluginListener") {}
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral759E20BAFF886486A9BF3EDF0F562C88696FBFDA, NULL);
		// public DeviceCallback() : base("io.neobrix.singularity_sdk_android.SingularityUnityPluginListener") {}
		return;
	}
}
// System.Void SingularityNativeAndroid/DeviceCallback::onGetSingularityUserInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCallback_onGetSingularityUserInfo_mDDDF23EF18AB4C188EE2EC9FC470B5CB155603F8 (DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1* __this, String_t* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	{
		// Dictionary<string, object> values = JsonConvert.DeserializeObject<Dictionary<string, object>>(info);
		String_t* L_0 = ___info0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1;
		L_1 = JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE(L_0, JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var);
		V_0 = L_1;
		// _listener.onGetSingularityUserInfo(values);
		RuntimeObject* L_2 = ((SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var))->____listener_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(0 /* System.Void ISingularityUnitySdkProtocol::onGetSingularityUserInfo(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void SingularityNativeAndroid/DeviceCallback::onSingularityClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCallback_onSingularityClose_m3F5A5696AE4C2DCCA28EA01C184972355D6A3FBC (DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _listener.onSingularityClose();
		RuntimeObject* L_0 = ((SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var))->____listener_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void ISingularityUnitySdkProtocol::onSingularityClose() */, ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void SingularityNativeAndroid/DeviceCallback::onSingularityLogout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCallback_onSingularityLogout_mB154327AA8CE2FF1120C7CDAE686AD2FF042EDCF (DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _listener.onSingularityLogout();
		RuntimeObject* L_0 = ((SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var))->____listener_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void ISingularityUnitySdkProtocol::onSingularityLogout() */, ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void SingularityNativeAndroid/DeviceCallback::onSingularityError(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCallback_onSingularityError_mD4F2D5B2B45C028B242BE2C6DEB6F78624774BB4 (DeviceCallback_tF7EDAF4F79EF7176212972C7F4DECB259CF9BDC1* __this, String_t* ___info0, int32_t ___err1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _listener.onSingularityError(info, err);
		RuntimeObject* L_0 = ((SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeAndroid_t734E4838356D721B0762AA2F106954A703E17C38_il2cpp_TypeInfo_var))->____listener_0;
		String_t* L_1 = ___info0;
		int32_t L_2 = ___err1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void ISingularityUnitySdkProtocol::onSingularityError(System.String,System.Int32) */, ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SingularityNativeiOS_SingularityMethod_m9B34E44005F6721FEFF5AE3BB9210879571AB114(char* ___method0, char* ___response1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___method0' to managed representation
	String_t* ____method0_unmarshaled = NULL;
	____method0_unmarshaled = il2cpp_codegen_marshal_string_result(___method0);

	// Marshaling of parameter '___response1' to managed representation
	String_t* ____response1_unmarshaled = NULL;
	____response1_unmarshaled = il2cpp_codegen_marshal_string_result(___response1);

	// Managed method invocation
	SingularityNativeiOS_SingularityMethod_m9B34E44005F6721FEFF5AE3BB9210879571AB114(____method0_unmarshaled, ____response1_unmarshaled, NULL);

}
// System.Void SingularityNativeiOS::_startLogin(System.String,SingularityNativeiOS/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityNativeiOS__startLogin_m82D2752BB93C0FE9E558A85DD9444AF83B992846 (String_t* ___configParams0, Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* ___callback1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, Il2CppMethodPointer);

	// Marshaling of parameter '___configParams0' to native representation
	char* ____configParams0_marshaled = NULL;
	____configParams0_marshaled = il2cpp_codegen_marshal_string(___configParams0);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_startLogin)(____configParams0_marshaled, ____callback1_marshaled);

	// Marshaling cleanup of parameter '___configParams0' native representation
	il2cpp_codegen_marshal_free(____configParams0_marshaled);
	____configParams0_marshaled = NULL;

}
// System.String SingularityNativeiOS::_getUserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SingularityNativeiOS__getUserData_m8676A58E2985A3988A0DAC5B90952389075FA3E5 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_getUserData)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void SingularityNativeiOS::startLogin(System.String,ISingularityUnitySdkProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityNativeiOS_startLogin_m64D3B1A3F40FB69811952EDF642A248E153989C1 (String_t* ___configParams0, RuntimeObject* ____mListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingularityNativeiOS_SingularityMethod_m9B34E44005F6721FEFF5AE3BB9210879571AB114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(configParams);
		String_t* L_0 = ___configParams0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// _listener = _mListener;
		RuntimeObject* L_1 = ____mListener1;
		((SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_il2cpp_TypeInfo_var))->____listener_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_il2cpp_TypeInfo_var))->____listener_0), (void*)L_1);
		// _startLogin(configParams, SingularityMethod);
		String_t* L_2 = ___configParams0;
		Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* L_3 = (Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C*)il2cpp_codegen_object_new(Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Callback__ctor_mDF7DEBC89E1F534B996B13A31211B1E0365E5A24(L_3, NULL, (intptr_t)((void*)SingularityNativeiOS_SingularityMethod_m9B34E44005F6721FEFF5AE3BB9210879571AB114_RuntimeMethod_var), NULL);
		SingularityNativeiOS__startLogin_m82D2752BB93C0FE9E558A85DD9444AF83B992846(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.String SingularityNativeiOS::getUserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SingularityNativeiOS_getUserData_m2F1DDFEE512405BC2370F00688833CF6CEFEC82F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user = _getUserData();
		String_t* L_0;
		L_0 = SingularityNativeiOS__getUserData_m8676A58E2985A3988A0DAC5B90952389075FA3E5(NULL);
		// Debug.Log(user);
		String_t* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// return user;
		return L_1;
	}
}
// System.Void SingularityNativeiOS::SingularityMethod(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityNativeiOS_SingularityMethod_m9B34E44005F6721FEFF5AE3BB9210879571AB114 (String_t* ___method0, String_t* ___response1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CC6D49E2E0D8906971EB80877C3CA899F6D4D2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAA074910B1A05F46301A1BCCB583C68B9B8514F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEAA2007B92A75EEA9D7E33862F390ED84A9DE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4733ADC174BCCEA49BE481AC8FE5DA3B488D363);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5ED9AE1C337C43C83FC31DC75A03F2F441AD1BD);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	{
		// Debug.Log("Parameter is " + method);
		String_t* L_0 = ___method0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF5ED9AE1C337C43C83FC31DC75A03F2F441AD1BD, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		String_t* L_2 = ___method0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral5CC6D49E2E0D8906971EB80877C3CA899F6D4D2A, NULL);
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_4 = ___method0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralBAA074910B1A05F46301A1BCCB583C68B9B8514F, NULL);
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_6 = ___method0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralBEAA2007B92A75EEA9D7E33862F390ED84A9DE6C, NULL);
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_8 = ___method0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteralD4733ADC174BCCEA49BE481AC8FE5DA3B488D363, NULL);
		if (L_9)
		{
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_0045:
	{
		// Dictionary<string, object> values = JsonConvert.DeserializeObject<Dictionary<string, object>>(response);
		String_t* L_10 = ___response1;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11;
		L_11 = JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE(L_10, JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var);
		V_0 = L_11;
		// _listener.onGetSingularityUserInfo(values);
		RuntimeObject* L_12 = ((SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_il2cpp_TypeInfo_var))->____listener_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(0 /* System.Void ISingularityUnitySdkProtocol::onGetSingularityUserInfo(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var, L_12, L_13);
		// break;
		return;
	}

IL_0058:
	{
		// _listener.onSingularityClose();
		RuntimeObject* L_14 = ((SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_il2cpp_TypeInfo_var))->____listener_0;
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(1 /* System.Void ISingularityUnitySdkProtocol::onSingularityClose() */, ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var, L_14);
		// break;
		return;
	}

IL_0063:
	{
		// _listener.onSingularityLogout();
		RuntimeObject* L_15 = ((SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_il2cpp_TypeInfo_var))->____listener_0;
		NullCheck(L_15);
		InterfaceActionInvoker0::Invoke(2 /* System.Void ISingularityUnitySdkProtocol::onSingularityLogout() */, ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var, L_15);
		// break;
		return;
	}

IL_006e:
	{
		// _listener.onSingularityError(response,400);
		RuntimeObject* L_16 = ((SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_StaticFields*)il2cpp_codegen_static_fields_for(SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95_il2cpp_TypeInfo_var))->____listener_0;
		String_t* L_17 = ___response1;
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void ISingularityUnitySdkProtocol::onSingularityError(System.String,System.Int32) */, ISingularityUnitySdkProtocol_tE6FD3AD0471BE14E31314D0A223B3AB7419DF0F4_il2cpp_TypeInfo_var, L_16, L_17, ((int32_t)400));
		// }
		return;
	}
}
// System.Void SingularityNativeiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityNativeiOS__ctor_m7E92B7C8A38BD1D6931F27B7CA87790C5523C80D (SingularityNativeiOS_t7FB7DA5868D2FF0ACB83594672C48C569E9BDA95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305_Multicast(Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, String_t* ___method0, String_t* ___response1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* currentDelegate = reinterpret_cast<Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___method0, ___response1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305_OpenInst(Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, String_t* ___method0, String_t* ___response1, const RuntimeMethod* method)
{
	NullCheck(___method0);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___method0, ___response1, method);
}
void Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305_OpenStatic(Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, String_t* ___method0, String_t* ___response1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___method0, ___response1, method);
}
void Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305_OpenStaticInvoker(Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, String_t* ___method0, String_t* ___response1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___method0, ___response1);
}
void Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305_ClosedStaticInvoker(Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, String_t* ___method0, String_t* ___response1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___method0, ___response1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C (Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, String_t* ___method0, String_t* ___response1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___method0' to native representation
	char* ____method0_marshaled = NULL;
	____method0_marshaled = il2cpp_codegen_marshal_string(___method0);

	// Marshaling of parameter '___response1' to native representation
	char* ____response1_marshaled = NULL;
	____response1_marshaled = il2cpp_codegen_marshal_string(___response1);

	// Native function invocation
	il2cppPInvokeFunc(____method0_marshaled, ____response1_marshaled);

	// Marshaling cleanup of parameter '___method0' native representation
	il2cpp_codegen_marshal_free(____method0_marshaled);
	____method0_marshaled = NULL;

	// Marshaling cleanup of parameter '___response1' native representation
	il2cpp_codegen_marshal_free(____response1_marshaled);
	____response1_marshaled = NULL;

}
// System.Void SingularityNativeiOS/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mDF7DEBC89E1F534B996B13A31211B1E0365E5A24 (Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305_Multicast;
}
// System.Void SingularityNativeiOS/Callback::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_m80EDB8FCA89F19029EFD264A5B70B3D892C94305 (Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, String_t* ___method0, String_t* ___response1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___method0, ___response1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SingularityNativeiOS/Callback::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_m4EDA7C2B12ACF92EC2AFDC3FBC1DD182884D3099 (Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, String_t* ___method0, String_t* ___response1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___method0;
	__d_args[1] = ___response1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SingularityNativeiOS/Callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_EndInvoke_mB146233089E3353F757AA70C792D2DDCAC81624D (Callback_t8DE4B60E2EBBA883C78D41576C3C87B330AAF76C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SingularityUnity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityUnity_Awake_m70E6AA486A2A7D1F8266A1A9A6EE1A43A862BDF2 (SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityThread.initUnityThread();
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		UnityThread_initUnityThread_mEF5ECFF1735D459D6D6A597F619CE7327D4E561C((bool)0, NULL);
		// }
		return;
	}
}
// System.Void SingularityUnity::.ctor(ISingularityUnitySdkProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityUnity__ctor_mC3C5016D0E3A6769841DBFBA4E96E341EB999AB1 (SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A* __this, RuntimeObject* ____listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SingularityUnity(ISingularityUnitySdkProtocol _listener)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _mListener = _listener;
		RuntimeObject* L_0 = ____listener0;
		((SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A_StaticFields*)il2cpp_codegen_static_fields_for(SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A_il2cpp_TypeInfo_var))->____mListener_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A_StaticFields*)il2cpp_codegen_static_fields_for(SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A_il2cpp_TypeInfo_var))->____mListener_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void SingularityUnity::OpenLoginScreen(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingularityUnity_OpenLoginScreen_mE306779FD6C92327B6C36E467546BCB54F55157B (SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6CD97555691D5F097E1F27F6EAEC7055CF04856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF72443D615D1A292083B8C0ADA45DE8D71B0F24);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var hashMapConfig = JsonConvert.SerializeObject(parameters);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___parameters0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_0, NULL);
		V_0 = L_1;
		// Debug.Log("hasmMapConfig: " + hashMapConfig );
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA6CD97555691D5F097E1F27F6EAEC7055CF04856, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log("StartLogin-ios");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFF72443D615D1A292083B8C0ADA45DE8D71B0F24, NULL);
		// Debug.Log(hashMapConfig);
		String_t* L_4 = V_0;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// SingularityNativeiOS.startLogin(hashMapConfig, _mListener);
		String_t* L_5 = V_0;
		RuntimeObject* L_6 = ((SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A_StaticFields*)il2cpp_codegen_static_fields_for(SingularityUnity_t77A3886EF08F622F1130CD8CD5A00391345E3A5A_il2cpp_TypeInfo_var))->____mListener_0;
		SingularityNativeiOS_startLogin_m64D3B1A3F40FB69811952EDF642A248E153989C1(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SingularityUnity::GetUserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* SingularityUnity_GetUserData_m110B8EEDE56CEE60DE6CDDF59251CA267516C29A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral185AE62083C0AC6E445FA920CB74C9685390B193);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("GetUserData-ios");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral185AE62083C0AC6E445FA920CB74C9685390B193, NULL);
		// string userDataJson = SingularityNativeiOS.getUserData();
		String_t* L_0;
		L_0 = SingularityNativeiOS_getUserData_m2F1DDFEE512405BC2370F00688833CF6CEFEC82F(NULL);
		// Dictionary<string, object> values = JsonConvert.DeserializeObject<Dictionary<string, object>>(userDataJson);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1;
		L_1 = JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE(L_0, JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var);
		// return values;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityThread::initUnityThread(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_initUnityThread_mEF5ECFF1735D459D6D6A597F619CE7327D4E561C (bool ___visible0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_m8C2EC28B1105D59926FE74CC34A8ABC23D5FB6E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04961AF525F9368A8AA744FE98A313E1DE5CEDBC);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (instance != null)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* L_0 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// GameObject obj = new GameObject("MainThreadExecuter");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral04961AF525F9368A8AA744FE98A313E1DE5CEDBC, NULL);
		V_0 = L_3;
		// if (!visible)
		bool L_4 = ___visible0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		// obj.hideFlags = HideFlags.HideAndDontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, ((int32_t)61), NULL);
	}

IL_002b:
	{
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
		// instance = obj.AddComponent<UnityThread>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* L_8;
		L_8 = GameObject_AddComponent_TisUnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_m8C2EC28B1105D59926FE74CC34A8ABC23D5FB6E1(L_7, GameObject_AddComponent_TisUnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_m8C2EC28B1105D59926FE74CC34A8ABC23D5FB6E1_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___instance_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___instance_4), (void*)L_8);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void UnityThread::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_Awake_m2F7062EA908B2BA68F488E2DDC08AF3D7876338D (UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityThread::executeCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_executeCoroutine_m22EC756205057BC2051D7149D168D1CB4E55EE55 (RuntimeObject* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CexecuteCoroutineU3Eb__0_m8B596984CEF2C2EC3F6D37A8E7EFE524AF58E10D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132* L_0 = (U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_m5DF0A49D28F79C8066E3B51023F38C724970507D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132* L_1 = V_0;
		RuntimeObject* L_2 = ___action0;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_0), (void*)L_2);
		// if (instance != null)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* L_3 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// executeInUpdate(() => instance.StartCoroutine(action));
		U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CexecuteCoroutineU3Eb__0_m8B596984CEF2C2EC3F6D37A8E7EFE524AF58E10D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		UnityThread_executeInUpdate_m90DE1CCC4446A32E22471B84E0E1CE202498852D(L_6, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UnityThread::executeInUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_executeInUpdate_m90DE1CCC4446A32E22471B84E0E1CE202498852D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	bool V_1 = false;
	{
		// if (action == null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityThread_executeInUpdate_m90DE1CCC4446A32E22471B84E0E1CE202498852D_RuntimeMethod_var)));
	}

IL_000e:
	{
		// lock (actionQueuesUpdateFunc)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesUpdateFunc_5;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_003c;
					}
				}
				{
					List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
			// actionQueuesUpdateFunc.Add(action);
			il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_6 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesUpdateFunc_5;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___action0;
			NullCheck(L_6);
			List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_6, L_7, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
			// noActionQueueToExecuteUpdateFunc = false;
			il2cpp_codegen_memory_barrier();
			((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteUpdateFunc_7 = (bool)0;
			// }
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityThread::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_Update_mF9C8D519EDFD50633F99099BEC899EE9D04DB681 (UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (noActionQueueToExecuteUpdateFunc)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		bool L_0 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteUpdateFunc_7;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// actionCopiedQueueUpdateFunc.Clear();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_1 = __this->___actionCopiedQueueUpdateFunc_6;
		NullCheck(L_1);
		List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_1, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		// lock (actionQueuesUpdateFunc)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesUpdateFunc_5;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0052;
					}
				}
				{
					List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0052:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
			// actionCopiedQueueUpdateFunc.AddRange(actionQueuesUpdateFunc);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_6 = __this->___actionCopiedQueueUpdateFunc_6;
			il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_7 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesUpdateFunc_5;
			NullCheck(L_6);
			List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D(L_6, L_7, List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
			// actionQueuesUpdateFunc.Clear();
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_8 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesUpdateFunc_5;
			NullCheck(L_8);
			List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_8, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
			// noActionQueueToExecuteUpdateFunc = true;
			il2cpp_codegen_memory_barrier();
			((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteUpdateFunc_7 = (bool)1;
			// }
			goto IL_0053;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// for (int i = 0; i < actionCopiedQueueUpdateFunc.Count; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_0057:
	{
		// actionCopiedQueueUpdateFunc[i].Invoke();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_9 = __this->___actionCopiedQueueUpdateFunc_6;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11;
		L_11 = List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D(L_9, L_10, List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		NullCheck(L_11);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_11, NULL);
		// for (int i = 0; i < actionCopiedQueueUpdateFunc.Count; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_006c:
	{
		// for (int i = 0; i < actionCopiedQueueUpdateFunc.Count; i++)
		int32_t L_13 = V_2;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_14 = __this->___actionCopiedQueueUpdateFunc_6;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_14, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityThread::executeInLateUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_executeInLateUpdate_mCF0F46E2389B32B8345612DFD15DC659795771A7 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	bool V_1 = false;
	{
		// if (action == null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityThread_executeInLateUpdate_mCF0F46E2389B32B8345612DFD15DC659795771A7_RuntimeMethod_var)));
	}

IL_000e:
	{
		// lock (actionQueuesLateUpdateFunc)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesLateUpdateFunc_8;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_003c;
					}
				}
				{
					List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
			// actionQueuesLateUpdateFunc.Add(action);
			il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_6 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesLateUpdateFunc_8;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___action0;
			NullCheck(L_6);
			List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_6, L_7, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
			// noActionQueueToExecuteLateUpdateFunc = false;
			il2cpp_codegen_memory_barrier();
			((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteLateUpdateFunc_10 = (bool)0;
			// }
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityThread::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_LateUpdate_mDA8165A8A5188065A43521DC63962B8C89783AF7 (UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (noActionQueueToExecuteLateUpdateFunc)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		bool L_0 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteLateUpdateFunc_10;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// actionCopiedQueueLateUpdateFunc.Clear();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_1 = __this->___actionCopiedQueueLateUpdateFunc_9;
		NullCheck(L_1);
		List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_1, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		// lock (actionQueuesLateUpdateFunc)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesLateUpdateFunc_8;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0052;
					}
				}
				{
					List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0052:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
			// actionCopiedQueueLateUpdateFunc.AddRange(actionQueuesLateUpdateFunc);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_6 = __this->___actionCopiedQueueLateUpdateFunc_9;
			il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_7 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesLateUpdateFunc_8;
			NullCheck(L_6);
			List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D(L_6, L_7, List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
			// actionQueuesLateUpdateFunc.Clear();
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_8 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesLateUpdateFunc_8;
			NullCheck(L_8);
			List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_8, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
			// noActionQueueToExecuteLateUpdateFunc = true;
			il2cpp_codegen_memory_barrier();
			((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteLateUpdateFunc_10 = (bool)1;
			// }
			goto IL_0053;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// for (int i = 0; i < actionCopiedQueueLateUpdateFunc.Count; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_0057:
	{
		// actionCopiedQueueLateUpdateFunc[i].Invoke();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_9 = __this->___actionCopiedQueueLateUpdateFunc_9;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11;
		L_11 = List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D(L_9, L_10, List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		NullCheck(L_11);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_11, NULL);
		// for (int i = 0; i < actionCopiedQueueLateUpdateFunc.Count; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_006c:
	{
		// for (int i = 0; i < actionCopiedQueueLateUpdateFunc.Count; i++)
		int32_t L_13 = V_2;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_14 = __this->___actionCopiedQueueLateUpdateFunc_9;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_14, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityThread::executeInFixedUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_executeInFixedUpdate_m7B13D9409797E8D16911C05F77222D78B5E3555B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	bool V_1 = false;
	{
		// if (action == null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityThread_executeInFixedUpdate_m7B13D9409797E8D16911C05F77222D78B5E3555B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// lock (actionQueuesFixedUpdateFunc)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesFixedUpdateFunc_11;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_003c;
					}
				}
				{
					List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
			// actionQueuesFixedUpdateFunc.Add(action);
			il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_6 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesFixedUpdateFunc_11;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___action0;
			NullCheck(L_6);
			List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_6, L_7, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
			// noActionQueueToExecuteFixedUpdateFunc = false;
			il2cpp_codegen_memory_barrier();
			((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteFixedUpdateFunc_13 = (bool)0;
			// }
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityThread::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_FixedUpdate_m4FA30DAF97CFDFC9F6FEB7B2944E4C374B77E3E9 (UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (noActionQueueToExecuteFixedUpdateFunc)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		bool L_0 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteFixedUpdateFunc_13;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// actionCopiedQueueFixedUpdateFunc.Clear();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_1 = __this->___actionCopiedQueueFixedUpdateFunc_12;
		NullCheck(L_1);
		List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_1, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		// lock (actionQueuesFixedUpdateFunc)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesFixedUpdateFunc_11;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0052;
					}
				}
				{
					List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0052:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
			// actionCopiedQueueFixedUpdateFunc.AddRange(actionQueuesFixedUpdateFunc);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_6 = __this->___actionCopiedQueueFixedUpdateFunc_12;
			il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_7 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesFixedUpdateFunc_11;
			NullCheck(L_6);
			List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D(L_6, L_7, List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
			// actionQueuesFixedUpdateFunc.Clear();
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_8 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesFixedUpdateFunc_11;
			NullCheck(L_8);
			List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_8, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
			// noActionQueueToExecuteFixedUpdateFunc = true;
			il2cpp_codegen_memory_barrier();
			((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteFixedUpdateFunc_13 = (bool)1;
			// }
			goto IL_0053;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		// for (int i = 0; i < actionCopiedQueueFixedUpdateFunc.Count; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_0057:
	{
		// actionCopiedQueueFixedUpdateFunc[i].Invoke();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_9 = __this->___actionCopiedQueueFixedUpdateFunc_12;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11;
		L_11 = List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D(L_9, L_10, List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		NullCheck(L_11);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_11, NULL);
		// for (int i = 0; i < actionCopiedQueueFixedUpdateFunc.Count; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_006c:
	{
		// for (int i = 0; i < actionCopiedQueueFixedUpdateFunc.Count; i++)
		int32_t L_13 = V_2;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_14 = __this->___actionCopiedQueueFixedUpdateFunc_12;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_14, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityThread::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_OnDisable_m35FE2A86AD4103D74FBB1A5EB1AE6F7472D88E30 (UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == this)
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* L_0 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = null;
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___instance_4 = (UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___instance_4), (void*)(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6*)NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread__ctor_m96CC542EF4474F30A341852F82DE2838B800F24C (UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<System.Action> actionCopiedQueueUpdateFunc = new List<System.Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_0, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->___actionCopiedQueueUpdateFunc_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionCopiedQueueUpdateFunc_6), (void*)L_0);
		// List<System.Action> actionCopiedQueueLateUpdateFunc = new List<System.Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_1 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_1, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->___actionCopiedQueueLateUpdateFunc_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionCopiedQueueLateUpdateFunc_9), (void*)L_1);
		// List<System.Action> actionCopiedQueueFixedUpdateFunc = new List<System.Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_2, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->___actionCopiedQueueFixedUpdateFunc_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionCopiedQueueFixedUpdateFunc_12), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityThread::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread__cctor_m6599B227A6EA121E0BE22582ECC203841EB51C52 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static UnityThread instance = null;
		((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___instance_4 = (UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___instance_4), (void*)(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6*)NULL);
		// private static List<System.Action> actionQueuesUpdateFunc = new List<Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_0, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesUpdateFunc_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesUpdateFunc_5), (void*)L_0);
		// private volatile static bool noActionQueueToExecuteUpdateFunc = true;
		il2cpp_codegen_memory_barrier();
		((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteUpdateFunc_7 = (bool)1;
		// private static List<System.Action> actionQueuesLateUpdateFunc = new List<Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_1 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_1, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesLateUpdateFunc_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesLateUpdateFunc_8), (void*)L_1);
		// private volatile static bool noActionQueueToExecuteLateUpdateFunc = true;
		il2cpp_codegen_memory_barrier();
		((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteLateUpdateFunc_10 = (bool)1;
		// private static List<System.Action> actionQueuesFixedUpdateFunc = new List<Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_2, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesFixedUpdateFunc_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___actionQueuesFixedUpdateFunc_11), (void*)L_2);
		// private volatile static bool noActionQueueToExecuteFixedUpdateFunc = true;
		il2cpp_codegen_memory_barrier();
		((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___noActionQueueToExecuteFixedUpdateFunc_13 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityThread/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m5DF0A49D28F79C8066E3B51023F38C724970507D (U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityThread/<>c__DisplayClass12_0::<executeCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CexecuteCoroutineU3Eb__0_m8B596984CEF2C2EC3F6D37A8E7EFE524AF58E10D (U3CU3Ec__DisplayClass12_0_t4282E16D0C707FE3AF39ABC9368E998DBBB02132* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// executeInUpdate(() => instance.StartCoroutine(action));
		il2cpp_codegen_runtime_class_init_inline(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var);
		UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6* L_0 = ((UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_tEB129510E03265F279B2DF9D2278F6E459D11AC6_il2cpp_TypeInfo_var))->___instance_4;
		RuntimeObject* L_1 = __this->___action_0;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
