#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_t1339081348;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714;
// System.String
struct String_t;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_t821971233;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback
struct GADUInterstitialPaidEventCallback_t2548624492;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_t1816935820;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t539653454;
// GoogleMobileAds.iOS.MobileAdsClient
struct MobileAdsClient_t1008075298;
// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t4111548861;
// GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback
struct GADUInitializationCompleteCallback_t1402508519;
// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_t836713487;
// GoogleMobileAds.iOS.InitializationStatusClient
struct InitializationStatusClient_t1332972171;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t3939081266;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// GoogleMobileAds.iOS.RequestConfigurationClient
struct RequestConfigurationClient_t3117146206;
// GoogleMobileAds.Api.MaxAdContentRating
struct MaxAdContentRating_t2033022353;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// GoogleMobileAds.Api.RequestConfiguration/Builder
struct Builder_t3191429920;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient
struct RewardBasedVideoAdClient_t745716004;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1515976428;
// System.Delegate
struct Delegate_t1188392813;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t780121155;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t1628180368;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback
struct GADURewardBasedVideoAdDidReceiveAdCallback_t462486315;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback
struct GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback
struct GADURewardBasedVideoAdDidOpenCallback_t3638490629;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback
struct GADURewardBasedVideoAdDidStartCallback_t2792276088;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback
struct GADURewardBasedVideoAdDidCloseCallback_t623082069;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct GADURewardBasedVideoAdDidRewardCallback_t990863796;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback
struct GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback
struct GADURewardBasedVideoAdDidCompleteCallback_t2076181;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t1573687800;
// System.EventArgs
struct EventArgs_t3591816995;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t2855961722;
// GoogleMobileAds.Api.Reward
struct Reward_t3704020935;
// GoogleMobileAds.iOS.RewardedAdClient
struct RewardedAdClient_t1756845177;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t2412906204;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_t2593147193;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback
struct GADURewardedAdDidReceiveAdCallback_t3678103445;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback
struct GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback
struct GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback
struct GADURewardedAdDidOpenCallback_t4091248959;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback
struct GADURewardedAdDidCloseCallback_t2874328472;
// GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback
struct GADUUserEarnedRewardCallback_t224874987;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback
struct GADURewardedAdPaidEventCallback_t3617339775;
// GoogleMobileAds.Api.ServerSideVerificationOptions
struct ServerSideVerificationOptions_t4071074516;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t193779475;
// GoogleMobileAds.Api.AdValue
struct AdValue_t4078760168;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_t374020464;
// GoogleMobileAds.iOS.Utils
struct Utils_t143735646;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t412400163;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1645055638;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t3723909906;
// GoogleMobileAds.Api.Mediation.MediationExtras
struct MediationExtras_t2251835164;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t3472581009;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t861562559;
// GoogleMobileAds.Api.Mediation.MediationExtras[]
struct MediationExtrasU5BU5D_t4034694389;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// System.Collections.Generic.HashSet`1/Link<System.String>[]
struct LinkU5BU5D_t3969674095;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t GADUInterstitialDidDismissScreenCallback_BeginInvoke_m2866655982_MetadataUsageId;
extern const uint32_t GADUInterstitialDidFailToReceiveAdWithErrorCallback_BeginInvoke_m3478846559_MetadataUsageId;
extern const uint32_t GADUInterstitialDidReceiveAdCallback_BeginInvoke_m3761342241_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern const uint32_t GADUInterstitialPaidEventCallback_BeginInvoke_m1677921463_MetadataUsageId;
extern const uint32_t GADUInterstitialWillLeaveApplicationCallback_BeginInvoke_m4101857615_MetadataUsageId;
extern const uint32_t GADUInterstitialWillPresentScreenCallback_BeginInvoke_m3996007592_MetadataUsageId;
extern RuntimeClass* MobileAdsClient_t1008075298_il2cpp_TypeInfo_var;
extern const uint32_t MobileAdsClient_get_Instance_m614207227_MetadataUsageId;
extern RuntimeClass* GADUInitializationCompleteCallback_t1402508519_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MobileAdsClient_InitializationCompleteCallback_m3680942184_RuntimeMethod_var;
extern const uint32_t MobileAdsClient_Initialize_m3654731405_MetadataUsageId;
extern RuntimeClass* RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var;
extern const uint32_t MobileAdsClient_SetRequestConfiguration_m948344488_MetadataUsageId;
extern const uint32_t MobileAdsClient_GetRequestConfiguration_m2687223028_MetadataUsageId;
extern RuntimeClass* InitializationStatusClient_t1332972171_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m1459356442_RuntimeMethod_var;
extern const uint32_t MobileAdsClient_InitializationCompleteCallback_m3680942184_MetadataUsageId;
extern const uint32_t MobileAdsClient_IntPtrToMobileAdsClient_m124165820_MetadataUsageId;
extern const uint32_t MobileAdsClient__cctor_m1893070056_MetadataUsageId;
extern const uint32_t GADUInitializationCompleteCallback_BeginInvoke_m1876453826_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Count_m2276455407_RuntimeMethod_var;
extern const RuntimeMethod* List_1_CopyTo_m173105794_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m726768612_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m1896014553_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m914270746_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m1453157128_RuntimeMethod_var;
extern const uint32_t RequestConfigurationClient_SetRequestConfiguration_m2347446752_MetadataUsageId;
extern RuntimeClass* Builder_t3191429920_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Nullable_1__ctor_m2005978086_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m3105844368_RuntimeMethod_var;
extern const uint32_t RequestConfigurationClient_GetRequestConfiguration_m4085141006_MetadataUsageId;
extern const uint32_t RequestConfigurationClient__cctor_m2530493754_MetadataUsageId;
extern RuntimeClass* EventHandler_1_t1515976428_il2cpp_TypeInfo_var;
extern const uint32_t RewardBasedVideoAdClient_add_OnAdLoaded_m3218050284_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_remove_OnAdLoaded_m2868046009_MetadataUsageId;
extern RuntimeClass* EventHandler_1_t780121155_il2cpp_TypeInfo_var;
extern const uint32_t RewardBasedVideoAdClient_add_OnAdFailedToLoad_m443021331_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_remove_OnAdFailedToLoad_m1420800066_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_add_OnAdOpening_m3966245426_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_remove_OnAdOpening_m1354149187_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_add_OnAdStarted_m1623615024_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_remove_OnAdStarted_m1749329417_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_add_OnAdClosed_m3611849063_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_remove_OnAdClosed_m2602921654_MetadataUsageId;
extern RuntimeClass* EventHandler_1_t1628180368_il2cpp_TypeInfo_var;
extern const uint32_t RewardBasedVideoAdClient_add_OnAdRewarded_m2434830284_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_remove_OnAdRewarded_m605966436_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_add_OnAdLeavingApplication_m4012122503_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_remove_OnAdLeavingApplication_m1830931170_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_add_OnAdCompleted_m3007550748_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_remove_OnAdCompleted_m276678918_MetadataUsageId;
extern RuntimeClass* RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardBasedVideoAdDidReceiveAdCallback_t462486315_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardBasedVideoAdDidOpenCallback_t3638490629_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardBasedVideoAdDidStartCallback_t2792276088_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardBasedVideoAdDidCloseCallback_t623082069_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardBasedVideoAdDidRewardCallback_t990863796_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardBasedVideoAdDidCompleteCallback_t2076181_il2cpp_TypeInfo_var;
extern const RuntimeMethod* RewardBasedVideoAdClient_RewardBasedVideoAdDidReceiveAdCallback_m1892259112_RuntimeMethod_var;
extern const RuntimeMethod* RewardBasedVideoAdClient_RewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_m829880647_RuntimeMethod_var;
extern const RuntimeMethod* RewardBasedVideoAdClient_RewardBasedVideoAdDidOpenCallback_m141900546_RuntimeMethod_var;
extern const RuntimeMethod* RewardBasedVideoAdClient_RewardBasedVideoAdDidStartCallback_m856913864_RuntimeMethod_var;
extern const RuntimeMethod* RewardBasedVideoAdClient_RewardBasedVideoAdDidCloseCallback_m3525630988_RuntimeMethod_var;
extern const RuntimeMethod* RewardBasedVideoAdClient_RewardBasedVideoAdDidRewardUserCallback_m226148102_RuntimeMethod_var;
extern const RuntimeMethod* RewardBasedVideoAdClient_RewardBasedVideoAdWillLeaveApplicationCallback_m3803009012_RuntimeMethod_var;
extern const RuntimeMethod* RewardBasedVideoAdClient_RewardBasedVideoAdDidCompleteCallback_m1288895517_RuntimeMethod_var;
extern const uint32_t RewardBasedVideoAdClient_CreateRewardBasedVideoAd_m243890621_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_DestroyRewardedVideoAd_m4144426805_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m3837310126_RuntimeMethod_var;
extern const uint32_t RewardBasedVideoAdClient_RewardBasedVideoAdDidReceiveAdCallback_m1892259112_MetadataUsageId;
extern RuntimeClass* AdFailedToLoadEventArgs_t2855961722_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m3162681867_RuntimeMethod_var;
extern const uint32_t RewardBasedVideoAdClient_RewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_m829880647_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_RewardBasedVideoAdDidOpenCallback_m141900546_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_RewardBasedVideoAdDidStartCallback_m856913864_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_RewardBasedVideoAdDidCloseCallback_m3525630988_MetadataUsageId;
extern RuntimeClass* Reward_t3704020935_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m198145918_RuntimeMethod_var;
extern const uint32_t RewardBasedVideoAdClient_RewardBasedVideoAdDidRewardUserCallback_m226148102_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_RewardBasedVideoAdWillLeaveApplicationCallback_m3803009012_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_RewardBasedVideoAdDidCompleteCallback_m1288895517_MetadataUsageId;
extern const uint32_t RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713_MetadataUsageId;
extern const uint32_t GADURewardBasedVideoAdDidCloseCallback_BeginInvoke_m336859444_MetadataUsageId;
extern const uint32_t GADURewardBasedVideoAdDidCompleteCallback_BeginInvoke_m433956347_MetadataUsageId;
extern const uint32_t GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m2459319857_MetadataUsageId;
extern const uint32_t GADURewardBasedVideoAdDidOpenCallback_BeginInvoke_m1633870105_MetadataUsageId;
extern const uint32_t GADURewardBasedVideoAdDidReceiveAdCallback_BeginInvoke_m1763996859_MetadataUsageId;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern const uint32_t GADURewardBasedVideoAdDidRewardCallback_BeginInvoke_m2575968676_MetadataUsageId;
extern const uint32_t GADURewardBasedVideoAdDidStartCallback_BeginInvoke_m1266548090_MetadataUsageId;
extern const uint32_t GADURewardBasedVideoAdWillLeaveApplicationCallback_BeginInvoke_m2152875379_MetadataUsageId;
extern const uint32_t RewardedAdClient_add_OnAdLoaded_m3978882217_MetadataUsageId;
extern const uint32_t RewardedAdClient_remove_OnAdLoaded_m219583257_MetadataUsageId;
extern RuntimeClass* EventHandler_1_t2412906204_il2cpp_TypeInfo_var;
extern const uint32_t RewardedAdClient_add_OnAdFailedToLoad_m177930082_MetadataUsageId;
extern const uint32_t RewardedAdClient_remove_OnAdFailedToLoad_m976326327_MetadataUsageId;
extern const uint32_t RewardedAdClient_add_OnAdFailedToShow_m4115919787_MetadataUsageId;
extern const uint32_t RewardedAdClient_remove_OnAdFailedToShow_m3394898885_MetadataUsageId;
extern const uint32_t RewardedAdClient_add_OnAdOpening_m3774170023_MetadataUsageId;
extern const uint32_t RewardedAdClient_remove_OnAdOpening_m742956261_MetadataUsageId;
extern const uint32_t RewardedAdClient_add_OnAdStarted_m3500009786_MetadataUsageId;
extern const uint32_t RewardedAdClient_remove_OnAdStarted_m2773331646_MetadataUsageId;
extern const uint32_t RewardedAdClient_add_OnAdClosed_m4133592020_MetadataUsageId;
extern const uint32_t RewardedAdClient_remove_OnAdClosed_m2626859137_MetadataUsageId;
extern const uint32_t RewardedAdClient_add_OnUserEarnedReward_m3496526116_MetadataUsageId;
extern const uint32_t RewardedAdClient_remove_OnUserEarnedReward_m3959097112_MetadataUsageId;
extern RuntimeClass* EventHandler_1_t2593147193_il2cpp_TypeInfo_var;
extern const uint32_t RewardedAdClient_add_OnPaidEvent_m1570589511_MetadataUsageId;
extern const uint32_t RewardedAdClient_remove_OnPaidEvent_m2297833985_MetadataUsageId;
extern RuntimeClass* RewardedAdClient_t1756845177_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardedAdDidReceiveAdCallback_t3678103445_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardedAdDidOpenCallback_t4091248959_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardedAdDidCloseCallback_t2874328472_il2cpp_TypeInfo_var;
extern RuntimeClass* GADUUserEarnedRewardCallback_t224874987_il2cpp_TypeInfo_var;
extern RuntimeClass* GADURewardedAdPaidEventCallback_t3617339775_il2cpp_TypeInfo_var;
extern const RuntimeMethod* RewardedAdClient_RewardedAdDidReceiveAdCallback_m1737487716_RuntimeMethod_var;
extern const RuntimeMethod* RewardedAdClient_RewardedAdDidFailToReceiveAdWithErrorCallback_m394272376_RuntimeMethod_var;
extern const RuntimeMethod* RewardedAdClient_RewardedAdDidFailToShowAdWithErrorCallback_m3597122014_RuntimeMethod_var;
extern const RuntimeMethod* RewardedAdClient_RewardedAdDidOpenCallback_m2709578822_RuntimeMethod_var;
extern const RuntimeMethod* RewardedAdClient_RewardedAdDidCloseCallback_m29586772_RuntimeMethod_var;
extern const RuntimeMethod* RewardedAdClient_RewardedAdUserDidEarnRewardCallback_m478552977_RuntimeMethod_var;
extern const RuntimeMethod* RewardedAdClient_RewardedAdPaidEventCallback_m3158905489_RuntimeMethod_var;
extern const uint32_t RewardedAdClient_CreateRewardedAd_m622719777_MetadataUsageId;
extern const uint32_t RewardedAdClient_GetRewardItem_m4220804077_MetadataUsageId;
extern const uint32_t RewardedAdClient_DestroyRewardedAd_m1401785117_MetadataUsageId;
extern const uint32_t RewardedAdClient_RewardedAdDidReceiveAdCallback_m1737487716_MetadataUsageId;
extern RuntimeClass* AdErrorEventArgs_t193779475_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m121066725_RuntimeMethod_var;
extern const uint32_t RewardedAdClient_RewardedAdDidFailToReceiveAdWithErrorCallback_m394272376_MetadataUsageId;
extern const uint32_t RewardedAdClient_RewardedAdDidFailToShowAdWithErrorCallback_m3597122014_MetadataUsageId;
extern const uint32_t RewardedAdClient_RewardedAdDidOpenCallback_m2709578822_MetadataUsageId;
extern const uint32_t RewardedAdClient_RewardedAdDidCloseCallback_m29586772_MetadataUsageId;
extern const uint32_t RewardedAdClient_RewardedAdUserDidEarnRewardCallback_m478552977_MetadataUsageId;
extern RuntimeClass* AdValue_t4078760168_il2cpp_TypeInfo_var;
extern RuntimeClass* AdValueEventArgs_t374020464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m2555290985_RuntimeMethod_var;
extern const uint32_t RewardedAdClient_RewardedAdPaidEventCallback_m3158905489_MetadataUsageId;
extern const uint32_t RewardedAdClient_IntPtrToRewardedAdClient_m789117288_MetadataUsageId;
extern const uint32_t GADURewardedAdDidCloseCallback_BeginInvoke_m557834969_MetadataUsageId;
extern const uint32_t GADURewardedAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m3006431648_MetadataUsageId;
extern const uint32_t GADURewardedAdDidFailToShowAdWithErrorCallback_BeginInvoke_m3086557590_MetadataUsageId;
extern const uint32_t GADURewardedAdDidOpenCallback_BeginInvoke_m115905619_MetadataUsageId;
extern const uint32_t GADURewardedAdDidReceiveAdCallback_BeginInvoke_m4278760966_MetadataUsageId;
extern const uint32_t GADURewardedAdPaidEventCallback_BeginInvoke_m1947158652_MetadataUsageId;
extern const uint32_t GADUUserEarnedRewardCallback_BeginInvoke_m2809280694_MetadataUsageId;
extern const RuntimeMethod* HashSet_1_GetEnumerator_m1519394295_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3165364755_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2530340477_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m823536440_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3752588592_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3383387960_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3603343449_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2026665411_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3308303329_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m1358049705_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m2043790361_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m2088687324_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3741069969_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m256290237_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m4035971863_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3704352721_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1558613789_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3184375205_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1807940103_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2198401511_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1516320239_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m942627990_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4093686627_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3659158765_RuntimeMethod_var;
extern String_t* _stringLiteral1979715244;
extern String_t* _stringLiteral3452614543;
extern String_t* _stringLiteral454589178;
extern const uint32_t Utils_BuildAdRequest_m293820848_MetadataUsageId;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern const uint32_t Utils_PtrToString_m1166713158_MetadataUsageId;
extern RuntimeClass* IntPtrU5BU5D_t4013366056_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m199233495_RuntimeMethod_var;
extern const uint32_t Utils_PtrArrayToManagedList_m1310791226_MetadataUsageId;

struct StringU5BU5D_t1281789340;
struct IntPtrU5BU5D_t4013366056;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef UTILS_T143735646_H
#define UTILS_T143735646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.Utils
struct  Utils_t143735646  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T143735646_H
#ifndef SERVERSIDEVERIFICATIONOPTIONS_T4071074516_H
#define SERVERSIDEVERIFICATIONOPTIONS_T4071074516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.ServerSideVerificationOptions
struct  ServerSideVerificationOptions_t4071074516  : public RuntimeObject
{
public:
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_0;
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::<CustomData>k__BackingField
	String_t* ___U3CCustomDataU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ServerSideVerificationOptions_t4071074516, ___U3CUserIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_0() const { return ___U3CUserIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_0() { return &___U3CUserIdU3Ek__BackingField_0; }
	inline void set_U3CUserIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserIdU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CCustomDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ServerSideVerificationOptions_t4071074516, ___U3CCustomDataU3Ek__BackingField_1)); }
	inline String_t* get_U3CCustomDataU3Ek__BackingField_1() const { return ___U3CCustomDataU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCustomDataU3Ek__BackingField_1() { return &___U3CCustomDataU3Ek__BackingField_1; }
	inline void set_U3CCustomDataU3Ek__BackingField_1(String_t* value)
	{
		___U3CCustomDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCustomDataU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERSIDEVERIFICATIONOPTIONS_T4071074516_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef MAXADCONTENTRATING_T2033022353_H
#define MAXADCONTENTRATING_T2033022353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.MaxAdContentRating
struct  MaxAdContentRating_t2033022353  : public RuntimeObject
{
public:
	// System.String GoogleMobileAds.Api.MaxAdContentRating::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MaxAdContentRating_t2033022353, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAXADCONTENTRATING_T2033022353_H
#ifndef MEDIATIONEXTRAS_T2251835164_H
#define MEDIATIONEXTRAS_T2251835164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.Mediation.MediationExtras
struct  MediationExtras_t2251835164  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.Mediation.MediationExtras::<Extras>k__BackingField
	Dictionary_2_t1632706988 * ___U3CExtrasU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MediationExtras_t2251835164, ___U3CExtrasU3Ek__BackingField_0)); }
	inline Dictionary_2_t1632706988 * get_U3CExtrasU3Ek__BackingField_0() const { return ___U3CExtrasU3Ek__BackingField_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_U3CExtrasU3Ek__BackingField_0() { return &___U3CExtrasU3Ek__BackingField_0; }
	inline void set_U3CExtrasU3Ek__BackingField_0(Dictionary_2_t1632706988 * value)
	{
		___U3CExtrasU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExtrasU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIATIONEXTRAS_T2251835164_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef LIST_1_T3723909906_H
#define LIST_1_T3723909906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct  List_1_t3723909906  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MediationExtrasU5BU5D_t4034694389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3723909906, ____items_1)); }
	inline MediationExtrasU5BU5D_t4034694389* get__items_1() const { return ____items_1; }
	inline MediationExtrasU5BU5D_t4034694389** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MediationExtrasU5BU5D_t4034694389* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3723909906, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3723909906, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3723909906_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MediationExtrasU5BU5D_t4034694389* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3723909906_StaticFields, ___EmptyArray_4)); }
	inline MediationExtrasU5BU5D_t4034694389* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MediationExtrasU5BU5D_t4034694389** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MediationExtrasU5BU5D_t4034694389* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3723909906_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1632706988_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t132201056 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t132201056 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t132201056 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t132201056 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
#ifndef HASHSET_1_T412400163_H
#define HASHSET_1_T412400163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_t412400163  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t385246372* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t3969674095* ___links_1;
	// T[] System.Collections.Generic.HashSet`1::slots
	StringU5BU5D_t1281789340* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	RuntimeObject* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t950877179 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_9;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___table_0)); }
	inline Int32U5BU5D_t385246372* get_table_0() const { return ___table_0; }
	inline Int32U5BU5D_t385246372** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Int32U5BU5D_t385246372* value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of_links_1() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___links_1)); }
	inline LinkU5BU5D_t3969674095* get_links_1() const { return ___links_1; }
	inline LinkU5BU5D_t3969674095** get_address_of_links_1() { return &___links_1; }
	inline void set_links_1(LinkU5BU5D_t3969674095* value)
	{
		___links_1 = value;
		Il2CppCodeGenWriteBarrier((&___links_1), value);
	}

	inline static int32_t get_offset_of_slots_2() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___slots_2)); }
	inline StringU5BU5D_t1281789340* get_slots_2() const { return ___slots_2; }
	inline StringU5BU5D_t1281789340** get_address_of_slots_2() { return &___slots_2; }
	inline void set_slots_2(StringU5BU5D_t1281789340* value)
	{
		___slots_2 = value;
		Il2CppCodeGenWriteBarrier((&___slots_2), value);
	}

	inline static int32_t get_offset_of_touched_3() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___touched_3)); }
	inline int32_t get_touched_3() const { return ___touched_3; }
	inline int32_t* get_address_of_touched_3() { return &___touched_3; }
	inline void set_touched_3(int32_t value)
	{
		___touched_3 = value;
	}

	inline static int32_t get_offset_of_empty_slot_4() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___empty_slot_4)); }
	inline int32_t get_empty_slot_4() const { return ___empty_slot_4; }
	inline int32_t* get_address_of_empty_slot_4() { return &___empty_slot_4; }
	inline void set_empty_slot_4(int32_t value)
	{
		___empty_slot_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_comparer_7() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___comparer_7)); }
	inline RuntimeObject* get_comparer_7() const { return ___comparer_7; }
	inline RuntimeObject** get_address_of_comparer_7() { return &___comparer_7; }
	inline void set_comparer_7(RuntimeObject* value)
	{
		___comparer_7 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_7), value);
	}

	inline static int32_t get_offset_of_si_8() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___si_8)); }
	inline SerializationInfo_t950877179 * get_si_8() const { return ___si_8; }
	inline SerializationInfo_t950877179 ** get_address_of_si_8() { return &___si_8; }
	inline void set_si_8(SerializationInfo_t950877179 * value)
	{
		___si_8 = value;
		Il2CppCodeGenWriteBarrier((&___si_8), value);
	}

	inline static int32_t get_offset_of_generation_9() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___generation_9)); }
	inline int32_t get_generation_9() const { return ___generation_9; }
	inline int32_t* get_address_of_generation_9() { return &___generation_9; }
	inline void set_generation_9(int32_t value)
	{
		___generation_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T412400163_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENUMERATOR_T1318186487_H
#define ENUMERATOR_T1318186487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>
struct  Enumerator_t1318186487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3723909906 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MediationExtras_t2251835164 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1318186487, ___l_0)); }
	inline List_1_t3723909906 * get_l_0() const { return ___l_0; }
	inline List_1_t3723909906 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3723909906 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1318186487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1318186487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1318186487, ___current_3)); }
	inline MediationExtras_t2251835164 * get_current_3() const { return ___current_3; }
	inline MediationExtras_t2251835164 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MediationExtras_t2251835164 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1318186487_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T4030379155_H
#define KEYVALUEPAIR_2_T4030379155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t4030379155 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4030379155_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef ADFAILEDTOLOADEVENTARGS_T2855961722_H
#define ADFAILEDTOLOADEVENTARGS_T2855961722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct  AdFailedToLoadEventArgs_t2855961722  : public EventArgs_t3591816995
{
public:
	// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_t2855961722, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMessageU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADFAILEDTOLOADEVENTARGS_T2855961722_H
#ifndef ENUMERATOR_T913802012_H
#define ENUMERATOR_T913802012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_t913802012 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3319525431 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___l_0)); }
	inline List_1_t3319525431 * get_l_0() const { return ___l_0; }
	inline List_1_t3319525431 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3319525431 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T913802012_H
#ifndef ENUMERATOR_T3350232909_H
#define ENUMERATOR_T3350232909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct  Enumerator_t3350232909 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::hashset
	HashSet_1_t1645055638 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_hashset_0() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___hashset_0)); }
	inline HashSet_1_t1645055638 * get_hashset_0() const { return ___hashset_0; }
	inline HashSet_1_t1645055638 ** get_address_of_hashset_0() { return &___hashset_0; }
	inline void set_hashset_0(HashSet_1_t1645055638 * value)
	{
		___hashset_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashset_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3350232909_H
#ifndef ENUMERATOR_T2117577434_H
#define ENUMERATOR_T2117577434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<System.String>
struct  Enumerator_t2117577434 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::hashset
	HashSet_1_t412400163 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_hashset_0() { return static_cast<int32_t>(offsetof(Enumerator_t2117577434, ___hashset_0)); }
	inline HashSet_1_t412400163 * get_hashset_0() const { return ___hashset_0; }
	inline HashSet_1_t412400163 ** get_address_of_hashset_0() { return &___hashset_0; }
	inline void set_hashset_0(HashSet_1_t412400163 * value)
	{
		___hashset_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashset_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2117577434, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2117577434, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2117577434, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2117577434_H
#ifndef ADVALUEEVENTARGS_T374020464_H
#define ADVALUEEVENTARGS_T374020464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdValueEventArgs
struct  AdValueEventArgs_t374020464  : public EventArgs_t3591816995
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t4078760168 * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_t374020464, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_t4078760168 * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_t4078760168 ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_t4078760168 * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAdValueU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADVALUEEVENTARGS_T374020464_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef REWARD_T3704020935_H
#define REWARD_T3704020935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.Reward
struct  Reward_t3704020935  : public EventArgs_t3591816995
{
public:
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Reward_t3704020935, ___U3CTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAmountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Reward_t3704020935, ___U3CAmountU3Ek__BackingField_2)); }
	inline double get_U3CAmountU3Ek__BackingField_2() const { return ___U3CAmountU3Ek__BackingField_2; }
	inline double* get_address_of_U3CAmountU3Ek__BackingField_2() { return &___U3CAmountU3Ek__BackingField_2; }
	inline void set_U3CAmountU3Ek__BackingField_2(double value)
	{
		___U3CAmountU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REWARD_T3704020935_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef ADERROREVENTARGS_T193779475_H
#define ADERROREVENTARGS_T193779475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdErrorEventArgs
struct  AdErrorEventArgs_t193779475  : public EventArgs_t3591816995
{
public:
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t193779475, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMessageU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADERROREVENTARGS_T193779475_H
#ifndef MONOPINVOKECALLBACKATTRIBUTE_T3472581009_H
#define MONOPINVOKECALLBACKATTRIBUTE_T3472581009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t3472581009  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPINVOKECALLBACKATTRIBUTE_T3472581009_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NATIVEADTYPES_T3925888818_H
#define NATIVEADTYPES_T3925888818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.NativeAdTypes
struct  NativeAdTypes_t3925888818 
{
public:
	// System.Int32 GoogleMobileAds.iOS.NativeAdTypes::CustomTemplateAd
	int32_t ___CustomTemplateAd_0;

public:
	inline static int32_t get_offset_of_CustomTemplateAd_0() { return static_cast<int32_t>(offsetof(NativeAdTypes_t3925888818, ___CustomTemplateAd_0)); }
	inline int32_t get_CustomTemplateAd_0() const { return ___CustomTemplateAd_0; }
	inline int32_t* get_address_of_CustomTemplateAd_0() { return &___CustomTemplateAd_0; }
	inline void set_CustomTemplateAd_0(int32_t value)
	{
		___CustomTemplateAd_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEADTYPES_T3925888818_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef REWARDEDADCLIENT_T1756845177_H
#define REWARDEDADCLIENT_T1756845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardedAdClient
struct  RewardedAdClient_t1756845177  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.RewardedAdClient::rewardedAdPtr
	intptr_t ___rewardedAdPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.RewardedAdClient::rewardedAdClientPtr
	intptr_t ___rewardedAdClientPtr_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardedAdClient::OnAdLoaded
	EventHandler_1_t1515976428 * ___OnAdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.iOS.RewardedAdClient::OnAdFailedToLoad
	EventHandler_1_t2412906204 * ___OnAdFailedToLoad_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.iOS.RewardedAdClient::OnAdFailedToShow
	EventHandler_1_t2412906204 * ___OnAdFailedToShow_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardedAdClient::OnAdOpening
	EventHandler_1_t1515976428 * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardedAdClient::OnAdStarted
	EventHandler_1_t1515976428 * ___OnAdStarted_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardedAdClient::OnAdClosed
	EventHandler_1_t1515976428 * ___OnAdClosed_7;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.iOS.RewardedAdClient::OnUserEarnedReward
	EventHandler_1_t1628180368 * ___OnUserEarnedReward_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.iOS.RewardedAdClient::OnPaidEvent
	EventHandler_1_t2593147193 * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_rewardedAdPtr_0() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177, ___rewardedAdPtr_0)); }
	inline intptr_t get_rewardedAdPtr_0() const { return ___rewardedAdPtr_0; }
	inline intptr_t* get_address_of_rewardedAdPtr_0() { return &___rewardedAdPtr_0; }
	inline void set_rewardedAdPtr_0(intptr_t value)
	{
		___rewardedAdPtr_0 = value;
	}

	inline static int32_t get_offset_of_rewardedAdClientPtr_1() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177, ___rewardedAdClientPtr_1)); }
	inline intptr_t get_rewardedAdClientPtr_1() const { return ___rewardedAdClientPtr_1; }
	inline intptr_t* get_address_of_rewardedAdClientPtr_1() { return &___rewardedAdClientPtr_1; }
	inline void set_rewardedAdClientPtr_1(intptr_t value)
	{
		___rewardedAdClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_2() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177, ___OnAdLoaded_2)); }
	inline EventHandler_1_t1515976428 * get_OnAdLoaded_2() const { return ___OnAdLoaded_2; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLoaded_2() { return &___OnAdLoaded_2; }
	inline void set_OnAdLoaded_2(EventHandler_1_t1515976428 * value)
	{
		___OnAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLoaded_2), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_3() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177, ___OnAdFailedToLoad_3)); }
	inline EventHandler_1_t2412906204 * get_OnAdFailedToLoad_3() const { return ___OnAdFailedToLoad_3; }
	inline EventHandler_1_t2412906204 ** get_address_of_OnAdFailedToLoad_3() { return &___OnAdFailedToLoad_3; }
	inline void set_OnAdFailedToLoad_3(EventHandler_1_t2412906204 * value)
	{
		___OnAdFailedToLoad_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToLoad_3), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_4() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177, ___OnAdFailedToShow_4)); }
	inline EventHandler_1_t2412906204 * get_OnAdFailedToShow_4() const { return ___OnAdFailedToShow_4; }
	inline EventHandler_1_t2412906204 ** get_address_of_OnAdFailedToShow_4() { return &___OnAdFailedToShow_4; }
	inline void set_OnAdFailedToShow_4(EventHandler_1_t2412906204 * value)
	{
		___OnAdFailedToShow_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToShow_4), value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177, ___OnAdOpening_5)); }
	inline EventHandler_1_t1515976428 * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_t1515976428 * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdOpening_5), value);
	}

	inline static int32_t get_offset_of_OnAdStarted_6() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177, ___OnAdStarted_6)); }
	inline EventHandler_1_t1515976428 * get_OnAdStarted_6() const { return ___OnAdStarted_6; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdStarted_6() { return &___OnAdStarted_6; }
	inline void set_OnAdStarted_6(EventHandler_1_t1515976428 * value)
	{
		___OnAdStarted_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdStarted_6), value);
	}

	inline static int32_t get_offset_of_OnAdClosed_7() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177, ___OnAdClosed_7)); }
	inline EventHandler_1_t1515976428 * get_OnAdClosed_7() const { return ___OnAdClosed_7; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdClosed_7() { return &___OnAdClosed_7; }
	inline void set_OnAdClosed_7(EventHandler_1_t1515976428 * value)
	{
		___OnAdClosed_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdClosed_7), value);
	}

	inline static int32_t get_offset_of_OnUserEarnedReward_8() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177, ___OnUserEarnedReward_8)); }
	inline EventHandler_1_t1628180368 * get_OnUserEarnedReward_8() const { return ___OnUserEarnedReward_8; }
	inline EventHandler_1_t1628180368 ** get_address_of_OnUserEarnedReward_8() { return &___OnUserEarnedReward_8; }
	inline void set_OnUserEarnedReward_8(EventHandler_1_t1628180368 * value)
	{
		___OnUserEarnedReward_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnUserEarnedReward_8), value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177, ___OnPaidEvent_9)); }
	inline EventHandler_1_t2593147193 * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_t2593147193 ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_t2593147193 * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___OnPaidEvent_9), value);
	}
};

struct RewardedAdClient_t1756845177_StaticFields
{
public:
	// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback GoogleMobileAds.iOS.RewardedAdClient::<>f__mg$cache0
	GADURewardedAdDidReceiveAdCallback_t3678103445 * ___U3CU3Ef__mgU24cache0_10;
	// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback GoogleMobileAds.iOS.RewardedAdClient::<>f__mg$cache1
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * ___U3CU3Ef__mgU24cache1_11;
	// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback GoogleMobileAds.iOS.RewardedAdClient::<>f__mg$cache2
	GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * ___U3CU3Ef__mgU24cache2_12;
	// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback GoogleMobileAds.iOS.RewardedAdClient::<>f__mg$cache3
	GADURewardedAdDidOpenCallback_t4091248959 * ___U3CU3Ef__mgU24cache3_13;
	// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback GoogleMobileAds.iOS.RewardedAdClient::<>f__mg$cache4
	GADURewardedAdDidCloseCallback_t2874328472 * ___U3CU3Ef__mgU24cache4_14;
	// GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback GoogleMobileAds.iOS.RewardedAdClient::<>f__mg$cache5
	GADUUserEarnedRewardCallback_t224874987 * ___U3CU3Ef__mgU24cache5_15;
	// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback GoogleMobileAds.iOS.RewardedAdClient::<>f__mg$cache6
	GADURewardedAdPaidEventCallback_t3617339775 * ___U3CU3Ef__mgU24cache6_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_10() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177_StaticFields, ___U3CU3Ef__mgU24cache0_10)); }
	inline GADURewardedAdDidReceiveAdCallback_t3678103445 * get_U3CU3Ef__mgU24cache0_10() const { return ___U3CU3Ef__mgU24cache0_10; }
	inline GADURewardedAdDidReceiveAdCallback_t3678103445 ** get_address_of_U3CU3Ef__mgU24cache0_10() { return &___U3CU3Ef__mgU24cache0_10; }
	inline void set_U3CU3Ef__mgU24cache0_10(GADURewardedAdDidReceiveAdCallback_t3678103445 * value)
	{
		___U3CU3Ef__mgU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_11() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177_StaticFields, ___U3CU3Ef__mgU24cache1_11)); }
	inline GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * get_U3CU3Ef__mgU24cache1_11() const { return ___U3CU3Ef__mgU24cache1_11; }
	inline GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 ** get_address_of_U3CU3Ef__mgU24cache1_11() { return &___U3CU3Ef__mgU24cache1_11; }
	inline void set_U3CU3Ef__mgU24cache1_11(GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * value)
	{
		___U3CU3Ef__mgU24cache1_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_12() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177_StaticFields, ___U3CU3Ef__mgU24cache2_12)); }
	inline GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * get_U3CU3Ef__mgU24cache2_12() const { return ___U3CU3Ef__mgU24cache2_12; }
	inline GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 ** get_address_of_U3CU3Ef__mgU24cache2_12() { return &___U3CU3Ef__mgU24cache2_12; }
	inline void set_U3CU3Ef__mgU24cache2_12(GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * value)
	{
		___U3CU3Ef__mgU24cache2_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_13() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177_StaticFields, ___U3CU3Ef__mgU24cache3_13)); }
	inline GADURewardedAdDidOpenCallback_t4091248959 * get_U3CU3Ef__mgU24cache3_13() const { return ___U3CU3Ef__mgU24cache3_13; }
	inline GADURewardedAdDidOpenCallback_t4091248959 ** get_address_of_U3CU3Ef__mgU24cache3_13() { return &___U3CU3Ef__mgU24cache3_13; }
	inline void set_U3CU3Ef__mgU24cache3_13(GADURewardedAdDidOpenCallback_t4091248959 * value)
	{
		___U3CU3Ef__mgU24cache3_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_14() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177_StaticFields, ___U3CU3Ef__mgU24cache4_14)); }
	inline GADURewardedAdDidCloseCallback_t2874328472 * get_U3CU3Ef__mgU24cache4_14() const { return ___U3CU3Ef__mgU24cache4_14; }
	inline GADURewardedAdDidCloseCallback_t2874328472 ** get_address_of_U3CU3Ef__mgU24cache4_14() { return &___U3CU3Ef__mgU24cache4_14; }
	inline void set_U3CU3Ef__mgU24cache4_14(GADURewardedAdDidCloseCallback_t2874328472 * value)
	{
		___U3CU3Ef__mgU24cache4_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_15() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177_StaticFields, ___U3CU3Ef__mgU24cache5_15)); }
	inline GADUUserEarnedRewardCallback_t224874987 * get_U3CU3Ef__mgU24cache5_15() const { return ___U3CU3Ef__mgU24cache5_15; }
	inline GADUUserEarnedRewardCallback_t224874987 ** get_address_of_U3CU3Ef__mgU24cache5_15() { return &___U3CU3Ef__mgU24cache5_15; }
	inline void set_U3CU3Ef__mgU24cache5_15(GADUUserEarnedRewardCallback_t224874987 * value)
	{
		___U3CU3Ef__mgU24cache5_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_16() { return static_cast<int32_t>(offsetof(RewardedAdClient_t1756845177_StaticFields, ___U3CU3Ef__mgU24cache6_16)); }
	inline GADURewardedAdPaidEventCallback_t3617339775 * get_U3CU3Ef__mgU24cache6_16() const { return ___U3CU3Ef__mgU24cache6_16; }
	inline GADURewardedAdPaidEventCallback_t3617339775 ** get_address_of_U3CU3Ef__mgU24cache6_16() { return &___U3CU3Ef__mgU24cache6_16; }
	inline void set_U3CU3Ef__mgU24cache6_16(GADURewardedAdPaidEventCallback_t3617339775 * value)
	{
		___U3CU3Ef__mgU24cache6_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REWARDEDADCLIENT_T1756845177_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef MOBILEADSCLIENT_T1008075298_H
#define MOBILEADSCLIENT_T1008075298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.MobileAdsClient
struct  MobileAdsClient_t1008075298  : public RuntimeObject
{
public:
	// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient> GoogleMobileAds.iOS.MobileAdsClient::initCompleteAction
	Action_1_t4111548861 * ___initCompleteAction_1;
	// System.IntPtr GoogleMobileAds.iOS.MobileAdsClient::mobileAdsClientPtr
	intptr_t ___mobileAdsClientPtr_2;

public:
	inline static int32_t get_offset_of_initCompleteAction_1() { return static_cast<int32_t>(offsetof(MobileAdsClient_t1008075298, ___initCompleteAction_1)); }
	inline Action_1_t4111548861 * get_initCompleteAction_1() const { return ___initCompleteAction_1; }
	inline Action_1_t4111548861 ** get_address_of_initCompleteAction_1() { return &___initCompleteAction_1; }
	inline void set_initCompleteAction_1(Action_1_t4111548861 * value)
	{
		___initCompleteAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___initCompleteAction_1), value);
	}

	inline static int32_t get_offset_of_mobileAdsClientPtr_2() { return static_cast<int32_t>(offsetof(MobileAdsClient_t1008075298, ___mobileAdsClientPtr_2)); }
	inline intptr_t get_mobileAdsClientPtr_2() const { return ___mobileAdsClientPtr_2; }
	inline intptr_t* get_address_of_mobileAdsClientPtr_2() { return &___mobileAdsClientPtr_2; }
	inline void set_mobileAdsClientPtr_2(intptr_t value)
	{
		___mobileAdsClientPtr_2 = value;
	}
};

struct MobileAdsClient_t1008075298_StaticFields
{
public:
	// GoogleMobileAds.iOS.MobileAdsClient GoogleMobileAds.iOS.MobileAdsClient::instance
	MobileAdsClient_t1008075298 * ___instance_0;
	// GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback GoogleMobileAds.iOS.MobileAdsClient::<>f__mg$cache0
	GADUInitializationCompleteCallback_t1402508519 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(MobileAdsClient_t1008075298_StaticFields, ___instance_0)); }
	inline MobileAdsClient_t1008075298 * get_instance_0() const { return ___instance_0; }
	inline MobileAdsClient_t1008075298 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(MobileAdsClient_t1008075298 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(MobileAdsClient_t1008075298_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline GADUInitializationCompleteCallback_t1402508519 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline GADUInitializationCompleteCallback_t1402508519 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(GADUInitializationCompleteCallback_t1402508519 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEADSCLIENT_T1008075298_H
#ifndef ENUMERATOR_T3586889763_H
#define ENUMERATOR_T3586889763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct  Enumerator_t3586889763 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1632706988 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t4030379155  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___dictionary_0)); }
	inline Dictionary_2_t1632706988 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1632706988 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___current_3)); }
	inline KeyValuePair_2_t4030379155  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t4030379155 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t4030379155  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3586889763_H
#ifndef GENDER_T1633829762_H
#define GENDER_T1633829762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.Gender
struct  Gender_t1633829762 
{
public:
	// System.Int32 GoogleMobileAds.Api.Gender::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Gender_t1633829762, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENDER_T1633829762_H
#ifndef PRECISIONTYPE_T3077082316_H
#define PRECISIONTYPE_T3077082316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdValue/PrecisionType
struct  PrecisionType_t3077082316 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdValue/PrecisionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrecisionType_t3077082316, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRECISIONTYPE_T3077082316_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef TAGFORUNDERAGEOFCONSENT_T1894746735_H
#define TAGFORUNDERAGEOFCONSENT_T1894746735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.TagForUnderAgeOfConsent
struct  TagForUnderAgeOfConsent_t1894746735 
{
public:
	// System.Int32 GoogleMobileAds.Api.TagForUnderAgeOfConsent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TagForUnderAgeOfConsent_t1894746735, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAGFORUNDERAGEOFCONSENT_T1894746735_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef TAGFORCHILDDIRECTEDTREATMENT_T1675242410_H
#define TAGFORCHILDDIRECTEDTREATMENT_T1675242410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.TagForChildDirectedTreatment
struct  TagForChildDirectedTreatment_t1675242410 
{
public:
	// System.Int32 GoogleMobileAds.Api.TagForChildDirectedTreatment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TagForChildDirectedTreatment_t1675242410, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAGFORCHILDDIRECTEDTREATMENT_T1675242410_H
#ifndef REWARDBASEDVIDEOADCLIENT_T745716004_H
#define REWARDBASEDVIDEOADCLIENT_T745716004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient
struct  RewardBasedVideoAdClient_t745716004  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.RewardBasedVideoAdClient::rewardBasedVideoAdPtr
	intptr_t ___rewardBasedVideoAdPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.RewardBasedVideoAdClient::rewardBasedVideoAdClientPtr
	intptr_t ___rewardBasedVideoAdClientPtr_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdLoaded
	EventHandler_1_t1515976428 * ___OnAdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdFailedToLoad
	EventHandler_1_t780121155 * ___OnAdFailedToLoad_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdOpening
	EventHandler_1_t1515976428 * ___OnAdOpening_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdStarted
	EventHandler_1_t1515976428 * ___OnAdStarted_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdClosed
	EventHandler_1_t1515976428 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdRewarded
	EventHandler_1_t1628180368 * ___OnAdRewarded_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdLeavingApplication
	EventHandler_1_t1515976428 * ___OnAdLeavingApplication_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.RewardBasedVideoAdClient::OnAdCompleted
	EventHandler_1_t1515976428 * ___OnAdCompleted_9;

public:
	inline static int32_t get_offset_of_rewardBasedVideoAdPtr_0() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___rewardBasedVideoAdPtr_0)); }
	inline intptr_t get_rewardBasedVideoAdPtr_0() const { return ___rewardBasedVideoAdPtr_0; }
	inline intptr_t* get_address_of_rewardBasedVideoAdPtr_0() { return &___rewardBasedVideoAdPtr_0; }
	inline void set_rewardBasedVideoAdPtr_0(intptr_t value)
	{
		___rewardBasedVideoAdPtr_0 = value;
	}

	inline static int32_t get_offset_of_rewardBasedVideoAdClientPtr_1() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___rewardBasedVideoAdClientPtr_1)); }
	inline intptr_t get_rewardBasedVideoAdClientPtr_1() const { return ___rewardBasedVideoAdClientPtr_1; }
	inline intptr_t* get_address_of_rewardBasedVideoAdClientPtr_1() { return &___rewardBasedVideoAdClientPtr_1; }
	inline void set_rewardBasedVideoAdClientPtr_1(intptr_t value)
	{
		___rewardBasedVideoAdClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_2() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdLoaded_2)); }
	inline EventHandler_1_t1515976428 * get_OnAdLoaded_2() const { return ___OnAdLoaded_2; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLoaded_2() { return &___OnAdLoaded_2; }
	inline void set_OnAdLoaded_2(EventHandler_1_t1515976428 * value)
	{
		___OnAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLoaded_2), value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_3() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdFailedToLoad_3)); }
	inline EventHandler_1_t780121155 * get_OnAdFailedToLoad_3() const { return ___OnAdFailedToLoad_3; }
	inline EventHandler_1_t780121155 ** get_address_of_OnAdFailedToLoad_3() { return &___OnAdFailedToLoad_3; }
	inline void set_OnAdFailedToLoad_3(EventHandler_1_t780121155 * value)
	{
		___OnAdFailedToLoad_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdFailedToLoad_3), value);
	}

	inline static int32_t get_offset_of_OnAdOpening_4() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdOpening_4)); }
	inline EventHandler_1_t1515976428 * get_OnAdOpening_4() const { return ___OnAdOpening_4; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdOpening_4() { return &___OnAdOpening_4; }
	inline void set_OnAdOpening_4(EventHandler_1_t1515976428 * value)
	{
		___OnAdOpening_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdOpening_4), value);
	}

	inline static int32_t get_offset_of_OnAdStarted_5() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdStarted_5)); }
	inline EventHandler_1_t1515976428 * get_OnAdStarted_5() const { return ___OnAdStarted_5; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdStarted_5() { return &___OnAdStarted_5; }
	inline void set_OnAdStarted_5(EventHandler_1_t1515976428 * value)
	{
		___OnAdStarted_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdStarted_5), value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdClosed_6)); }
	inline EventHandler_1_t1515976428 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_t1515976428 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdClosed_6), value);
	}

	inline static int32_t get_offset_of_OnAdRewarded_7() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdRewarded_7)); }
	inline EventHandler_1_t1628180368 * get_OnAdRewarded_7() const { return ___OnAdRewarded_7; }
	inline EventHandler_1_t1628180368 ** get_address_of_OnAdRewarded_7() { return &___OnAdRewarded_7; }
	inline void set_OnAdRewarded_7(EventHandler_1_t1628180368 * value)
	{
		___OnAdRewarded_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdRewarded_7), value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_8() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdLeavingApplication_8)); }
	inline EventHandler_1_t1515976428 * get_OnAdLeavingApplication_8() const { return ___OnAdLeavingApplication_8; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdLeavingApplication_8() { return &___OnAdLeavingApplication_8; }
	inline void set_OnAdLeavingApplication_8(EventHandler_1_t1515976428 * value)
	{
		___OnAdLeavingApplication_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdLeavingApplication_8), value);
	}

	inline static int32_t get_offset_of_OnAdCompleted_9() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004, ___OnAdCompleted_9)); }
	inline EventHandler_1_t1515976428 * get_OnAdCompleted_9() const { return ___OnAdCompleted_9; }
	inline EventHandler_1_t1515976428 ** get_address_of_OnAdCompleted_9() { return &___OnAdCompleted_9; }
	inline void set_OnAdCompleted_9(EventHandler_1_t1515976428 * value)
	{
		___OnAdCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((&___OnAdCompleted_9), value);
	}
};

struct RewardBasedVideoAdClient_t745716004_StaticFields
{
public:
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache0
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * ___U3CU3Ef__mgU24cache0_10;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache1
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * ___U3CU3Ef__mgU24cache1_11;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache2
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * ___U3CU3Ef__mgU24cache2_12;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache3
	GADURewardBasedVideoAdDidStartCallback_t2792276088 * ___U3CU3Ef__mgU24cache3_13;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache4
	GADURewardBasedVideoAdDidCloseCallback_t623082069 * ___U3CU3Ef__mgU24cache4_14;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache5
	GADURewardBasedVideoAdDidRewardCallback_t990863796 * ___U3CU3Ef__mgU24cache5_15;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache6
	GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * ___U3CU3Ef__mgU24cache6_16;
	// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback GoogleMobileAds.iOS.RewardBasedVideoAdClient::<>f__mg$cache7
	GADURewardBasedVideoAdDidCompleteCallback_t2076181 * ___U3CU3Ef__mgU24cache7_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_10() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache0_10)); }
	inline GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * get_U3CU3Ef__mgU24cache0_10() const { return ___U3CU3Ef__mgU24cache0_10; }
	inline GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 ** get_address_of_U3CU3Ef__mgU24cache0_10() { return &___U3CU3Ef__mgU24cache0_10; }
	inline void set_U3CU3Ef__mgU24cache0_10(GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * value)
	{
		___U3CU3Ef__mgU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_11() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache1_11)); }
	inline GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * get_U3CU3Ef__mgU24cache1_11() const { return ___U3CU3Ef__mgU24cache1_11; }
	inline GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 ** get_address_of_U3CU3Ef__mgU24cache1_11() { return &___U3CU3Ef__mgU24cache1_11; }
	inline void set_U3CU3Ef__mgU24cache1_11(GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * value)
	{
		___U3CU3Ef__mgU24cache1_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_12() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache2_12)); }
	inline GADURewardBasedVideoAdDidOpenCallback_t3638490629 * get_U3CU3Ef__mgU24cache2_12() const { return ___U3CU3Ef__mgU24cache2_12; }
	inline GADURewardBasedVideoAdDidOpenCallback_t3638490629 ** get_address_of_U3CU3Ef__mgU24cache2_12() { return &___U3CU3Ef__mgU24cache2_12; }
	inline void set_U3CU3Ef__mgU24cache2_12(GADURewardBasedVideoAdDidOpenCallback_t3638490629 * value)
	{
		___U3CU3Ef__mgU24cache2_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_13() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache3_13)); }
	inline GADURewardBasedVideoAdDidStartCallback_t2792276088 * get_U3CU3Ef__mgU24cache3_13() const { return ___U3CU3Ef__mgU24cache3_13; }
	inline GADURewardBasedVideoAdDidStartCallback_t2792276088 ** get_address_of_U3CU3Ef__mgU24cache3_13() { return &___U3CU3Ef__mgU24cache3_13; }
	inline void set_U3CU3Ef__mgU24cache3_13(GADURewardBasedVideoAdDidStartCallback_t2792276088 * value)
	{
		___U3CU3Ef__mgU24cache3_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_14() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache4_14)); }
	inline GADURewardBasedVideoAdDidCloseCallback_t623082069 * get_U3CU3Ef__mgU24cache4_14() const { return ___U3CU3Ef__mgU24cache4_14; }
	inline GADURewardBasedVideoAdDidCloseCallback_t623082069 ** get_address_of_U3CU3Ef__mgU24cache4_14() { return &___U3CU3Ef__mgU24cache4_14; }
	inline void set_U3CU3Ef__mgU24cache4_14(GADURewardBasedVideoAdDidCloseCallback_t623082069 * value)
	{
		___U3CU3Ef__mgU24cache4_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_15() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache5_15)); }
	inline GADURewardBasedVideoAdDidRewardCallback_t990863796 * get_U3CU3Ef__mgU24cache5_15() const { return ___U3CU3Ef__mgU24cache5_15; }
	inline GADURewardBasedVideoAdDidRewardCallback_t990863796 ** get_address_of_U3CU3Ef__mgU24cache5_15() { return &___U3CU3Ef__mgU24cache5_15; }
	inline void set_U3CU3Ef__mgU24cache5_15(GADURewardBasedVideoAdDidRewardCallback_t990863796 * value)
	{
		___U3CU3Ef__mgU24cache5_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_16() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache6_16)); }
	inline GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * get_U3CU3Ef__mgU24cache6_16() const { return ___U3CU3Ef__mgU24cache6_16; }
	inline GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 ** get_address_of_U3CU3Ef__mgU24cache6_16() { return &___U3CU3Ef__mgU24cache6_16; }
	inline void set_U3CU3Ef__mgU24cache6_16(GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * value)
	{
		___U3CU3Ef__mgU24cache6_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_17() { return static_cast<int32_t>(offsetof(RewardBasedVideoAdClient_t745716004_StaticFields, ___U3CU3Ef__mgU24cache7_17)); }
	inline GADURewardBasedVideoAdDidCompleteCallback_t2076181 * get_U3CU3Ef__mgU24cache7_17() const { return ___U3CU3Ef__mgU24cache7_17; }
	inline GADURewardBasedVideoAdDidCompleteCallback_t2076181 ** get_address_of_U3CU3Ef__mgU24cache7_17() { return &___U3CU3Ef__mgU24cache7_17; }
	inline void set_U3CU3Ef__mgU24cache7_17(GADURewardBasedVideoAdDidCompleteCallback_t2076181 * value)
	{
		___U3CU3Ef__mgU24cache7_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REWARDBASEDVIDEOADCLIENT_T745716004_H
#ifndef REQUESTCONFIGURATIONCLIENT_T3117146206_H
#define REQUESTCONFIGURATIONCLIENT_T3117146206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RequestConfigurationClient
struct  RequestConfigurationClient_t3117146206  : public RuntimeObject
{
public:

public:
};

struct RequestConfigurationClient_t3117146206_StaticFields
{
public:
	// System.IntPtr GoogleMobileAds.iOS.RequestConfigurationClient::requestConfigurationPtr
	intptr_t ___requestConfigurationPtr_0;

public:
	inline static int32_t get_offset_of_requestConfigurationPtr_0() { return static_cast<int32_t>(offsetof(RequestConfigurationClient_t3117146206_StaticFields, ___requestConfigurationPtr_0)); }
	inline intptr_t get_requestConfigurationPtr_0() const { return ___requestConfigurationPtr_0; }
	inline intptr_t* get_address_of_requestConfigurationPtr_0() { return &___requestConfigurationPtr_0; }
	inline void set_requestConfigurationPtr_0(intptr_t value)
	{
		___requestConfigurationPtr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCONFIGURATIONCLIENT_T3117146206_H
#ifndef INITIALIZATIONSTATUSCLIENT_T1332972171_H
#define INITIALIZATIONSTATUSCLIENT_T1332972171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InitializationStatusClient
struct  InitializationStatusClient_t1332972171  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.InitializationStatusClient::status
	intptr_t ___status_0;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(InitializationStatusClient_t1332972171, ___status_0)); }
	inline intptr_t get_status_0() const { return ___status_0; }
	inline intptr_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(intptr_t value)
	{
		___status_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIALIZATIONSTATUSCLIENT_T1332972171_H
#ifndef NULLABLE_1_T3356391844_H
#define NULLABLE_1_T3356391844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<GoogleMobileAds.Api.Gender>
struct  Nullable_1_t3356391844 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3356391844, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3356391844, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3356391844_H
#ifndef ADVALUE_T4078760168_H
#define ADVALUE_T4078760168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdValue
struct  AdValue_t4078760168  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdValue/PrecisionType GoogleMobileAds.Api.AdValue::<Precision>k__BackingField
	int32_t ___U3CPrecisionU3Ek__BackingField_0;
	// System.Int64 GoogleMobileAds.Api.AdValue::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdValue::<CurrencyCode>k__BackingField
	String_t* ___U3CCurrencyCodeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPrecisionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdValue_t4078760168, ___U3CPrecisionU3Ek__BackingField_0)); }
	inline int32_t get_U3CPrecisionU3Ek__BackingField_0() const { return ___U3CPrecisionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CPrecisionU3Ek__BackingField_0() { return &___U3CPrecisionU3Ek__BackingField_0; }
	inline void set_U3CPrecisionU3Ek__BackingField_0(int32_t value)
	{
		___U3CPrecisionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValue_t4078760168, ___U3CValueU3Ek__BackingField_1)); }
	inline int64_t get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(int64_t value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCurrencyCodeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdValue_t4078760168, ___U3CCurrencyCodeU3Ek__BackingField_2)); }
	inline String_t* get_U3CCurrencyCodeU3Ek__BackingField_2() const { return ___U3CCurrencyCodeU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CCurrencyCodeU3Ek__BackingField_2() { return &___U3CCurrencyCodeU3Ek__BackingField_2; }
	inline void set_U3CCurrencyCodeU3Ek__BackingField_2(String_t* value)
	{
		___U3CCurrencyCodeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrencyCodeU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADVALUE_T4078760168_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef NULLABLE_1_T3617308817_H
#define NULLABLE_1_T3617308817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>
struct  Nullable_1_t3617308817 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3617308817, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3617308817, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3617308817_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef NULLABLE_1_T3397804492_H
#define NULLABLE_1_T3397804492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>
struct  Nullable_1_t3397804492 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3397804492, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3397804492, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3397804492_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef GADUREWARDBASEDVIDEOADDIDSTARTCALLBACK_T2792276088_H
#define GADUREWARDBASEDVIDEOADDIDSTARTCALLBACK_T2792276088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback
struct  GADURewardBasedVideoAdDidStartCallback_t2792276088  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDSTARTCALLBACK_T2792276088_H
#ifndef GADUREWARDBASEDVIDEOADWILLLEAVEAPPLICATIONCALLBACK_T3217042531_H
#define GADUREWARDBASEDVIDEOADWILLLEAVEAPPLICATIONCALLBACK_T3217042531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback
struct  GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADWILLLEAVEAPPLICATIONCALLBACK_T3217042531_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef GADUINTERSTITIALDIDFAILTORECEIVEADWITHERRORCALLBACK_T1323914714_H
#define GADUINTERSTITIALDIDFAILTORECEIVEADWITHERRORCALLBACK_T1323914714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct  GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALDIDFAILTORECEIVEADWITHERRORCALLBACK_T1323914714_H
#ifndef GADUREWARDEDADDIDFAILTOSHOWADWITHERRORCALLBACK_T3260905855_H
#define GADUREWARDEDADDIDFAILTOSHOWADWITHERRORCALLBACK_T3260905855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback
struct  GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDEDADDIDFAILTOSHOWADWITHERRORCALLBACK_T3260905855_H
#ifndef GADUINTERSTITIALDIDRECEIVEADCALLBACK_T821971233_H
#define GADUINTERSTITIALDIDRECEIVEADCALLBACK_T821971233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback
struct  GADUInterstitialDidReceiveAdCallback_t821971233  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALDIDRECEIVEADCALLBACK_T821971233_H
#ifndef GADUREWARDEDADDIDOPENCALLBACK_T4091248959_H
#define GADUREWARDEDADDIDOPENCALLBACK_T4091248959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback
struct  GADURewardedAdDidOpenCallback_t4091248959  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDEDADDIDOPENCALLBACK_T4091248959_H
#ifndef GADUREWARDEDADDIDRECEIVEADCALLBACK_T3678103445_H
#define GADUREWARDEDADDIDRECEIVEADCALLBACK_T3678103445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback
struct  GADURewardedAdDidReceiveAdCallback_t3678103445  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDEDADDIDRECEIVEADCALLBACK_T3678103445_H
#ifndef ACTION_1_T4111548861_H
#define ACTION_1_T4111548861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct  Action_1_t4111548861  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T4111548861_H
#ifndef GADUINTERSTITIALDIDDISMISSSCREENCALLBACK_T1339081348_H
#define GADUINTERSTITIALDIDDISMISSSCREENCALLBACK_T1339081348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback
struct  GADUInterstitialDidDismissScreenCallback_t1339081348  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALDIDDISMISSSCREENCALLBACK_T1339081348_H
#ifndef GADUINITIALIZATIONCOMPLETECALLBACK_T1402508519_H
#define GADUINITIALIZATIONCOMPLETECALLBACK_T1402508519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback
struct  GADUInitializationCompleteCallback_t1402508519  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINITIALIZATIONCOMPLETECALLBACK_T1402508519_H
#ifndef REQUESTCONFIGURATION_T836713487_H
#define REQUESTCONFIGURATION_T836713487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.RequestConfiguration
struct  RequestConfiguration_t836713487  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration::<MaxAdContentRating>k__BackingField
	MaxAdContentRating_t2033022353 * ___U3CMaxAdContentRatingU3Ek__BackingField_0;
	// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t3397804492  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1;
	// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration::<TagForUnderAgeOfConsent>k__BackingField
	Nullable_1_t3617308817  ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration::<TestDeviceIds>k__BackingField
	List_1_t3319525431 * ___U3CTestDeviceIdsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RequestConfiguration_t836713487, ___U3CMaxAdContentRatingU3Ek__BackingField_0)); }
	inline MaxAdContentRating_t2033022353 * get_U3CMaxAdContentRatingU3Ek__BackingField_0() const { return ___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline MaxAdContentRating_t2033022353 ** get_address_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return &___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline void set_U3CMaxAdContentRatingU3Ek__BackingField_0(MaxAdContentRating_t2033022353 * value)
	{
		___U3CMaxAdContentRatingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMaxAdContentRatingU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RequestConfiguration_t836713487, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1)); }
	inline Nullable_1_t3397804492  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline Nullable_1_t3397804492 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1(Nullable_1_t3397804492  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RequestConfiguration_t836713487, ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2)); }
	inline Nullable_1_t3617308817  get_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() const { return ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline Nullable_1_t3617308817 * get_address_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return &___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline void set_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2(Nullable_1_t3617308817  value)
	{
		___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RequestConfiguration_t836713487, ___U3CTestDeviceIdsU3Ek__BackingField_3)); }
	inline List_1_t3319525431 * get_U3CTestDeviceIdsU3Ek__BackingField_3() const { return ___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline List_1_t3319525431 ** get_address_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return &___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline void set_U3CTestDeviceIdsU3Ek__BackingField_3(List_1_t3319525431 * value)
	{
		___U3CTestDeviceIdsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestDeviceIdsU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCONFIGURATION_T836713487_H
#ifndef GADUREWARDBASEDVIDEOADDIDCOMPLETECALLBACK_T2076181_H
#define GADUREWARDBASEDVIDEOADDIDCOMPLETECALLBACK_T2076181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback
struct  GADURewardBasedVideoAdDidCompleteCallback_t2076181  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDCOMPLETECALLBACK_T2076181_H
#ifndef EVENTHANDLER_1_T2412906204_H
#define EVENTHANDLER_1_T2412906204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct  EventHandler_1_t2412906204  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2412906204_H
#ifndef EVENTHANDLER_1_T2593147193_H
#define EVENTHANDLER_1_T2593147193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct  EventHandler_1_t2593147193  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2593147193_H
#ifndef GADUINTERSTITIALWILLPRESENTSCREENCALLBACK_T539653454_H
#define GADUINTERSTITIALWILLPRESENTSCREENCALLBACK_T539653454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback
struct  GADUInterstitialWillPresentScreenCallback_t539653454  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALWILLPRESENTSCREENCALLBACK_T539653454_H
#ifndef EVENTHANDLER_1_T780121155_H
#define EVENTHANDLER_1_T780121155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct  EventHandler_1_t780121155  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T780121155_H
#ifndef EVENTHANDLER_1_T1628180368_H
#define EVENTHANDLER_1_T1628180368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct  EventHandler_1_t1628180368  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T1628180368_H
#ifndef GADUREWARDBASEDVIDEOADDIDRECEIVEADCALLBACK_T462486315_H
#define GADUREWARDBASEDVIDEOADDIDRECEIVEADCALLBACK_T462486315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback
struct  GADURewardBasedVideoAdDidReceiveAdCallback_t462486315  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDRECEIVEADCALLBACK_T462486315_H
#ifndef GADUREWARDBASEDVIDEOADDIDFAILTORECEIVEADWITHERRORCALLBACK_T3979086788_H
#define GADUREWARDBASEDVIDEOADDIDFAILTORECEIVEADWITHERRORCALLBACK_T3979086788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback
struct  GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDFAILTORECEIVEADWITHERRORCALLBACK_T3979086788_H
#ifndef GADUINTERSTITIALPAIDEVENTCALLBACK_T2548624492_H
#define GADUINTERSTITIALPAIDEVENTCALLBACK_T2548624492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback
struct  GADUInterstitialPaidEventCallback_t2548624492  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALPAIDEVENTCALLBACK_T2548624492_H
#ifndef GADUREWARDBASEDVIDEOADDIDOPENCALLBACK_T3638490629_H
#define GADUREWARDBASEDVIDEOADDIDOPENCALLBACK_T3638490629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback
struct  GADURewardBasedVideoAdDidOpenCallback_t3638490629  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDOPENCALLBACK_T3638490629_H
#ifndef GADUREWARDBASEDVIDEOADDIDCLOSECALLBACK_T623082069_H
#define GADUREWARDBASEDVIDEOADDIDCLOSECALLBACK_T623082069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback
struct  GADURewardBasedVideoAdDidCloseCallback_t623082069  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDCLOSECALLBACK_T623082069_H
#ifndef NULLABLE_1_T1166124571_H
#define NULLABLE_1_T1166124571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t1166124571 
{
public:
	// T System.Nullable`1::value
	DateTime_t3738529785  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___value_0)); }
	inline DateTime_t3738529785  get_value_0() const { return ___value_0; }
	inline DateTime_t3738529785 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3738529785  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1166124571_H
#ifndef GADUINTERSTITIALWILLLEAVEAPPLICATIONCALLBACK_T1816935820_H
#define GADUINTERSTITIALWILLLEAVEAPPLICATIONCALLBACK_T1816935820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct  GADUInterstitialWillLeaveApplicationCallback_t1816935820  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUINTERSTITIALWILLLEAVEAPPLICATIONCALLBACK_T1816935820_H
#ifndef BUILDER_T3191429920_H
#define BUILDER_T3191429920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.RequestConfiguration/Builder
struct  Builder_t3191429920  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration/Builder::<MaxAdContentRating>k__BackingField
	MaxAdContentRating_t2033022353 * ___U3CMaxAdContentRatingU3Ek__BackingField_0;
	// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration/Builder::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t3397804492  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1;
	// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration/Builder::<TagForUnderAgeOfConsent>k__BackingField
	Nullable_1_t3617308817  ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration/Builder::<TestDeviceIds>k__BackingField
	List_1_t3319525431 * ___U3CTestDeviceIdsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t3191429920, ___U3CMaxAdContentRatingU3Ek__BackingField_0)); }
	inline MaxAdContentRating_t2033022353 * get_U3CMaxAdContentRatingU3Ek__BackingField_0() const { return ___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline MaxAdContentRating_t2033022353 ** get_address_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return &___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline void set_U3CMaxAdContentRatingU3Ek__BackingField_0(MaxAdContentRating_t2033022353 * value)
	{
		___U3CMaxAdContentRatingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMaxAdContentRatingU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t3191429920, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1)); }
	inline Nullable_1_t3397804492  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline Nullable_1_t3397804492 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1(Nullable_1_t3397804492  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t3191429920, ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2)); }
	inline Nullable_1_t3617308817  get_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() const { return ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline Nullable_1_t3617308817 * get_address_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return &___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline void set_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2(Nullable_1_t3617308817  value)
	{
		___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t3191429920, ___U3CTestDeviceIdsU3Ek__BackingField_3)); }
	inline List_1_t3319525431 * get_U3CTestDeviceIdsU3Ek__BackingField_3() const { return ___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline List_1_t3319525431 ** get_address_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return &___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline void set_U3CTestDeviceIdsU3Ek__BackingField_3(List_1_t3319525431 * value)
	{
		___U3CTestDeviceIdsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestDeviceIdsU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDER_T3191429920_H
#ifndef GADUREWARDEDADDIDCLOSECALLBACK_T2874328472_H
#define GADUREWARDEDADDIDCLOSECALLBACK_T2874328472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback
struct  GADURewardedAdDidCloseCallback_t2874328472  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDEDADDIDCLOSECALLBACK_T2874328472_H
#ifndef EVENTHANDLER_1_T1515976428_H
#define EVENTHANDLER_1_T1515976428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<System.EventArgs>
struct  EventHandler_1_t1515976428  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T1515976428_H
#ifndef GADUREWARDEDADDIDFAILTORECEIVEADWITHERRORCALLBACK_T3264051367_H
#define GADUREWARDEDADDIDFAILTORECEIVEADWITHERRORCALLBACK_T3264051367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback
struct  GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDEDADDIDFAILTORECEIVEADWITHERRORCALLBACK_T3264051367_H
#ifndef GADUUSEREARNEDREWARDCALLBACK_T224874987_H
#define GADUUSEREARNEDREWARDCALLBACK_T224874987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback
struct  GADUUserEarnedRewardCallback_t224874987  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUUSEREARNEDREWARDCALLBACK_T224874987_H
#ifndef GADUREWARDEDADPAIDEVENTCALLBACK_T3617339775_H
#define GADUREWARDEDADPAIDEVENTCALLBACK_T3617339775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback
struct  GADURewardedAdPaidEventCallback_t3617339775  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDEDADPAIDEVENTCALLBACK_T3617339775_H
#ifndef GADUREWARDBASEDVIDEOADDIDREWARDCALLBACK_T990863796_H
#define GADUREWARDBASEDVIDEOADDIDREWARDCALLBACK_T990863796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct  GADURewardBasedVideoAdDidRewardCallback_t990863796  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GADUREWARDBASEDVIDEOADDIDREWARDCALLBACK_T990863796_H
#ifndef ADREQUEST_T1573687800_H
#define ADREQUEST_T1573687800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdRequest
struct  AdRequest_t1573687800  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::<TestDevices>k__BackingField
	List_1_t3319525431 * ___U3CTestDevicesU3Ek__BackingField_2;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t412400163 * ___U3CKeywordsU3Ek__BackingField_3;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::<Birthday>k__BackingField
	Nullable_1_t1166124571  ___U3CBirthdayU3Ek__BackingField_4;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::<Gender>k__BackingField
	Nullable_1_t3356391844  ___U3CGenderU3Ek__BackingField_5;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t1819850047  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t1632706988 * ___U3CExtrasU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t3723909906 * ___U3CMediationExtrasU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CTestDevicesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_t1573687800, ___U3CTestDevicesU3Ek__BackingField_2)); }
	inline List_1_t3319525431 * get_U3CTestDevicesU3Ek__BackingField_2() const { return ___U3CTestDevicesU3Ek__BackingField_2; }
	inline List_1_t3319525431 ** get_address_of_U3CTestDevicesU3Ek__BackingField_2() { return &___U3CTestDevicesU3Ek__BackingField_2; }
	inline void set_U3CTestDevicesU3Ek__BackingField_2(List_1_t3319525431 * value)
	{
		___U3CTestDevicesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTestDevicesU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_t1573687800, ___U3CKeywordsU3Ek__BackingField_3)); }
	inline HashSet_1_t412400163 * get_U3CKeywordsU3Ek__BackingField_3() const { return ___U3CKeywordsU3Ek__BackingField_3; }
	inline HashSet_1_t412400163 ** get_address_of_U3CKeywordsU3Ek__BackingField_3() { return &___U3CKeywordsU3Ek__BackingField_3; }
	inline void set_U3CKeywordsU3Ek__BackingField_3(HashSet_1_t412400163 * value)
	{
		___U3CKeywordsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CKeywordsU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdRequest_t1573687800, ___U3CBirthdayU3Ek__BackingField_4)); }
	inline Nullable_1_t1166124571  get_U3CBirthdayU3Ek__BackingField_4() const { return ___U3CBirthdayU3Ek__BackingField_4; }
	inline Nullable_1_t1166124571 * get_address_of_U3CBirthdayU3Ek__BackingField_4() { return &___U3CBirthdayU3Ek__BackingField_4; }
	inline void set_U3CBirthdayU3Ek__BackingField_4(Nullable_1_t1166124571  value)
	{
		___U3CBirthdayU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CGenderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdRequest_t1573687800, ___U3CGenderU3Ek__BackingField_5)); }
	inline Nullable_1_t3356391844  get_U3CGenderU3Ek__BackingField_5() const { return ___U3CGenderU3Ek__BackingField_5; }
	inline Nullable_1_t3356391844 * get_address_of_U3CGenderU3Ek__BackingField_5() { return &___U3CGenderU3Ek__BackingField_5; }
	inline void set_U3CGenderU3Ek__BackingField_5(Nullable_1_t3356391844  value)
	{
		___U3CGenderU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AdRequest_t1573687800, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6)); }
	inline Nullable_1_t1819850047  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6; }
	inline Nullable_1_t1819850047 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6(Nullable_1_t1819850047  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AdRequest_t1573687800, ___U3CExtrasU3Ek__BackingField_7)); }
	inline Dictionary_2_t1632706988 * get_U3CExtrasU3Ek__BackingField_7() const { return ___U3CExtrasU3Ek__BackingField_7; }
	inline Dictionary_2_t1632706988 ** get_address_of_U3CExtrasU3Ek__BackingField_7() { return &___U3CExtrasU3Ek__BackingField_7; }
	inline void set_U3CExtrasU3Ek__BackingField_7(Dictionary_2_t1632706988 * value)
	{
		___U3CExtrasU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExtrasU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AdRequest_t1573687800, ___U3CMediationExtrasU3Ek__BackingField_8)); }
	inline List_1_t3723909906 * get_U3CMediationExtrasU3Ek__BackingField_8() const { return ___U3CMediationExtrasU3Ek__BackingField_8; }
	inline List_1_t3723909906 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_8() { return &___U3CMediationExtrasU3Ek__BackingField_8; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_8(List_1_t3723909906 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMediationExtrasU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADREQUEST_T1573687800_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[])
extern "C" IL2CPP_METHOD_ATTR void List_1_CopyTo_m133310179_gshared (List_1_t257213610 * __this, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m726768612_gshared (Nullable_1_t3397804492 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m1896014553_gshared (Nullable_1_t3397804492 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m914270746_gshared (Nullable_1_t3617308817 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m1453157128_gshared (Nullable_1_t3617308817 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2005978086_gshared (Nullable_1_t3397804492 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3105844368_gshared (Nullable_1_t3617308817 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_m4124830036_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3350232909  HashSet_1_GetEnumerator_m3346268098_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4213278602_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3714175425_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1204547613_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3308303329_gshared (Nullable_1_t1166124571 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.DateTime>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Nullable_1_GetValueOrDefault_m1358049705_gshared (Nullable_1_t1166124571 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<GoogleMobileAds.Api.Gender>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2043790361_gshared (Nullable_1_t3356391844 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<GoogleMobileAds.Api.Gender>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m2088687324_gshared (Nullable_1_t3356391844 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3741069969_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m256290237_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);

// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidDismissScreenCallback_Invoke_m1549830198 (GADUInterstitialDidDismissScreenCallback_t1339081348 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidFailToReceiveAdWithErrorCallback_Invoke_m3578693374 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 * __this, intptr_t ___interstitialClient0, String_t* ___error1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidReceiveAdCallback_Invoke_m91066008 (GADUInterstitialDidReceiveAdCallback_t821971233 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback::Invoke(System.IntPtr,System.Int32,System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialPaidEventCallback_Invoke_m3464340631 (GADUInterstitialPaidEventCallback_t2548624492 * __this, intptr_t ___interstitialClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialWillLeaveApplicationCallback_Invoke_m1182388421 (GADUInterstitialWillLeaveApplicationCallback_t1816935820 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialWillPresentScreenCallback_Invoke_m3584697259 (GADUInterstitialWillPresentScreenCallback_t539653454 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.MobileAdsClient::InitializationCompleteCallback(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_InitializationCompleteCallback_m3680942184 (RuntimeObject * __this /* static, unused */, intptr_t ___mobileAdsClient0, intptr_t ___initStatus1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t3351438187  GCHandle_Alloc_m3053200191 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m127498741 (RuntimeObject * __this /* static, unused */, GCHandle_t3351438187  p0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUInitialize(System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUInitialize_m4000467789 (RuntimeObject * __this /* static, unused */, String_t* ___key0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInitializationCompleteCallback__ctor_m2461378383 (GADUInitializationCompleteCallback_t1402508519 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUInitializeWithCallback(System.IntPtr,GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUInitializeWithCallback_m909965584 (RuntimeObject * __this /* static, unused */, intptr_t ___mobileAdsClient0, GADUInitializationCompleteCallback_t1402508519 * ___callback1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetApplicationVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetApplicationVolume_m3617107962 (RuntimeObject * __this /* static, unused */, float ___volume0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetApplicationMuted(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetApplicationMuted_m2225141894 (RuntimeObject * __this /* static, unused */, bool ___muted0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RequestConfigurationClient::SetRequestConfiguration(GoogleMobileAds.Api.RequestConfiguration)
extern "C" IL2CPP_METHOD_ATTR void RequestConfigurationClient_SetRequestConfiguration_m2347446752 (RuntimeObject * __this /* static, unused */, RequestConfiguration_t836713487 * ___requestConfiguration0, const RuntimeMethod* method);
// GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.iOS.RequestConfigurationClient::GetRequestConfiguration()
extern "C" IL2CPP_METHOD_ATTR RequestConfiguration_t836713487 * RequestConfigurationClient_GetRequestConfiguration_m4085141006 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetiOSAppPauseOnBackground(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetiOSAppPauseOnBackground_m3757500555 (RuntimeObject * __this /* static, unused */, bool ___pause0, const RuntimeMethod* method);
// System.Single GoogleMobileAds.iOS.Externs::GADUDeviceScale()
extern "C" IL2CPP_METHOD_ATTR float Externs_GADUDeviceScale_m929053593 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 GoogleMobileAds.iOS.Externs::GADUDeviceSafeWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t Externs_GADUDeviceSafeWidth_m2945600171 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// GoogleMobileAds.iOS.MobileAdsClient GoogleMobileAds.iOS.MobileAdsClient::IntPtrToMobileAdsClient(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR MobileAdsClient_t1008075298 * MobileAdsClient_IntPtrToMobileAdsClient_m124165820 (RuntimeObject * __this /* static, unused */, intptr_t ___mobileAdsClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.InitializationStatusClient::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void InitializationStatusClient__ctor_m3075421882 (InitializationStatusClient_t1332972171 * __this, intptr_t ___status0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::Invoke(!0)
#define Action_1_Invoke_m1459356442(__this, p0, method) ((  void (*) (Action_1_t4111548861 *, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR GCHandle_t3351438187  GCHandle_op_Explicit_m976572069 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m1824973883 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" IL2CPP_METHOD_ATTR void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.MobileAdsClient::Dispose()
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_Dispose_m3682403140 (MobileAdsClient_t1008075298 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.MobileAdsClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient__ctor_m2434571403 (MobileAdsClient_t1008075298 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback::Invoke(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInitializationCompleteCallback_Invoke_m1966813198 (GADUInitializationCompleteCallback_t1402508519 * __this, intptr_t ___mobileAdsClient0, intptr_t ___initStatusClient1, const RuntimeMethod* method);
// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration::get_MaxAdContentRating()
extern "C" IL2CPP_METHOD_ATTR MaxAdContentRating_t2033022353 * RequestConfiguration_get_MaxAdContentRating_m36687956 (RequestConfiguration_t836713487 * __this, const RuntimeMethod* method);
// System.String GoogleMobileAds.Api.MaxAdContentRating::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* MaxAdContentRating_get_Value_m725327631 (MaxAdContentRating_t2033022353 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRequestConfigurationMaxAdContentRating(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetRequestConfigurationMaxAdContentRating_m342369952 (RuntimeObject * __this /* static, unused */, intptr_t ___requestConfiguration0, String_t* ___maxAdContentRating1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration::get_TestDeviceIds()
extern "C" IL2CPP_METHOD_ATTR List_1_t3319525431 * RequestConfiguration_get_TestDeviceIds_m4022808464 (RequestConfiguration_t836713487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m2276455407(__this, method) ((  int32_t (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(!0[])
#define List_1_CopyTo_m173105794(__this, p0, method) ((  void (*) (List_1_t3319525431 *, StringU5BU5D_t1281789340*, const RuntimeMethod*))List_1_CopyTo_m133310179_gshared)(__this, p0, method)
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRequestConfigurationTestDeviceIdentifiers(System.IntPtr,System.String[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetRequestConfigurationTestDeviceIdentifiers_m3128809967 (RuntimeObject * __this /* static, unused */, intptr_t ___requestConfiguration0, StringU5BU5D_t1281789340* ___testDeviceIDs1, int32_t ___testDeviceIDLength2, const RuntimeMethod* method);
// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration::get_TagForChildDirectedTreatment()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t3397804492  RequestConfiguration_get_TagForChildDirectedTreatment_m1288229619 (RequestConfiguration_t836713487 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>::get_HasValue()
#define Nullable_1_get_HasValue_m726768612(__this, method) ((  bool (*) (Nullable_1_t3397804492 *, const RuntimeMethod*))Nullable_1_get_HasValue_m726768612_gshared)(__this, method)
// !0 System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m1896014553(__this, method) ((  int32_t (*) (Nullable_1_t3397804492 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m1896014553_gshared)(__this, method)
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRequestConfigurationTagForChildDirectedTreatment(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetRequestConfigurationTagForChildDirectedTreatment_m3862887072 (RuntimeObject * __this /* static, unused */, intptr_t ___requestConfiguration0, int32_t ___tagForChildDirectedTreatment1, const RuntimeMethod* method);
// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration::get_TagForUnderAgeOfConsent()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t3617308817  RequestConfiguration_get_TagForUnderAgeOfConsent_m2805616823 (RequestConfiguration_t836713487 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>::get_HasValue()
#define Nullable_1_get_HasValue_m914270746(__this, method) ((  bool (*) (Nullable_1_t3617308817 *, const RuntimeMethod*))Nullable_1_get_HasValue_m914270746_gshared)(__this, method)
// !0 System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m1453157128(__this, method) ((  int32_t (*) (Nullable_1_t3617308817 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m1453157128_gshared)(__this, method)
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRequestConfigurationTagForUnderAgeOfConsent(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetRequestConfigurationTagForUnderAgeOfConsent_m895123563 (RuntimeObject * __this /* static, unused */, intptr_t ___requestConfiguration0, int32_t ___tagForUnderAgeOfConsent1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRequestConfiguration(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetRequestConfiguration_m4179406785 (RuntimeObject * __this /* static, unused */, intptr_t ___requestConfiguration0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Builder__ctor_m2415579558 (Builder_t3191429920 * __this, const RuntimeMethod* method);
// System.String GoogleMobileAds.iOS.Externs::GADUGetMaxAdContentRating(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Externs_GADUGetMaxAdContentRating_m4116126256 (RuntimeObject * __this /* static, unused */, intptr_t ___requestConfiguration0, const RuntimeMethod* method);
// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::ToMaxAdContentRating(System.String)
extern "C" IL2CPP_METHOD_ATTR MaxAdContentRating_t2033022353 * MaxAdContentRating_ToMaxAdContentRating_m2575580449 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUGetTestDeviceIdentifiers(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Externs_GADUGetTestDeviceIdentifiers_m3727712757 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, const RuntimeMethod* method);
// System.Int32 GoogleMobileAds.iOS.Externs::GADUGetTestDeviceIdentifiersCount(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t Externs_GADUGetTestDeviceIdentifiersCount_m1615941748 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.iOS.Utils::PtrArrayToManagedList(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR List_1_t3319525431 * Utils_PtrArrayToManagedList_m1310791226 (RuntimeObject * __this /* static, unused */, intptr_t ___arrayPtr0, int32_t ___numOfAssets1, const RuntimeMethod* method);
// System.Int32 GoogleMobileAds.iOS.Externs::GADUGetRequestConfigurationTagForChildDirectedTreatment(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t Externs_GADUGetRequestConfigurationTagForChildDirectedTreatment_m3498468368 (RuntimeObject * __this /* static, unused */, intptr_t ___requestConfiguration0, const RuntimeMethod* method);
// System.Int32 GoogleMobileAds.iOS.Externs::GADUGetRequestConfigurationTagForUnderAgeOfConsent(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t Externs_GADUGetRequestConfigurationTagForUnderAgeOfConsent_m746146564 (RuntimeObject * __this /* static, unused */, intptr_t ___requestConfiguration0, const RuntimeMethod* method);
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetMaxAdContentRating(GoogleMobileAds.Api.MaxAdContentRating)
extern "C" IL2CPP_METHOD_ATTR Builder_t3191429920 * Builder_SetMaxAdContentRating_m229493609 (Builder_t3191429920 * __this, MaxAdContentRating_t2033022353 * ___maxAdContentRating0, const RuntimeMethod* method);
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTestDeviceIds(System.Collections.Generic.List`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR Builder_t3191429920 * Builder_SetTestDeviceIds_m63541521 (Builder_t3191429920 * __this, List_1_t3319525431 * ___testDeviceIds0, const RuntimeMethod* method);
// System.Void System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>::.ctor(!0)
#define Nullable_1__ctor_m2005978086(__this, p0, method) ((  void (*) (Nullable_1_t3397804492 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m2005978086_gshared)(__this, p0, method)
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>)
extern "C" IL2CPP_METHOD_ATTR Builder_t3191429920 * Builder_SetTagForChildDirectedTreatment_m3282456807 (Builder_t3191429920 * __this, Nullable_1_t3397804492  ___tagForChildDirectedTreatment0, const RuntimeMethod* method);
// System.Void System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>::.ctor(!0)
#define Nullable_1__ctor_m3105844368(__this, p0, method) ((  void (*) (Nullable_1_t3617308817 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m3105844368_gshared)(__this, p0, method)
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTagForUnderAgeOfConsent(System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>)
extern "C" IL2CPP_METHOD_ATTR Builder_t3191429920 * Builder_SetTagForUnderAgeOfConsent_m3958323735 (Builder_t3191429920 * __this, Nullable_1_t3617308817  ___tagForUnderAgeOfConsent0, const RuntimeMethod* method);
// GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.Api.RequestConfiguration/Builder::build()
extern "C" IL2CPP_METHOD_ATTR RequestConfiguration_t836713487 * Builder_build_m2770939989 (Builder_t3191429920 * __this, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRequestConfiguration()
extern "C" IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateRequestConfiguration_m2326812050 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidReceiveAdCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidReceiveAdCallback_m1892259112 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_m829880647 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, String_t* ___error1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidOpenCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidOpenCallback_m141900546 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidStartCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidStartCallback_m856913864 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidCloseCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidCloseCallback_m3525630988 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidRewardUserCallback(System.IntPtr,System.String,System.Double)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidRewardUserCallback_m226148102 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdWillLeaveApplicationCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdWillLeaveApplicationCallback_m3803009012 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidCompleteCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidCompleteCallback_m1288895517 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADURelease(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADURelease_m2380050566 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRewardBasedVideoAd(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateRewardBasedVideoAd_m1889510220 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideo0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::set_RewardBasedVideoAdPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_set_RewardBasedVideoAdPtr_m3604158259 (RewardBasedVideoAdClient_t745716004 * __this, intptr_t ___value0, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.RewardBasedVideoAdClient::get_RewardBasedVideoAdPtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t RewardBasedVideoAdClient_get_RewardBasedVideoAdPtr_m3486981653 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidReceiveAdCallback__ctor_m2160022995 (GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback__ctor_m983413226 (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidOpenCallback__ctor_m1232197325 (GADURewardBasedVideoAdDidOpenCallback_t3638490629 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidStartCallback__ctor_m968833380 (GADURewardBasedVideoAdDidStartCallback_t2792276088 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCloseCallback__ctor_m1596580095 (GADURewardBasedVideoAdDidCloseCallback_t623082069 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidRewardCallback__ctor_m2712323043 (GADURewardBasedVideoAdDidRewardCallback_t990863796 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdWillLeaveApplicationCallback__ctor_m3356045568 (GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCompleteCallback__ctor_m3327279757 (GADURewardBasedVideoAdDidCompleteCallback_t2076181 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRewardBasedVideoAdCallbacks(System.IntPtr,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetRewardBasedVideoAdCallbacks_m3459035807 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideo0, GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * ___adReceivedCallback1, GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * ___adFailedCallback2, GADURewardBasedVideoAdDidOpenCallback_t3638490629 * ___didOpenCallback3, GADURewardBasedVideoAdDidStartCallback_t2792276088 * ___didStartCallback4, GADURewardBasedVideoAdDidCloseCallback_t623082069 * ___didCloseCallback5, GADURewardBasedVideoAdDidRewardCallback_t990863796 * ___didRewardcallback6, GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * ___willLeaveCallback7, GADURewardBasedVideoAdDidCompleteCallback_t2076181 * ___didCompleteCallback8, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Utils::BuildAdRequest(GoogleMobileAds.Api.AdRequest)
extern "C" IL2CPP_METHOD_ATTR intptr_t Utils_BuildAdRequest_m293820848 (RuntimeObject * __this /* static, unused */, AdRequest_t1573687800 * ___request0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADURequestRewardBasedVideoAd(System.IntPtr,System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADURequestRewardBasedVideoAd_m1580751359 (RuntimeObject * __this /* static, unused */, intptr_t ___bannerView0, intptr_t ___request1, String_t* ___adUnitId2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUShowRewardBasedVideoAd(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUShowRewardBasedVideoAd_m234759846 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideo0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRewardBasedVideoAdUserId(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetRewardBasedVideoAdUserId_m2019373404 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideo0, String_t* ___userId1, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.iOS.Externs::GADURewardBasedVideoAdReady(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool Externs_GADURewardBasedVideoAdReady_m3647491110 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideo0, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUMediationAdapterClassNameForRewardedVideo(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Externs_GADUMediationAdapterClassNameForRewardedVideo_m2781009425 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedVideo0, const RuntimeMethod* method);
// System.String GoogleMobileAds.iOS.Utils::PtrToString(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Utils_PtrToString_m1166713158 (RuntimeObject * __this /* static, unused */, intptr_t ___stringPtr0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::DestroyRewardedVideoAd()
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_DestroyRewardedVideoAd_m4144426805 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::Dispose()
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_Dispose_m3896470207 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method);
// GoogleMobileAds.iOS.RewardBasedVideoAdClient GoogleMobileAds.iOS.RewardBasedVideoAdClient::IntPtrToRewardBasedVideoClient(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RewardBasedVideoAdClient_t745716004 * RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m3837310126(__this, p0, p1, method) ((  void (*) (EventHandler_1_t1515976428 *, RuntimeObject *, EventArgs_t3591816995 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m845251842 (AdFailedToLoadEventArgs_t2855961722 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_Message(System.String)
extern "C" IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_Message_m3939346791 (AdFailedToLoadEventArgs_t2855961722 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m3162681867(__this, p0, p1, method) ((  void (*) (EventHandler_1_t780121155 *, RuntimeObject *, AdFailedToLoadEventArgs_t2855961722 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void GoogleMobileAds.Api.Reward::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Reward__ctor_m184642892 (Reward_t3704020935 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.Reward::set_Type(System.String)
extern "C" IL2CPP_METHOD_ATTR void Reward_set_Type_m4069022543 (Reward_t3704020935 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.Reward::set_Amount(System.Double)
extern "C" IL2CPP_METHOD_ATTR void Reward_set_Amount_m3356887413 (Reward_t3704020935 * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m198145918(__this, p0, p1, method) ((  void (*) (EventHandler_1_t1628180368 *, RuntimeObject *, Reward_t3704020935 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCloseCallback_Invoke_m997856259 (GADURewardBasedVideoAdDidCloseCallback_t623082069 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCompleteCallback_Invoke_m1968048401 (GADURewardBasedVideoAdDidCompleteCallback_t2076181 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_Invoke_m2012026873 (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * __this, intptr_t ___rewardBasedVideoClient0, String_t* ___error1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidOpenCallback_Invoke_m950205132 (GADURewardBasedVideoAdDidOpenCallback_t3638490629 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidReceiveAdCallback_Invoke_m2422874943 (GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::Invoke(System.IntPtr,System.String,System.Double)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidRewardCallback_Invoke_m2425462797 (GADURewardBasedVideoAdDidRewardCallback_t990863796 * __this, intptr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidStartCallback_Invoke_m3297920828 (GADURewardBasedVideoAdDidStartCallback_t2792276088 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdWillLeaveApplicationCallback_Invoke_m3916786250 (GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdDidReceiveAdCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdDidReceiveAdCallback_m1737487716 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdDidFailToReceiveAdWithErrorCallback_m394272376 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdDidFailToShowAdWithErrorCallback(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdDidFailToShowAdWithErrorCallback_m3597122014 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdDidOpenCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdDidOpenCallback_m2709578822 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdDidCloseCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdDidCloseCallback_m29586772 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdUserDidEarnRewardCallback(System.IntPtr,System.String,System.Double)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdUserDidEarnRewardCallback_m478552977 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdPaidEventCallback(System.IntPtr,System.Int32,System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdPaidEventCallback_m3158905489 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRewardedAd(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateRewardedAd_m2771365624 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAd0, String_t* ___adUnitId1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient::set_RewardedAdPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_set_RewardedAdPtr_m416070414 (RewardedAdClient_t1756845177 * __this, intptr_t ___value0, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.RewardedAdClient::get_RewardedAdPtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t RewardedAdClient_get_RewardedAdPtr_m293379226 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback__ctor_m885661216 (GADURewardedAdDidReceiveAdCallback_t3678103445 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback__ctor_m352766581 (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback__ctor_m3557311141 (GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback__ctor_m3495398227 (GADURewardedAdDidOpenCallback_t4091248959 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback__ctor_m2458889410 (GADURewardedAdDidCloseCallback_t2874328472 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback__ctor_m2745036547 (GADUUserEarnedRewardCallback_t224874987 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdPaidEventCallback__ctor_m2777055707 (GADURewardedAdPaidEventCallback_t3617339775 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRewardedAdCallbacks(System.IntPtr,GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback,GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback,GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback,GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback,GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback,GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetRewardedAdCallbacks_m1842440298 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAd0, GADURewardedAdDidReceiveAdCallback_t3678103445 * ___adReceivedCallback1, GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * ___adFailedToLoadCallback2, GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * ___adFailedToShowCallback3, GADURewardedAdDidOpenCallback_t4091248959 * ___didOpenCallback4, GADURewardedAdDidCloseCallback_t2874328472 * ___didCloseCallback5, GADUUserEarnedRewardCallback_t224874987 * ___userEarnedRewardCallback6, GADURewardedAdPaidEventCallback_t3617339775 * ___paidEventCallback7, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADURequestRewardedAd(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADURequestRewardedAd_m2466116203 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAd0, intptr_t ___request1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUShowRewardedAd(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUShowRewardedAd_m1569304222 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAd0, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Utils::BuildServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions)
extern "C" IL2CPP_METHOD_ATTR intptr_t Utils_BuildServerSideVerificationOptions_m3905722713 (RuntimeObject * __this /* static, unused */, ServerSideVerificationOptions_t4071074516 * ___options0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADURewardedAdSetServerSideVerificationOptions(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADURewardedAdSetServerSideVerificationOptions_m1857564689 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAd0, intptr_t ___options1, const RuntimeMethod* method);
// System.Boolean GoogleMobileAds.iOS.Externs::GADURewardedAdReady(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool Externs_GADURewardedAdReady_m2237724168 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAd0, const RuntimeMethod* method);
// System.String GoogleMobileAds.iOS.Externs::GADURewardedAdGetRewardType(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Externs_GADURewardedAdGetRewardType_m411225125 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAd0, const RuntimeMethod* method);
// System.Double GoogleMobileAds.iOS.Externs::GADURewardedAdGetRewardAmount(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR double Externs_GADURewardedAdGetRewardAmount_m986135042 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAd0, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUMediationAdapterClassNameForRewardedAd(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Externs_GADUMediationAdapterClassNameForRewardedAd_m4194593350 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedVideo0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient::DestroyRewardedAd()
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_DestroyRewardedAd_m1401785117 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient::Dispose()
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_Dispose_m888037648 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method);
// GoogleMobileAds.iOS.RewardedAdClient GoogleMobileAds.iOS.RewardedAdClient::IntPtrToRewardedAdClient(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RewardedAdClient_t1756845177 * RewardedAdClient_IntPtrToRewardedAdClient_m789117288 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_m2112891314 (AdErrorEventArgs_t193779475 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_Message(System.String)
extern "C" IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_Message_m1471932436 (AdErrorEventArgs_t193779475 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m121066725(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2412906204 *, RuntimeObject *, AdErrorEventArgs_t193779475 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void GoogleMobileAds.Api.AdValue::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AdValue__ctor_m4219000783 (AdValue_t4078760168 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdValue::set_Precision(GoogleMobileAds.Api.AdValue/PrecisionType)
extern "C" IL2CPP_METHOD_ATTR void AdValue_set_Precision_m3847983301 (AdValue_t4078760168 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdValue::set_Value(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void AdValue_set_Value_m1432270804 (AdValue_t4078760168 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdValue::set_CurrencyCode(System.String)
extern "C" IL2CPP_METHOD_ATTR void AdValue_set_CurrencyCode_m2767731806 (AdValue_t4078760168 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdValueEventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AdValueEventArgs__ctor_m2067749485 (AdValueEventArgs_t374020464 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdValueEventArgs::set_AdValue(GoogleMobileAds.Api.AdValue)
extern "C" IL2CPP_METHOD_ATTR void AdValueEventArgs_set_AdValue_m1706002291 (AdValueEventArgs_t374020464 * __this, AdValue_t4078760168 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m2555290985(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2593147193 *, RuntimeObject *, AdValueEventArgs_t374020464 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback_Invoke_m3016830638 (GADURewardedAdDidCloseCallback_t2874328472 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback_Invoke_m2771887453 (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback_Invoke_m1789212756 (GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback_Invoke_m3356630232 (GADURewardedAdDidOpenCallback_t4091248959 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback_Invoke_m1607867489 (GADURewardedAdDidReceiveAdCallback_t3678103445 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback::Invoke(System.IntPtr,System.Int32,System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdPaidEventCallback_Invoke_m3679956785 (GADURewardedAdPaidEventCallback_t3617339775 * __this, intptr_t ___rewardedAdClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback::Invoke(System.IntPtr,System.String,System.Double)
extern "C" IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback_Invoke_m2032040093 (GADUUserEarnedRewardCallback_t224874987 * __this, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRequest()
extern "C" IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateRequest_m12381884 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::get_Keywords()
extern "C" IL2CPP_METHOD_ATTR HashSet_1_t412400163 * AdRequest_get_Keywords_m2599443119 (AdRequest_t1573687800 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
#define HashSet_1_GetEnumerator_m1519394295(__this, method) ((  Enumerator_t2117577434  (*) (HashSet_1_t412400163 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m3346268098_gshared)(__this, method)
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.String>::get_Current()
#define Enumerator_get_Current_m3165364755(__this, method) ((  String_t* (*) (Enumerator_t2117577434 *, const RuntimeMethod*))Enumerator_get_Current_m4213278602_gshared)(__this, method)
// System.Void GoogleMobileAds.iOS.Externs::GADUAddKeyword(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUAddKeyword_m494140717 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, String_t* ___keyword1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.String>::MoveNext()
#define Enumerator_MoveNext_m2530340477(__this, method) ((  bool (*) (Enumerator_t2117577434 *, const RuntimeMethod*))Enumerator_MoveNext_m3714175425_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.String>::Dispose()
#define Enumerator_Dispose_m823536440(__this, method) ((  void (*) (Enumerator_t2117577434 *, const RuntimeMethod*))Enumerator_Dispose_m1204547613_gshared)(__this, method)
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::get_TestDevices()
extern "C" IL2CPP_METHOD_ATTR List_1_t3319525431 * AdRequest_get_TestDevices_m1682785895 (AdRequest_t1573687800 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m3752588592(__this, method) ((  Enumerator_t913802012  (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
#define Enumerator_get_Current_m3383387960(__this, method) ((  String_t* (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void GoogleMobileAds.iOS.Externs::GADUAddTestDevice(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUAddTestDevice_m4243981418 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, String_t* ___deviceId1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
#define Enumerator_MoveNext_m3603343449(__this, method) ((  bool (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
#define Enumerator_Dispose_m2026665411(__this, method) ((  void (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::get_Birthday()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1166124571  AdRequest_get_Birthday_m2572514828 (AdRequest_t1573687800 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
#define Nullable_1_get_HasValue_m3308303329(__this, method) ((  bool (*) (Nullable_1_t1166124571 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3308303329_gshared)(__this, method)
// !0 System.Nullable`1<System.DateTime>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m1358049705(__this, method) ((  DateTime_t3738529785  (*) (Nullable_1_t1166124571 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m1358049705_gshared)(__this, method)
// System.Int32 System.DateTime::get_Year()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m1184003812 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m1566006993 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m1623500273 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBirthday(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetBirthday_m3517097208 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, int32_t ___year1, int32_t ___month2, int32_t ___day3, const RuntimeMethod* method);
// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::get_Gender()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t3356391844  AdRequest_get_Gender_m4265506577 (AdRequest_t1573687800 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<GoogleMobileAds.Api.Gender>::get_HasValue()
#define Nullable_1_get_HasValue_m2043790361(__this, method) ((  bool (*) (Nullable_1_t3356391844 *, const RuntimeMethod*))Nullable_1_get_HasValue_m2043790361_gshared)(__this, method)
// !0 System.Nullable`1<GoogleMobileAds.Api.Gender>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m2088687324(__this, method) ((  int32_t (*) (Nullable_1_t3356391844 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m2088687324_gshared)(__this, method)
// System.Void GoogleMobileAds.iOS.Externs::GADUSetGender(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetGender_m1996646863 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, int32_t ___genderCode1, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::get_TagForChildDirectedTreatment()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1819850047  AdRequest_get_TagForChildDirectedTreatment_m2166109080 (AdRequest_t1573687800 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
#define Nullable_1_get_HasValue_m3741069969(__this, method) ((  bool (*) (Nullable_1_t1819850047 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3741069969_gshared)(__this, method)
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m256290237(__this, method) ((  bool (*) (Nullable_1_t1819850047 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m256290237_gshared)(__this, method)
// System.Void GoogleMobileAds.iOS.Externs::GADUTagForChildDirectedTreatment(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUTagForChildDirectedTreatment_m493683814 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, bool ___childDirectedTreatment1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::get_Extras()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1632706988 * AdRequest_get_Extras_m3434326504 (AdRequest_t1573687800 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m4035971863(__this, method) ((  Enumerator_t3586889763  (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
#define Enumerator_get_Current_m3704352721(__this, method) ((  KeyValuePair_2_t4030379155  (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
#define KeyValuePair_2_get_Key_m1558613789(__this, method) ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
#define KeyValuePair_2_get_Value_m3184375205(__this, method) ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// System.Void GoogleMobileAds.iOS.Externs::GADUSetExtra(System.IntPtr,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetExtra_m1192982622 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
#define Enumerator_MoveNext_m1807940103(__this, method) ((  bool (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
#define Enumerator_Dispose_m2198401511(__this, method) ((  void (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::get_MediationExtras()
extern "C" IL2CPP_METHOD_ATTR List_1_t3723909906 * AdRequest_get_MediationExtras_m3388587535 (AdRequest_t1573687800 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>::GetEnumerator()
#define List_1_GetEnumerator_m1516320239(__this, method) ((  Enumerator_t1318186487  (*) (List_1_t3723909906 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>::get_Current()
#define Enumerator_get_Current_m942627990(__this, method) ((  MediationExtras_t2251835164 * (*) (Enumerator_t1318186487 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateMutableDictionary()
extern "C" IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateMutableDictionary_m1394405504 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.Mediation.MediationExtras::get_Extras()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1632706988 * MediationExtras_get_Extras_m2824990405 (MediationExtras_t2251835164 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUMutableDictionarySetValue(System.IntPtr,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUMutableDictionarySetValue_m4263840583 (RuntimeObject * __this /* static, unused */, intptr_t ___mutableDictionaryPtr0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetMediationExtras(System.IntPtr,System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetMediationExtras_m4106390223 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, intptr_t ___mutableDictionaryPtr1, String_t* ___adNetworkExtrasClassName2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>::MoveNext()
#define Enumerator_MoveNext_m4093686627(__this, method) ((  bool (*) (Enumerator_t1318186487 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>::Dispose()
#define Enumerator_Dispose_m3659158765(__this, method) ((  void (*) (Enumerator_t1318186487 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRequestAgent(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUSetRequestAgent_m2007299171 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, String_t* ___requestAgent1, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateServerSideVerificationOptions()
extern "C" IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateServerSideVerificationOptions_m1466441549 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* ServerSideVerificationOptions_get_UserId_m3098835367 (ServerSideVerificationOptions_t4071074516 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUServerSideVerificationOptionsSetUserId(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUServerSideVerificationOptionsSetUserId_m2585719509 (RuntimeObject * __this /* static, unused */, intptr_t ___options0, String_t* ___userId1, const RuntimeMethod* method);
// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::get_CustomData()
extern "C" IL2CPP_METHOD_ATTR String_t* ServerSideVerificationOptions_get_CustomData_m1173803063 (ServerSideVerificationOptions_t4071074516 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUServerSideVerificationOptionsSetCustomRewardString(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void Externs_GADUServerSideVerificationOptionsSetCustomRewardString_m2900251167 (RuntimeObject * __this /* static, unused */, intptr_t ___options0, String_t* ___customRewardString1, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m2474145239 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m1757369653 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.IntPtr[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m437255119 (RuntimeObject * __this /* static, unused */, intptr_t p0, IntPtrU5BU5D_t4013366056* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m3648166035 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m199233495(__this, p0, method) ((  void (*) (List_1_t3319525431 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_GADUInterstitialDidDismissScreenCallback_t1339081348 (GADUInterstitialDidDismissScreenCallback_t1339081348 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0);

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidDismissScreenCallback__ctor_m1546527164 (GADUInterstitialDidDismissScreenCallback_t1339081348 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidDismissScreenCallback_Invoke_m1549830198 (GADUInterstitialDidDismissScreenCallback_t1339081348 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADUInterstitialDidDismissScreenCallback_Invoke_m1549830198((GADUInterstitialDidDismissScreenCallback_t1339081348 *)__this->get_prev_9(), ___interstitialClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___interstitialClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialDidDismissScreenCallback_BeginInvoke_m2866655982 (GADUInterstitialDidDismissScreenCallback_t1339081348 * __this, intptr_t ___interstitialClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADUInterstitialDidDismissScreenCallback_BeginInvoke_m2866655982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidDismissScreenCallback_EndInvoke_m368184441 (GADUInterstitialDidDismissScreenCallback_t1339081348 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 * __this, intptr_t ___interstitialClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidFailToReceiveAdWithErrorCallback__ctor_m480554691 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidFailToReceiveAdWithErrorCallback_Invoke_m3578693374 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 * __this, intptr_t ___interstitialClient0, String_t* ___error1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADUInterstitialDidFailToReceiveAdWithErrorCallback_Invoke_m3578693374((GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 *)__this->get_prev_9(), ___interstitialClient0, ___error1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___interstitialClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___interstitialClient0, ___error1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___interstitialClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___interstitialClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialDidFailToReceiveAdWithErrorCallback_BeginInvoke_m3478846559 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 * __this, intptr_t ___interstitialClient0, String_t* ___error1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADUInterstitialDidFailToReceiveAdWithErrorCallback_BeginInvoke_m3478846559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidFailToReceiveAdWithErrorCallback_EndInvoke_m750182670 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1323914714 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADUInterstitialDidReceiveAdCallback_t821971233 (GADUInterstitialDidReceiveAdCallback_t821971233 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0);

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidReceiveAdCallback__ctor_m3804140186 (GADUInterstitialDidReceiveAdCallback_t821971233 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidReceiveAdCallback_Invoke_m91066008 (GADUInterstitialDidReceiveAdCallback_t821971233 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADUInterstitialDidReceiveAdCallback_Invoke_m91066008((GADUInterstitialDidReceiveAdCallback_t821971233 *)__this->get_prev_9(), ___interstitialClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___interstitialClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialDidReceiveAdCallback_BeginInvoke_m3761342241 (GADUInterstitialDidReceiveAdCallback_t821971233 * __this, intptr_t ___interstitialClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADUInterstitialDidReceiveAdCallback_BeginInvoke_m3761342241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialDidReceiveAdCallback_EndInvoke_m4124410401 (GADUInterstitialDidReceiveAdCallback_t821971233 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADUInterstitialPaidEventCallback_t2548624492 (GADUInterstitialPaidEventCallback_t2548624492 * __this, intptr_t ___interstitialClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___currencyCode3' to native representation
	char* ____currencyCode3_marshaled = NULL;
	____currencyCode3_marshaled = il2cpp_codegen_marshal_string(___currencyCode3);

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0, ___precision1, ___value2, ____currencyCode3_marshaled);

	// Marshaling cleanup of parameter '___currencyCode3' native representation
	il2cpp_codegen_marshal_free(____currencyCode3_marshaled);
	____currencyCode3_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialPaidEventCallback__ctor_m2004747500 (GADUInterstitialPaidEventCallback_t2548624492 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback::Invoke(System.IntPtr,System.Int32,System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialPaidEventCallback_Invoke_m3464340631 (GADUInterstitialPaidEventCallback_t2548624492 * __this, intptr_t ___interstitialClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADUInterstitialPaidEventCallback_Invoke_m3464340631((GADUInterstitialPaidEventCallback_t2548624492 *)__this->get_prev_9(), ___interstitialClient0, ___precision1, ___value2, ___currencyCode3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(targetMethod, targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3);
					else
						GenericVirtActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(targetMethod, targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3);
					else
						VirtActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback::BeginInvoke(System.IntPtr,System.Int32,System.Int64,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialPaidEventCallback_BeginInvoke_m1677921463 (GADUInterstitialPaidEventCallback_t2548624492 * __this, intptr_t ___interstitialClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADUInterstitialPaidEventCallback_BeginInvoke_m1677921463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___precision1);
	__d_args[2] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___value2);
	__d_args[3] = ___currencyCode3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialPaidEventCallback_EndInvoke_m3659988340 (GADUInterstitialPaidEventCallback_t2548624492 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADUInterstitialWillLeaveApplicationCallback_t1816935820 (GADUInterstitialWillLeaveApplicationCallback_t1816935820 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0);

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialWillLeaveApplicationCallback__ctor_m164126892 (GADUInterstitialWillLeaveApplicationCallback_t1816935820 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialWillLeaveApplicationCallback_Invoke_m1182388421 (GADUInterstitialWillLeaveApplicationCallback_t1816935820 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADUInterstitialWillLeaveApplicationCallback_Invoke_m1182388421((GADUInterstitialWillLeaveApplicationCallback_t1816935820 *)__this->get_prev_9(), ___interstitialClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___interstitialClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialWillLeaveApplicationCallback_BeginInvoke_m4101857615 (GADUInterstitialWillLeaveApplicationCallback_t1816935820 * __this, intptr_t ___interstitialClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADUInterstitialWillLeaveApplicationCallback_BeginInvoke_m4101857615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialWillLeaveApplicationCallback_EndInvoke_m3586103913 (GADUInterstitialWillLeaveApplicationCallback_t1816935820 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADUInterstitialWillPresentScreenCallback_t539653454 (GADUInterstitialWillPresentScreenCallback_t539653454 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0);

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialWillPresentScreenCallback__ctor_m1463927394 (GADUInterstitialWillPresentScreenCallback_t539653454 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialWillPresentScreenCallback_Invoke_m3584697259 (GADUInterstitialWillPresentScreenCallback_t539653454 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADUInterstitialWillPresentScreenCallback_Invoke_m3584697259((GADUInterstitialWillPresentScreenCallback_t539653454 *)__this->get_prev_9(), ___interstitialClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___interstitialClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialWillPresentScreenCallback_BeginInvoke_m3996007592 (GADUInterstitialWillPresentScreenCallback_t539653454 * __this, intptr_t ___interstitialClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADUInterstitialWillPresentScreenCallback_BeginInvoke_m3996007592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADUInterstitialWillPresentScreenCallback_EndInvoke_m2802301288 (GADUInterstitialWillPresentScreenCallback_t539653454 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MobileAdsClient_InitializationCompleteCallback_m3680942184(intptr_t ___mobileAdsClient0, intptr_t ___initStatus1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	MobileAdsClient_InitializationCompleteCallback_m3680942184(NULL, ___mobileAdsClient0, ___initStatus1, NULL);

}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient__ctor_m2434571403 (MobileAdsClient_t1008075298 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		GCHandle_t3351438187  L_0 = GCHandle_Alloc_m3053200191(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		intptr_t L_1 = GCHandle_op_Explicit_m127498741(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_mobileAdsClientPtr_2(L_1);
		return;
	}
}
// GoogleMobileAds.iOS.MobileAdsClient GoogleMobileAds.iOS.MobileAdsClient::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MobileAdsClient_t1008075298 * MobileAdsClient_get_Instance_m614207227 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAdsClient_get_Instance_m614207227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var);
		MobileAdsClient_t1008075298 * L_0 = ((MobileAdsClient_t1008075298_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::Initialize(System.String)
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_Initialize_m4008570416 (MobileAdsClient_t1008075298 * __this, String_t* ___appId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___appId0;
		Externs_GADUInitialize_m4000467789(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>)
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_Initialize_m3654731405 (MobileAdsClient_t1008075298 * __this, Action_1_t4111548861 * ___initCompleteAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAdsClient_Initialize_m3654731405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	{
		Action_1_t4111548861 * L_0 = ___initCompleteAction0;
		__this->set_initCompleteAction_1(L_0);
		intptr_t L_1 = __this->get_mobileAdsClientPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var);
		GADUInitializationCompleteCallback_t1402508519 * L_2 = ((MobileAdsClient_t1008075298_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0025;
		}
	}
	{
		intptr_t L_3 = (intptr_t)MobileAdsClient_InitializationCompleteCallback_m3680942184_RuntimeMethod_var;
		GADUInitializationCompleteCallback_t1402508519 * L_4 = (GADUInitializationCompleteCallback_t1402508519 *)il2cpp_codegen_object_new(GADUInitializationCompleteCallback_t1402508519_il2cpp_TypeInfo_var);
		GADUInitializationCompleteCallback__ctor_m2461378383(L_4, NULL, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var);
		((MobileAdsClient_t1008075298_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_3(L_4);
		G_B2_0 = G_B1_0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var);
		GADUInitializationCompleteCallback_t1402508519 * L_5 = ((MobileAdsClient_t1008075298_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_3();
		Externs_GADUInitializeWithCallback_m909965584(NULL /*static, unused*/, G_B2_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::SetApplicationVolume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_SetApplicationVolume_m1831221294 (MobileAdsClient_t1008075298 * __this, float ___volume0, const RuntimeMethod* method)
{
	{
		float L_0 = ___volume0;
		Externs_GADUSetApplicationVolume_m3617107962(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::SetApplicationMuted(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_SetApplicationMuted_m1019775677 (MobileAdsClient_t1008075298 * __this, bool ___muted0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___muted0;
		Externs_GADUSetApplicationMuted_m2225141894(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::SetRequestConfiguration(GoogleMobileAds.Api.RequestConfiguration)
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_SetRequestConfiguration_m948344488 (MobileAdsClient_t1008075298 * __this, RequestConfiguration_t836713487 * ___requestConfiguration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAdsClient_SetRequestConfiguration_m948344488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RequestConfiguration_t836713487 * L_0 = ___requestConfiguration0;
		IL2CPP_RUNTIME_CLASS_INIT(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var);
		RequestConfigurationClient_SetRequestConfiguration_m2347446752(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.iOS.MobileAdsClient::GetRequestConfiguration()
extern "C" IL2CPP_METHOD_ATTR RequestConfiguration_t836713487 * MobileAdsClient_GetRequestConfiguration_m2687223028 (MobileAdsClient_t1008075298 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAdsClient_GetRequestConfiguration_m2687223028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var);
		RequestConfiguration_t836713487 * L_0 = RequestConfigurationClient_GetRequestConfiguration_m4085141006(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::SetiOSAppPauseOnBackground(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_SetiOSAppPauseOnBackground_m2849877020 (MobileAdsClient_t1008075298 * __this, bool ___pause0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___pause0;
		Externs_GADUSetiOSAppPauseOnBackground_m3757500555(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single GoogleMobileAds.iOS.MobileAdsClient::GetDeviceScale()
extern "C" IL2CPP_METHOD_ATTR float MobileAdsClient_GetDeviceScale_m730271974 (MobileAdsClient_t1008075298 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Externs_GADUDeviceScale_m929053593(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 GoogleMobileAds.iOS.MobileAdsClient::GetDeviceSafeWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t MobileAdsClient_GetDeviceSafeWidth_m3880730522 (MobileAdsClient_t1008075298 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Externs_GADUDeviceSafeWidth_m2945600171(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::InitializationCompleteCallback(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_InitializationCompleteCallback_m3680942184 (RuntimeObject * __this /* static, unused */, intptr_t ___mobileAdsClient0, intptr_t ___initStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAdsClient_InitializationCompleteCallback_m3680942184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MobileAdsClient_t1008075298 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		intptr_t L_0 = ___mobileAdsClient0;
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var);
		MobileAdsClient_t1008075298 * L_1 = MobileAdsClient_IntPtrToMobileAdsClient_m124165820(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MobileAdsClient_t1008075298 * L_2 = V_0;
		NullCheck(L_2);
		Action_1_t4111548861 * L_3 = L_2->get_initCompleteAction_1();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		intptr_t L_4 = ___initStatus1;
		InitializationStatusClient_t1332972171 * L_5 = (InitializationStatusClient_t1332972171 *)il2cpp_codegen_object_new(InitializationStatusClient_t1332972171_il2cpp_TypeInfo_var);
		InitializationStatusClient__ctor_m3075421882(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		MobileAdsClient_t1008075298 * L_6 = V_0;
		NullCheck(L_6);
		Action_1_t4111548861 * L_7 = L_6->get_initCompleteAction_1();
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		Action_1_Invoke_m1459356442(L_7, L_8, /*hidden argument*/Action_1_Invoke_m1459356442_RuntimeMethod_var);
	}

IL_0025:
	{
		return;
	}
}
// GoogleMobileAds.iOS.MobileAdsClient GoogleMobileAds.iOS.MobileAdsClient::IntPtrToMobileAdsClient(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR MobileAdsClient_t1008075298 * MobileAdsClient_IntPtrToMobileAdsClient_m124165820 (RuntimeObject * __this /* static, unused */, intptr_t ___mobileAdsClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAdsClient_IntPtrToMobileAdsClient_m124165820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = ___mobileAdsClient0;
		GCHandle_t3351438187  L_1 = GCHandle_op_Explicit_m976572069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = GCHandle_get_Target_m1824973883((&V_0), /*hidden argument*/NULL);
		return ((MobileAdsClient_t1008075298 *)IsInstClass((RuntimeObject*)L_2, MobileAdsClient_t1008075298_il2cpp_TypeInfo_var));
	}
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::Dispose()
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_Dispose_m3682403140 (MobileAdsClient_t1008075298 * __this, const RuntimeMethod* method)
{
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_mobileAdsClientPtr_2();
		GCHandle_t3351438187  L_1 = GCHandle_op_Explicit_m976572069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GCHandle_Free_m1457699368((&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::Finalize()
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient_Finalize_m3371145602 (MobileAdsClient_t1008075298 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		MobileAdsClient_Dispose_m3682403140(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MobileAdsClient__cctor_m1893070056 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAdsClient__cctor_m1893070056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAdsClient_t1008075298 * L_0 = (MobileAdsClient_t1008075298 *)il2cpp_codegen_object_new(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var);
		MobileAdsClient__ctor_m2434571403(L_0, /*hidden argument*/NULL);
		((MobileAdsClient_t1008075298_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsClient_t1008075298_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
extern "C"  void DelegatePInvokeWrapper_GADUInitializationCompleteCallback_t1402508519 (GADUInitializationCompleteCallback_t1402508519 * __this, intptr_t ___mobileAdsClient0, intptr_t ___initStatusClient1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___mobileAdsClient0, ___initStatusClient1);

}
// System.Void GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInitializationCompleteCallback__ctor_m2461378383 (GADUInitializationCompleteCallback_t1402508519 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback::Invoke(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUInitializationCompleteCallback_Invoke_m1966813198 (GADUInitializationCompleteCallback_t1402508519 * __this, intptr_t ___mobileAdsClient0, intptr_t ___initStatusClient1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADUInitializationCompleteCallback_Invoke_m1966813198((GADUInitializationCompleteCallback_t1402508519 *)__this->get_prev_9(), ___mobileAdsClient0, ___initStatusClient1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___mobileAdsClient0, ___initStatusClient1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___mobileAdsClient0, ___initStatusClient1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___mobileAdsClient0, ___initStatusClient1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___mobileAdsClient0, ___initStatusClient1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___mobileAdsClient0, ___initStatusClient1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___mobileAdsClient0, ___initStatusClient1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___mobileAdsClient0, ___initStatusClient1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADUInitializationCompleteCallback_BeginInvoke_m1876453826 (GADUInitializationCompleteCallback_t1402508519 * __this, intptr_t ___mobileAdsClient0, intptr_t ___initStatusClient1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADUInitializationCompleteCallback_BeginInvoke_m1876453826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___mobileAdsClient0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___initStatusClient1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADUInitializationCompleteCallback_EndInvoke_m2065513729 (GADUInitializationCompleteCallback_t1402508519 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.iOS.RequestConfigurationClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RequestConfigurationClient__ctor_m2894787989 (RequestConfigurationClient_t3117146206 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RequestConfigurationClient::SetRequestConfiguration(GoogleMobileAds.Api.RequestConfiguration)
extern "C" IL2CPP_METHOD_ATTR void RequestConfigurationClient_SetRequestConfiguration_m2347446752 (RuntimeObject * __this /* static, unused */, RequestConfiguration_t836713487 * ___requestConfiguration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RequestConfigurationClient_SetRequestConfiguration_m2347446752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	Nullable_1_t3397804492  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Nullable_1_t3397804492  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Nullable_1_t3617308817  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Nullable_1_t3617308817  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		RequestConfiguration_t836713487 * L_0 = ___requestConfiguration0;
		NullCheck(L_0);
		MaxAdContentRating_t2033022353 * L_1 = RequestConfiguration_get_MaxAdContentRating_m36687956(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->get_requestConfigurationPtr_0();
		RequestConfiguration_t836713487 * L_3 = ___requestConfiguration0;
		NullCheck(L_3);
		MaxAdContentRating_t2033022353 * L_4 = RequestConfiguration_get_MaxAdContentRating_m36687956(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = MaxAdContentRating_get_Value_m725327631(L_4, /*hidden argument*/NULL);
		Externs_GADUSetRequestConfigurationMaxAdContentRating_m342369952(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		RequestConfiguration_t836713487 * L_6 = ___requestConfiguration0;
		NullCheck(L_6);
		List_1_t3319525431 * L_7 = RequestConfiguration_get_TestDeviceIds_m4022808464(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m2276455407(L_7, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		RequestConfiguration_t836713487 * L_9 = ___requestConfiguration0;
		NullCheck(L_9);
		List_1_t3319525431 * L_10 = RequestConfiguration_get_TestDeviceIds_m4022808464(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m2276455407(L_10, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		V_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_11));
		RequestConfiguration_t836713487 * L_12 = ___requestConfiguration0;
		NullCheck(L_12);
		List_1_t3319525431 * L_13 = RequestConfiguration_get_TestDeviceIds_m4022808464(L_12, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_14 = V_0;
		NullCheck(L_13);
		List_1_CopyTo_m173105794(L_13, L_14, /*hidden argument*/List_1_CopyTo_m173105794_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var);
		intptr_t L_15 = ((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->get_requestConfigurationPtr_0();
		StringU5BU5D_t1281789340* L_16 = V_0;
		RequestConfiguration_t836713487 * L_17 = ___requestConfiguration0;
		NullCheck(L_17);
		List_1_t3319525431 * L_18 = RequestConfiguration_get_TestDeviceIds_m4022808464(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = List_1_get_Count_m2276455407(L_18, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		Externs_GADUSetRequestConfigurationTestDeviceIdentifiers_m3128809967(NULL /*static, unused*/, L_15, L_16, L_19, /*hidden argument*/NULL);
	}

IL_0064:
	{
		RequestConfiguration_t836713487 * L_20 = ___requestConfiguration0;
		NullCheck(L_20);
		Nullable_1_t3397804492  L_21 = RequestConfiguration_get_TagForChildDirectedTreatment_m1288229619(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		bool L_22 = Nullable_1_get_HasValue_m726768612((&V_1), /*hidden argument*/Nullable_1_get_HasValue_m726768612_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_008f;
		}
	}
	{
		RequestConfiguration_t836713487 * L_23 = ___requestConfiguration0;
		NullCheck(L_23);
		Nullable_1_t3397804492  L_24 = RequestConfiguration_get_TagForChildDirectedTreatment_m1288229619(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var);
		intptr_t L_25 = ((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->get_requestConfigurationPtr_0();
		int32_t L_26 = Nullable_1_GetValueOrDefault_m1896014553((&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_m1896014553_RuntimeMethod_var);
		Externs_GADUSetRequestConfigurationTagForChildDirectedTreatment_m3862887072(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
	}

IL_008f:
	{
		RequestConfiguration_t836713487 * L_27 = ___requestConfiguration0;
		NullCheck(L_27);
		Nullable_1_t3617308817  L_28 = RequestConfiguration_get_TagForUnderAgeOfConsent_m2805616823(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		bool L_29 = Nullable_1_get_HasValue_m914270746((&V_3), /*hidden argument*/Nullable_1_get_HasValue_m914270746_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_00bb;
		}
	}
	{
		RequestConfiguration_t836713487 * L_30 = ___requestConfiguration0;
		NullCheck(L_30);
		Nullable_1_t3617308817  L_31 = RequestConfiguration_get_TagForUnderAgeOfConsent_m2805616823(L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		IL2CPP_RUNTIME_CLASS_INIT(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var);
		intptr_t L_32 = ((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->get_requestConfigurationPtr_0();
		int32_t L_33 = Nullable_1_GetValueOrDefault_m1453157128((&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m1453157128_RuntimeMethod_var);
		Externs_GADUSetRequestConfigurationTagForUnderAgeOfConsent_m895123563(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var);
		intptr_t L_34 = ((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->get_requestConfigurationPtr_0();
		Externs_GADUSetRequestConfiguration_m4179406785(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.iOS.RequestConfigurationClient::GetRequestConfiguration()
extern "C" IL2CPP_METHOD_ATTR RequestConfiguration_t836713487 * RequestConfigurationClient_GetRequestConfiguration_m4085141006 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RequestConfigurationClient_GetRequestConfiguration_m4085141006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Builder_t3191429920 * V_0 = NULL;
	MaxAdContentRating_t2033022353 * V_1 = NULL;
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	List_1_t3319525431 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Builder_t3191429920 * L_0 = (Builder_t3191429920 *)il2cpp_codegen_object_new(Builder_t3191429920_il2cpp_TypeInfo_var);
		Builder__ctor_m2415579558(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->get_requestConfigurationPtr_0();
		String_t* L_2 = Externs_GADUGetMaxAdContentRating_m4116126256(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		MaxAdContentRating_t2033022353 * L_3 = MaxAdContentRating_ToMaxAdContentRating_m2575580449(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		intptr_t L_4 = ((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->get_requestConfigurationPtr_0();
		intptr_t L_5 = Externs_GADUGetTestDeviceIdentifiers_m3727712757(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		intptr_t L_6 = V_2;
		intptr_t L_7 = ((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->get_requestConfigurationPtr_0();
		int32_t L_8 = Externs_GADUGetTestDeviceIdentifiersCount_m1615941748(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		List_1_t3319525431 * L_9 = Utils_PtrArrayToManagedList_m1310791226(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		intptr_t L_10 = ((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->get_requestConfigurationPtr_0();
		int32_t L_11 = Externs_GADUGetRequestConfigurationTagForChildDirectedTreatment_m3498468368(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		intptr_t L_12 = ((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->get_requestConfigurationPtr_0();
		int32_t L_13 = Externs_GADUGetRequestConfigurationTagForUnderAgeOfConsent_m746146564(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		Builder_t3191429920 * L_14 = V_0;
		MaxAdContentRating_t2033022353 * L_15 = V_1;
		NullCheck(L_14);
		Builder_SetMaxAdContentRating_m229493609(L_14, L_15, /*hidden argument*/NULL);
		Builder_t3191429920 * L_16 = V_0;
		List_1_t3319525431 * L_17 = V_3;
		NullCheck(L_16);
		Builder_SetTestDeviceIds_m63541521(L_16, L_17, /*hidden argument*/NULL);
		Builder_t3191429920 * L_18 = V_0;
		int32_t L_19 = V_4;
		Nullable_1_t3397804492  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Nullable_1__ctor_m2005978086((&L_20), L_19, /*hidden argument*/Nullable_1__ctor_m2005978086_RuntimeMethod_var);
		NullCheck(L_18);
		Builder_SetTagForChildDirectedTreatment_m3282456807(L_18, L_20, /*hidden argument*/NULL);
		Builder_t3191429920 * L_21 = V_0;
		int32_t L_22 = V_5;
		Nullable_1_t3617308817  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Nullable_1__ctor_m3105844368((&L_23), L_22, /*hidden argument*/Nullable_1__ctor_m3105844368_RuntimeMethod_var);
		NullCheck(L_21);
		Builder_SetTagForUnderAgeOfConsent_m3958323735(L_21, L_23, /*hidden argument*/NULL);
		Builder_t3191429920 * L_24 = V_0;
		NullCheck(L_24);
		RequestConfiguration_t836713487 * L_25 = Builder_build_m2770939989(L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Void GoogleMobileAds.iOS.RequestConfigurationClient::.cctor()
extern "C" IL2CPP_METHOD_ATTR void RequestConfigurationClient__cctor_m2530493754 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RequestConfigurationClient__cctor_m2530493754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = Externs_GADUCreateRequestConfiguration_m2326812050(NULL /*static, unused*/, /*hidden argument*/NULL);
		((RequestConfigurationClient_t3117146206_StaticFields*)il2cpp_codegen_static_fields_for(RequestConfigurationClient_t3117146206_il2cpp_TypeInfo_var))->set_requestConfigurationPtr_0(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardBasedVideoAdClient_RewardBasedVideoAdDidReceiveAdCallback_m1892259112(intptr_t ___rewardBasedVideoAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardBasedVideoAdClient_RewardBasedVideoAdDidReceiveAdCallback_m1892259112(NULL, ___rewardBasedVideoAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardBasedVideoAdClient_RewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_m829880647(intptr_t ___rewardBasedVideoAdClient0, char* ___error1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___error1' to managed representation
	String_t* ____error1_unmarshaled = NULL;
	____error1_unmarshaled = il2cpp_codegen_marshal_string_result(___error1);

	// Managed method invocation
	RewardBasedVideoAdClient_RewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_m829880647(NULL, ___rewardBasedVideoAdClient0, ____error1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardBasedVideoAdClient_RewardBasedVideoAdDidOpenCallback_m141900546(intptr_t ___rewardBasedVideoAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardBasedVideoAdClient_RewardBasedVideoAdDidOpenCallback_m141900546(NULL, ___rewardBasedVideoAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardBasedVideoAdClient_RewardBasedVideoAdDidStartCallback_m856913864(intptr_t ___rewardBasedVideoAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardBasedVideoAdClient_RewardBasedVideoAdDidStartCallback_m856913864(NULL, ___rewardBasedVideoAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardBasedVideoAdClient_RewardBasedVideoAdDidCloseCallback_m3525630988(intptr_t ___rewardBasedVideoAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardBasedVideoAdClient_RewardBasedVideoAdDidCloseCallback_m3525630988(NULL, ___rewardBasedVideoAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardBasedVideoAdClient_RewardBasedVideoAdDidRewardUserCallback_m226148102(intptr_t ___rewardBasedVideoAdClient0, char* ___rewardType1, double ___rewardAmount2)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___rewardType1' to managed representation
	String_t* ____rewardType1_unmarshaled = NULL;
	____rewardType1_unmarshaled = il2cpp_codegen_marshal_string_result(___rewardType1);

	// Managed method invocation
	RewardBasedVideoAdClient_RewardBasedVideoAdDidRewardUserCallback_m226148102(NULL, ___rewardBasedVideoAdClient0, ____rewardType1_unmarshaled, ___rewardAmount2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardBasedVideoAdClient_RewardBasedVideoAdWillLeaveApplicationCallback_m3803009012(intptr_t ___rewardBasedVideoAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardBasedVideoAdClient_RewardBasedVideoAdWillLeaveApplicationCallback_m3803009012(NULL, ___rewardBasedVideoAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardBasedVideoAdClient_RewardBasedVideoAdDidCompleteCallback_m1288895517(intptr_t ___rewardBasedVideoAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardBasedVideoAdClient_RewardBasedVideoAdDidCompleteCallback_m1288895517(NULL, ___rewardBasedVideoAdClient0, NULL);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient__ctor_m3564530988 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_add_OnAdLoaded_m3218050284 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_add_OnAdLoaded_m3218050284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLoaded_2();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_remove_OnAdLoaded_m2868046009 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_remove_OnAdLoaded_m2868046009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLoaded_2();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_add_OnAdFailedToLoad_m443021331 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t780121155 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_add_OnAdFailedToLoad_m443021331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t780121155 * V_0 = NULL;
	EventHandler_1_t780121155 * V_1 = NULL;
	{
		EventHandler_1_t780121155 * L_0 = __this->get_OnAdFailedToLoad_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t780121155 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t780121155 ** L_2 = __this->get_address_of_OnAdFailedToLoad_3();
		EventHandler_1_t780121155 * L_3 = V_1;
		EventHandler_1_t780121155 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t780121155 * L_6 = V_0;
		EventHandler_1_t780121155 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t780121155 *>(L_2, ((EventHandler_1_t780121155 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t780121155_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t780121155 * L_8 = V_0;
		EventHandler_1_t780121155 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t780121155 *)L_8) == ((RuntimeObject*)(EventHandler_1_t780121155 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_remove_OnAdFailedToLoad_m1420800066 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t780121155 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_remove_OnAdFailedToLoad_m1420800066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t780121155 * V_0 = NULL;
	EventHandler_1_t780121155 * V_1 = NULL;
	{
		EventHandler_1_t780121155 * L_0 = __this->get_OnAdFailedToLoad_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t780121155 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t780121155 ** L_2 = __this->get_address_of_OnAdFailedToLoad_3();
		EventHandler_1_t780121155 * L_3 = V_1;
		EventHandler_1_t780121155 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t780121155 * L_6 = V_0;
		EventHandler_1_t780121155 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t780121155 *>(L_2, ((EventHandler_1_t780121155 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t780121155_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t780121155 * L_8 = V_0;
		EventHandler_1_t780121155 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t780121155 *)L_8) == ((RuntimeObject*)(EventHandler_1_t780121155 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_add_OnAdOpening_m3966245426 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_add_OnAdOpening_m3966245426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdOpening_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdOpening_4();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_remove_OnAdOpening_m1354149187 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_remove_OnAdOpening_m1354149187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdOpening_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdOpening_4();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::add_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_add_OnAdStarted_m1623615024 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_add_OnAdStarted_m1623615024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdStarted_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdStarted_5();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::remove_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_remove_OnAdStarted_m1749329417 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_remove_OnAdStarted_m1749329417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdStarted_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdStarted_5();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_add_OnAdClosed_m3611849063 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_add_OnAdClosed_m3611849063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_remove_OnAdClosed_m2602921654 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_remove_OnAdClosed_m2602921654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::add_OnAdRewarded(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_add_OnAdRewarded_m2434830284 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1628180368 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_add_OnAdRewarded_m2434830284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1628180368 * V_0 = NULL;
	EventHandler_1_t1628180368 * V_1 = NULL;
	{
		EventHandler_1_t1628180368 * L_0 = __this->get_OnAdRewarded_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1628180368 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1628180368 ** L_2 = __this->get_address_of_OnAdRewarded_7();
		EventHandler_1_t1628180368 * L_3 = V_1;
		EventHandler_1_t1628180368 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1628180368 * L_6 = V_0;
		EventHandler_1_t1628180368 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1628180368 *>(L_2, ((EventHandler_1_t1628180368 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1628180368_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1628180368 * L_8 = V_0;
		EventHandler_1_t1628180368 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1628180368 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1628180368 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::remove_OnAdRewarded(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_remove_OnAdRewarded_m605966436 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1628180368 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_remove_OnAdRewarded_m605966436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1628180368 * V_0 = NULL;
	EventHandler_1_t1628180368 * V_1 = NULL;
	{
		EventHandler_1_t1628180368 * L_0 = __this->get_OnAdRewarded_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1628180368 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1628180368 ** L_2 = __this->get_address_of_OnAdRewarded_7();
		EventHandler_1_t1628180368 * L_3 = V_1;
		EventHandler_1_t1628180368 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1628180368 * L_6 = V_0;
		EventHandler_1_t1628180368 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1628180368 *>(L_2, ((EventHandler_1_t1628180368 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1628180368_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1628180368 * L_8 = V_0;
		EventHandler_1_t1628180368 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1628180368 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1628180368 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_add_OnAdLeavingApplication_m4012122503 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_add_OnAdLeavingApplication_m4012122503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLeavingApplication_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLeavingApplication_8();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_remove_OnAdLeavingApplication_m1830931170 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_remove_OnAdLeavingApplication_m1830931170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLeavingApplication_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLeavingApplication_8();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::add_OnAdCompleted(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_add_OnAdCompleted_m3007550748 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_add_OnAdCompleted_m3007550748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdCompleted_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdCompleted_9();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::remove_OnAdCompleted(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_remove_OnAdCompleted_m276678918 (RewardBasedVideoAdClient_t745716004 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_remove_OnAdCompleted_m276678918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdCompleted_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdCompleted_9();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.IntPtr GoogleMobileAds.iOS.RewardBasedVideoAdClient::get_RewardBasedVideoAdPtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t RewardBasedVideoAdClient_get_RewardBasedVideoAdPtr_m3486981653 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_rewardBasedVideoAdPtr_0();
		return L_0;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::set_RewardBasedVideoAdPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_set_RewardBasedVideoAdPtr_m3604158259 (RewardBasedVideoAdClient_t745716004 * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_rewardBasedVideoAdPtr_0();
		Externs_GADURelease_m2380050566(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___value0;
		__this->set_rewardBasedVideoAdPtr_0(L_1);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::CreateRewardBasedVideoAd()
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_CreateRewardBasedVideoAd_m243890621 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_CreateRewardBasedVideoAd_m243890621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B4_0 = NULL;
	intptr_t G_B4_1;
	memset(&G_B4_1, 0, sizeof(G_B4_1));
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B3_0 = NULL;
	intptr_t G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B6_0 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B6_1 = NULL;
	intptr_t G_B6_2;
	memset(&G_B6_2, 0, sizeof(G_B6_2));
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B5_0 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B5_1 = NULL;
	intptr_t G_B5_2;
	memset(&G_B5_2, 0, sizeof(G_B5_2));
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * G_B8_0 = NULL;
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B8_1 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B8_2 = NULL;
	intptr_t G_B8_3;
	memset(&G_B8_3, 0, sizeof(G_B8_3));
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * G_B7_0 = NULL;
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B7_1 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B7_2 = NULL;
	intptr_t G_B7_3;
	memset(&G_B7_3, 0, sizeof(G_B7_3));
	GADURewardBasedVideoAdDidStartCallback_t2792276088 * G_B10_0 = NULL;
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * G_B10_1 = NULL;
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B10_2 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B10_3 = NULL;
	intptr_t G_B10_4;
	memset(&G_B10_4, 0, sizeof(G_B10_4));
	GADURewardBasedVideoAdDidStartCallback_t2792276088 * G_B9_0 = NULL;
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * G_B9_1 = NULL;
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B9_2 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B9_3 = NULL;
	intptr_t G_B9_4;
	memset(&G_B9_4, 0, sizeof(G_B9_4));
	GADURewardBasedVideoAdDidCloseCallback_t623082069 * G_B12_0 = NULL;
	GADURewardBasedVideoAdDidStartCallback_t2792276088 * G_B12_1 = NULL;
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * G_B12_2 = NULL;
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B12_3 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B12_4 = NULL;
	intptr_t G_B12_5;
	memset(&G_B12_5, 0, sizeof(G_B12_5));
	GADURewardBasedVideoAdDidCloseCallback_t623082069 * G_B11_0 = NULL;
	GADURewardBasedVideoAdDidStartCallback_t2792276088 * G_B11_1 = NULL;
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * G_B11_2 = NULL;
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B11_3 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B11_4 = NULL;
	intptr_t G_B11_5;
	memset(&G_B11_5, 0, sizeof(G_B11_5));
	GADURewardBasedVideoAdDidRewardCallback_t990863796 * G_B14_0 = NULL;
	GADURewardBasedVideoAdDidCloseCallback_t623082069 * G_B14_1 = NULL;
	GADURewardBasedVideoAdDidStartCallback_t2792276088 * G_B14_2 = NULL;
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * G_B14_3 = NULL;
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B14_4 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B14_5 = NULL;
	intptr_t G_B14_6;
	memset(&G_B14_6, 0, sizeof(G_B14_6));
	GADURewardBasedVideoAdDidRewardCallback_t990863796 * G_B13_0 = NULL;
	GADURewardBasedVideoAdDidCloseCallback_t623082069 * G_B13_1 = NULL;
	GADURewardBasedVideoAdDidStartCallback_t2792276088 * G_B13_2 = NULL;
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * G_B13_3 = NULL;
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B13_4 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B13_5 = NULL;
	intptr_t G_B13_6;
	memset(&G_B13_6, 0, sizeof(G_B13_6));
	GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * G_B16_0 = NULL;
	GADURewardBasedVideoAdDidRewardCallback_t990863796 * G_B16_1 = NULL;
	GADURewardBasedVideoAdDidCloseCallback_t623082069 * G_B16_2 = NULL;
	GADURewardBasedVideoAdDidStartCallback_t2792276088 * G_B16_3 = NULL;
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * G_B16_4 = NULL;
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B16_5 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B16_6 = NULL;
	intptr_t G_B16_7;
	memset(&G_B16_7, 0, sizeof(G_B16_7));
	GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * G_B15_0 = NULL;
	GADURewardBasedVideoAdDidRewardCallback_t990863796 * G_B15_1 = NULL;
	GADURewardBasedVideoAdDidCloseCallback_t623082069 * G_B15_2 = NULL;
	GADURewardBasedVideoAdDidStartCallback_t2792276088 * G_B15_3 = NULL;
	GADURewardBasedVideoAdDidOpenCallback_t3638490629 * G_B15_4 = NULL;
	GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * G_B15_5 = NULL;
	GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * G_B15_6 = NULL;
	intptr_t G_B15_7;
	memset(&G_B15_7, 0, sizeof(G_B15_7));
	{
		GCHandle_t3351438187  L_0 = GCHandle_Alloc_m3053200191(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		intptr_t L_1 = GCHandle_op_Explicit_m127498741(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_rewardBasedVideoAdClientPtr_1(L_1);
		intptr_t L_2 = __this->get_rewardBasedVideoAdClientPtr_1();
		intptr_t L_3 = Externs_GADUCreateRewardBasedVideoAd_m1889510220(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		RewardBasedVideoAdClient_set_RewardBasedVideoAdPtr_m3604158259(__this, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = RewardBasedVideoAdClient_get_RewardBasedVideoAdPtr_m3486981653(__this, /*hidden argument*/NULL);
		GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * L_5 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_10();
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0040;
		}
	}
	{
		intptr_t L_6 = (intptr_t)RewardBasedVideoAdClient_RewardBasedVideoAdDidReceiveAdCallback_m1892259112_RuntimeMethod_var;
		GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * L_7 = (GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 *)il2cpp_codegen_object_new(GADURewardBasedVideoAdDidReceiveAdCallback_t462486315_il2cpp_TypeInfo_var);
		GADURewardBasedVideoAdDidReceiveAdCallback__ctor_m2160022995(L_7, NULL, L_6, /*hidden argument*/NULL);
		((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_10(L_7);
		G_B2_0 = G_B1_0;
	}

IL_0040:
	{
		GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * L_8 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_10();
		GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * L_9 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_11();
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
		if (L_9)
		{
			G_B4_0 = L_8;
			G_B4_1 = G_B2_0;
			goto IL_005d;
		}
	}
	{
		intptr_t L_10 = (intptr_t)RewardBasedVideoAdClient_RewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_m829880647_RuntimeMethod_var;
		GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * L_11 = (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 *)il2cpp_codegen_object_new(GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788_il2cpp_TypeInfo_var);
		GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback__ctor_m983413226(L_11, NULL, L_10, /*hidden argument*/NULL);
		((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_11(L_11);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_005d:
	{
		GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * L_12 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_11();
		GADURewardBasedVideoAdDidOpenCallback_t3638490629 * L_13 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_12();
		G_B5_0 = L_12;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		if (L_13)
		{
			G_B6_0 = L_12;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			goto IL_007a;
		}
	}
	{
		intptr_t L_14 = (intptr_t)RewardBasedVideoAdClient_RewardBasedVideoAdDidOpenCallback_m141900546_RuntimeMethod_var;
		GADURewardBasedVideoAdDidOpenCallback_t3638490629 * L_15 = (GADURewardBasedVideoAdDidOpenCallback_t3638490629 *)il2cpp_codegen_object_new(GADURewardBasedVideoAdDidOpenCallback_t3638490629_il2cpp_TypeInfo_var);
		GADURewardBasedVideoAdDidOpenCallback__ctor_m1232197325(L_15, NULL, L_14, /*hidden argument*/NULL);
		((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_12(L_15);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_007a:
	{
		GADURewardBasedVideoAdDidOpenCallback_t3638490629 * L_16 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_12();
		GADURewardBasedVideoAdDidStartCallback_t2792276088 * L_17 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_13();
		G_B7_0 = L_16;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		if (L_17)
		{
			G_B8_0 = L_16;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			G_B8_3 = G_B6_2;
			goto IL_0097;
		}
	}
	{
		intptr_t L_18 = (intptr_t)RewardBasedVideoAdClient_RewardBasedVideoAdDidStartCallback_m856913864_RuntimeMethod_var;
		GADURewardBasedVideoAdDidStartCallback_t2792276088 * L_19 = (GADURewardBasedVideoAdDidStartCallback_t2792276088 *)il2cpp_codegen_object_new(GADURewardBasedVideoAdDidStartCallback_t2792276088_il2cpp_TypeInfo_var);
		GADURewardBasedVideoAdDidStartCallback__ctor_m968833380(L_19, NULL, L_18, /*hidden argument*/NULL);
		((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_13(L_19);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0097:
	{
		GADURewardBasedVideoAdDidStartCallback_t2792276088 * L_20 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_13();
		GADURewardBasedVideoAdDidCloseCallback_t623082069 * L_21 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_14();
		G_B9_0 = L_20;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
		if (L_21)
		{
			G_B10_0 = L_20;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			G_B10_3 = G_B8_2;
			G_B10_4 = G_B8_3;
			goto IL_00b4;
		}
	}
	{
		intptr_t L_22 = (intptr_t)RewardBasedVideoAdClient_RewardBasedVideoAdDidCloseCallback_m3525630988_RuntimeMethod_var;
		GADURewardBasedVideoAdDidCloseCallback_t623082069 * L_23 = (GADURewardBasedVideoAdDidCloseCallback_t623082069 *)il2cpp_codegen_object_new(GADURewardBasedVideoAdDidCloseCallback_t623082069_il2cpp_TypeInfo_var);
		GADURewardBasedVideoAdDidCloseCallback__ctor_m1596580095(L_23, NULL, L_22, /*hidden argument*/NULL);
		((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache4_14(L_23);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
	}

IL_00b4:
	{
		GADURewardBasedVideoAdDidCloseCallback_t623082069 * L_24 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_14();
		GADURewardBasedVideoAdDidRewardCallback_t990863796 * L_25 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache5_15();
		G_B11_0 = L_24;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
		G_B11_5 = G_B10_4;
		if (L_25)
		{
			G_B12_0 = L_24;
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			G_B12_3 = G_B10_2;
			G_B12_4 = G_B10_3;
			G_B12_5 = G_B10_4;
			goto IL_00d1;
		}
	}
	{
		intptr_t L_26 = (intptr_t)RewardBasedVideoAdClient_RewardBasedVideoAdDidRewardUserCallback_m226148102_RuntimeMethod_var;
		GADURewardBasedVideoAdDidRewardCallback_t990863796 * L_27 = (GADURewardBasedVideoAdDidRewardCallback_t990863796 *)il2cpp_codegen_object_new(GADURewardBasedVideoAdDidRewardCallback_t990863796_il2cpp_TypeInfo_var);
		GADURewardBasedVideoAdDidRewardCallback__ctor_m2712323043(L_27, NULL, L_26, /*hidden argument*/NULL);
		((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache5_15(L_27);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
		G_B12_4 = G_B11_4;
		G_B12_5 = G_B11_5;
	}

IL_00d1:
	{
		GADURewardBasedVideoAdDidRewardCallback_t990863796 * L_28 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache5_15();
		GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * L_29 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache6_16();
		G_B13_0 = L_28;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		G_B13_4 = G_B12_3;
		G_B13_5 = G_B12_4;
		G_B13_6 = G_B12_5;
		if (L_29)
		{
			G_B14_0 = L_28;
			G_B14_1 = G_B12_0;
			G_B14_2 = G_B12_1;
			G_B14_3 = G_B12_2;
			G_B14_4 = G_B12_3;
			G_B14_5 = G_B12_4;
			G_B14_6 = G_B12_5;
			goto IL_00ee;
		}
	}
	{
		intptr_t L_30 = (intptr_t)RewardBasedVideoAdClient_RewardBasedVideoAdWillLeaveApplicationCallback_m3803009012_RuntimeMethod_var;
		GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * L_31 = (GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 *)il2cpp_codegen_object_new(GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531_il2cpp_TypeInfo_var);
		GADURewardBasedVideoAdWillLeaveApplicationCallback__ctor_m3356045568(L_31, NULL, L_30, /*hidden argument*/NULL);
		((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache6_16(L_31);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		G_B14_4 = G_B13_4;
		G_B14_5 = G_B13_5;
		G_B14_6 = G_B13_6;
	}

IL_00ee:
	{
		GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * L_32 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache6_16();
		GADURewardBasedVideoAdDidCompleteCallback_t2076181 * L_33 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache7_17();
		G_B15_0 = L_32;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
		G_B15_4 = G_B14_3;
		G_B15_5 = G_B14_4;
		G_B15_6 = G_B14_5;
		G_B15_7 = G_B14_6;
		if (L_33)
		{
			G_B16_0 = L_32;
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			G_B16_3 = G_B14_2;
			G_B16_4 = G_B14_3;
			G_B16_5 = G_B14_4;
			G_B16_6 = G_B14_5;
			G_B16_7 = G_B14_6;
			goto IL_010b;
		}
	}
	{
		intptr_t L_34 = (intptr_t)RewardBasedVideoAdClient_RewardBasedVideoAdDidCompleteCallback_m1288895517_RuntimeMethod_var;
		GADURewardBasedVideoAdDidCompleteCallback_t2076181 * L_35 = (GADURewardBasedVideoAdDidCompleteCallback_t2076181 *)il2cpp_codegen_object_new(GADURewardBasedVideoAdDidCompleteCallback_t2076181_il2cpp_TypeInfo_var);
		GADURewardBasedVideoAdDidCompleteCallback__ctor_m3327279757(L_35, NULL, L_34, /*hidden argument*/NULL);
		((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache7_17(L_35);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
		G_B16_4 = G_B15_4;
		G_B16_5 = G_B15_5;
		G_B16_6 = G_B15_6;
		G_B16_7 = G_B15_7;
	}

IL_010b:
	{
		GADURewardBasedVideoAdDidCompleteCallback_t2076181 * L_36 = ((RewardBasedVideoAdClient_t745716004_StaticFields*)il2cpp_codegen_static_fields_for(RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache7_17();
		Externs_GADUSetRewardBasedVideoAdCallbacks_m3459035807(NULL /*static, unused*/, G_B16_7, G_B16_6, G_B16_5, G_B16_4, G_B16_3, G_B16_2, G_B16_1, G_B16_0, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::LoadAd(GoogleMobileAds.Api.AdRequest,System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_LoadAd_m3561262127 (RewardBasedVideoAdClient_t745716004 * __this, AdRequest_t1573687800 * ___request0, String_t* ___adUnitId1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		AdRequest_t1573687800 * L_0 = ___request0;
		intptr_t L_1 = Utils_BuildAdRequest_m293820848(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = RewardBasedVideoAdClient_get_RewardBasedVideoAdPtr_m3486981653(__this, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		String_t* L_4 = ___adUnitId1;
		Externs_GADURequestRewardBasedVideoAd_m1580751359(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		intptr_t L_5 = V_0;
		Externs_GADURelease_m2380050566(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::ShowRewardBasedVideoAd()
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_ShowRewardBasedVideoAd_m4276835224 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = RewardBasedVideoAdClient_get_RewardBasedVideoAdPtr_m3486981653(__this, /*hidden argument*/NULL);
		Externs_GADUShowRewardBasedVideoAd_m234759846(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::SetUserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_SetUserId_m645527422 (RewardBasedVideoAdClient_t745716004 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = RewardBasedVideoAdClient_get_RewardBasedVideoAdPtr_m3486981653(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___userId0;
		Externs_GADUSetRewardBasedVideoAdUserId_m2019373404(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GoogleMobileAds.iOS.RewardBasedVideoAdClient::IsLoaded()
extern "C" IL2CPP_METHOD_ATTR bool RewardBasedVideoAdClient_IsLoaded_m439142702 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = RewardBasedVideoAdClient_get_RewardBasedVideoAdPtr_m3486981653(__this, /*hidden argument*/NULL);
		bool L_1 = Externs_GADURewardBasedVideoAdReady_m3647491110(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String GoogleMobileAds.iOS.RewardBasedVideoAdClient::MediationAdapterClassName()
extern "C" IL2CPP_METHOD_ATTR String_t* RewardBasedVideoAdClient_MediationAdapterClassName_m4029671338 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = RewardBasedVideoAdClient_get_RewardBasedVideoAdPtr_m3486981653(__this, /*hidden argument*/NULL);
		intptr_t L_1 = Externs_GADUMediationAdapterClassNameForRewardedVideo_m2781009425(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = Utils_PtrToString_m1166713158(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::DestroyRewardedVideoAd()
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_DestroyRewardedVideoAd_m4144426805 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_DestroyRewardedVideoAd_m4144426805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardBasedVideoAdClient_set_RewardBasedVideoAdPtr_m3604158259(__this, (intptr_t)(0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::Dispose()
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_Dispose_m3896470207 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method)
{
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RewardBasedVideoAdClient_DestroyRewardedVideoAd_m4144426805(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_rewardBasedVideoAdClientPtr_1();
		GCHandle_t3351438187  L_1 = GCHandle_op_Explicit_m976572069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GCHandle_Free_m1457699368((&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::Finalize()
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_Finalize_m3284521675 (RewardBasedVideoAdClient_t745716004 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		RewardBasedVideoAdClient_Dispose_m3896470207(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidReceiveAdCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidReceiveAdCallback_m1892259112 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_RewardBasedVideoAdDidReceiveAdCallback_m1892259112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardBasedVideoAdClient_t745716004 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardBasedVideoAdClient0;
		RewardBasedVideoAdClient_t745716004 * L_1 = RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardBasedVideoAdClient_t745716004 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1515976428 * L_3 = L_2->get_OnAdLoaded_2();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardBasedVideoAdClient_t745716004 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1515976428 * L_5 = L_4->get_OnAdLoaded_2();
		RewardBasedVideoAdClient_t745716004 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_7 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_5);
		EventHandler_1_Invoke_m3837310126(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m3837310126_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_m829880647 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_RewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_m829880647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardBasedVideoAdClient_t745716004 * V_0 = NULL;
	AdFailedToLoadEventArgs_t2855961722 * V_1 = NULL;
	AdFailedToLoadEventArgs_t2855961722 * V_2 = NULL;
	{
		intptr_t L_0 = ___rewardBasedVideoAdClient0;
		RewardBasedVideoAdClient_t745716004 * L_1 = RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardBasedVideoAdClient_t745716004 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t780121155 * L_3 = L_2->get_OnAdFailedToLoad_3();
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		AdFailedToLoadEventArgs_t2855961722 * L_4 = (AdFailedToLoadEventArgs_t2855961722 *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_t2855961722_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m845251842(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		AdFailedToLoadEventArgs_t2855961722 * L_5 = V_2;
		String_t* L_6 = ___error1;
		NullCheck(L_5);
		AdFailedToLoadEventArgs_set_Message_m3939346791(L_5, L_6, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_t2855961722 * L_7 = V_2;
		V_1 = L_7;
		RewardBasedVideoAdClient_t745716004 * L_8 = V_0;
		NullCheck(L_8);
		EventHandler_1_t780121155 * L_9 = L_8->get_OnAdFailedToLoad_3();
		RewardBasedVideoAdClient_t745716004 * L_10 = V_0;
		AdFailedToLoadEventArgs_t2855961722 * L_11 = V_1;
		NullCheck(L_9);
		EventHandler_1_Invoke_m3162681867(L_9, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m3162681867_RuntimeMethod_var);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidOpenCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidOpenCallback_m141900546 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_RewardBasedVideoAdDidOpenCallback_m141900546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardBasedVideoAdClient_t745716004 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardBasedVideoAdClient0;
		RewardBasedVideoAdClient_t745716004 * L_1 = RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardBasedVideoAdClient_t745716004 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1515976428 * L_3 = L_2->get_OnAdOpening_4();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardBasedVideoAdClient_t745716004 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1515976428 * L_5 = L_4->get_OnAdOpening_4();
		RewardBasedVideoAdClient_t745716004 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_7 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_5);
		EventHandler_1_Invoke_m3837310126(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m3837310126_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidStartCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidStartCallback_m856913864 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_RewardBasedVideoAdDidStartCallback_m856913864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardBasedVideoAdClient_t745716004 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardBasedVideoAdClient0;
		RewardBasedVideoAdClient_t745716004 * L_1 = RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardBasedVideoAdClient_t745716004 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1515976428 * L_3 = L_2->get_OnAdStarted_5();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardBasedVideoAdClient_t745716004 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1515976428 * L_5 = L_4->get_OnAdStarted_5();
		RewardBasedVideoAdClient_t745716004 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_7 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_5);
		EventHandler_1_Invoke_m3837310126(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m3837310126_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidCloseCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidCloseCallback_m3525630988 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_RewardBasedVideoAdDidCloseCallback_m3525630988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardBasedVideoAdClient_t745716004 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardBasedVideoAdClient0;
		RewardBasedVideoAdClient_t745716004 * L_1 = RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardBasedVideoAdClient_t745716004 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1515976428 * L_3 = L_2->get_OnAdClosed_6();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardBasedVideoAdClient_t745716004 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1515976428 * L_5 = L_4->get_OnAdClosed_6();
		RewardBasedVideoAdClient_t745716004 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_7 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_5);
		EventHandler_1_Invoke_m3837310126(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m3837310126_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidRewardUserCallback(System.IntPtr,System.String,System.Double)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidRewardUserCallback_m226148102 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_RewardBasedVideoAdDidRewardUserCallback_m226148102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardBasedVideoAdClient_t745716004 * V_0 = NULL;
	Reward_t3704020935 * V_1 = NULL;
	Reward_t3704020935 * V_2 = NULL;
	{
		intptr_t L_0 = ___rewardBasedVideoAdClient0;
		RewardBasedVideoAdClient_t745716004 * L_1 = RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardBasedVideoAdClient_t745716004 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1628180368 * L_3 = L_2->get_OnAdRewarded_7();
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Reward_t3704020935 * L_4 = (Reward_t3704020935 *)il2cpp_codegen_object_new(Reward_t3704020935_il2cpp_TypeInfo_var);
		Reward__ctor_m184642892(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		Reward_t3704020935 * L_5 = V_2;
		String_t* L_6 = ___rewardType1;
		NullCheck(L_5);
		Reward_set_Type_m4069022543(L_5, L_6, /*hidden argument*/NULL);
		Reward_t3704020935 * L_7 = V_2;
		double L_8 = ___rewardAmount2;
		NullCheck(L_7);
		Reward_set_Amount_m3356887413(L_7, L_8, /*hidden argument*/NULL);
		Reward_t3704020935 * L_9 = V_2;
		V_1 = L_9;
		RewardBasedVideoAdClient_t745716004 * L_10 = V_0;
		NullCheck(L_10);
		EventHandler_1_t1628180368 * L_11 = L_10->get_OnAdRewarded_7();
		RewardBasedVideoAdClient_t745716004 * L_12 = V_0;
		Reward_t3704020935 * L_13 = V_1;
		NullCheck(L_11);
		EventHandler_1_Invoke_m198145918(L_11, L_12, L_13, /*hidden argument*/EventHandler_1_Invoke_m198145918_RuntimeMethod_var);
	}

IL_0035:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdWillLeaveApplicationCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdWillLeaveApplicationCallback_m3803009012 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_RewardBasedVideoAdWillLeaveApplicationCallback_m3803009012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardBasedVideoAdClient_t745716004 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardBasedVideoAdClient0;
		RewardBasedVideoAdClient_t745716004 * L_1 = RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardBasedVideoAdClient_t745716004 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1515976428 * L_3 = L_2->get_OnAdLeavingApplication_8();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardBasedVideoAdClient_t745716004 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1515976428 * L_5 = L_4->get_OnAdLeavingApplication_8();
		RewardBasedVideoAdClient_t745716004 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_7 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_5);
		EventHandler_1_Invoke_m3837310126(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m3837310126_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient::RewardBasedVideoAdDidCompleteCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardBasedVideoAdClient_RewardBasedVideoAdDidCompleteCallback_m1288895517 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_RewardBasedVideoAdDidCompleteCallback_m1288895517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardBasedVideoAdClient_t745716004 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardBasedVideoAdClient0;
		RewardBasedVideoAdClient_t745716004 * L_1 = RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardBasedVideoAdClient_t745716004 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1515976428 * L_3 = L_2->get_OnAdCompleted_9();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardBasedVideoAdClient_t745716004 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1515976428 * L_5 = L_4->get_OnAdCompleted_9();
		RewardBasedVideoAdClient_t745716004 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_7 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_5);
		EventHandler_1_Invoke_m3837310126(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m3837310126_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// GoogleMobileAds.iOS.RewardBasedVideoAdClient GoogleMobileAds.iOS.RewardBasedVideoAdClient::IntPtrToRewardBasedVideoClient(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RewardBasedVideoAdClient_t745716004 * RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardBasedVideoAdClient_IntPtrToRewardBasedVideoClient_m1238644713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = ___rewardBasedVideoAdClient0;
		GCHandle_t3351438187  L_1 = GCHandle_op_Explicit_m976572069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = GCHandle_get_Target_m1824973883((&V_0), /*hidden argument*/NULL);
		return ((RewardBasedVideoAdClient_t745716004 *)IsInstClass((RuntimeObject*)L_2, RewardBasedVideoAdClient_t745716004_il2cpp_TypeInfo_var));
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
extern "C"  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidCloseCallback_t623082069 (GADURewardBasedVideoAdDidCloseCallback_t623082069 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCloseCallback__ctor_m1596580095 (GADURewardBasedVideoAdDidCloseCallback_t623082069 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCloseCallback_Invoke_m997856259 (GADURewardBasedVideoAdDidCloseCallback_t623082069 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardBasedVideoAdDidCloseCallback_Invoke_m997856259((GADURewardBasedVideoAdDidCloseCallback_t623082069 *)__this->get_prev_9(), ___rewardBasedVideoAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidCloseCallback_BeginInvoke_m336859444 (GADURewardBasedVideoAdDidCloseCallback_t623082069 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardBasedVideoAdDidCloseCallback_BeginInvoke_m336859444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCloseCallback_EndInvoke_m822783961 (GADURewardBasedVideoAdDidCloseCallback_t623082069 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidCompleteCallback_t2076181 (GADURewardBasedVideoAdDidCompleteCallback_t2076181 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCompleteCallback__ctor_m3327279757 (GADURewardBasedVideoAdDidCompleteCallback_t2076181 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCompleteCallback_Invoke_m1968048401 (GADURewardBasedVideoAdDidCompleteCallback_t2076181 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardBasedVideoAdDidCompleteCallback_Invoke_m1968048401((GADURewardBasedVideoAdDidCompleteCallback_t2076181 *)__this->get_prev_9(), ___rewardBasedVideoAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidCompleteCallback_BeginInvoke_m433956347 (GADURewardBasedVideoAdDidCompleteCallback_t2076181 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardBasedVideoAdDidCompleteCallback_BeginInvoke_m433956347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCompleteCallback_EndInvoke_m3970296375 (GADURewardBasedVideoAdDidCompleteCallback_t2076181 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * __this, intptr_t ___rewardBasedVideoClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback__ctor_m983413226 (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_Invoke_m2012026873 (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * __this, intptr_t ___rewardBasedVideoClient0, String_t* ___error1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_Invoke_m2012026873((GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 *)__this->get_prev_9(), ___rewardBasedVideoClient0, ___error1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardBasedVideoClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardBasedVideoClient0, ___error1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardBasedVideoClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardBasedVideoClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m2459319857 (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * __this, intptr_t ___rewardBasedVideoClient0, String_t* ___error1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m2459319857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_EndInvoke_m3442597565 (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t3979086788 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidOpenCallback_t3638490629 (GADURewardBasedVideoAdDidOpenCallback_t3638490629 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidOpenCallback__ctor_m1232197325 (GADURewardBasedVideoAdDidOpenCallback_t3638490629 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidOpenCallback_Invoke_m950205132 (GADURewardBasedVideoAdDidOpenCallback_t3638490629 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardBasedVideoAdDidOpenCallback_Invoke_m950205132((GADURewardBasedVideoAdDidOpenCallback_t3638490629 *)__this->get_prev_9(), ___rewardBasedVideoAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidOpenCallback_BeginInvoke_m1633870105 (GADURewardBasedVideoAdDidOpenCallback_t3638490629 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardBasedVideoAdDidOpenCallback_BeginInvoke_m1633870105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidOpenCallback_EndInvoke_m2807468717 (GADURewardBasedVideoAdDidOpenCallback_t3638490629 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 (GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidReceiveAdCallback__ctor_m2160022995 (GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidReceiveAdCallback_Invoke_m2422874943 (GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardBasedVideoAdDidReceiveAdCallback_Invoke_m2422874943((GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 *)__this->get_prev_9(), ___rewardBasedVideoAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidReceiveAdCallback_BeginInvoke_m1763996859 (GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardBasedVideoAdDidReceiveAdCallback_BeginInvoke_m1763996859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidReceiveAdCallback_EndInvoke_m3624076102 (GADURewardBasedVideoAdDidReceiveAdCallback_t462486315 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidRewardCallback_t990863796 (GADURewardBasedVideoAdDidRewardCallback_t990863796 * __this, intptr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, double);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___rewardType1' to native representation
	char* ____rewardType1_marshaled = NULL;
	____rewardType1_marshaled = il2cpp_codegen_marshal_string(___rewardType1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0, ____rewardType1_marshaled, ___rewardAmount2);

	// Marshaling cleanup of parameter '___rewardType1' native representation
	il2cpp_codegen_marshal_free(____rewardType1_marshaled);
	____rewardType1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidRewardCallback__ctor_m2712323043 (GADURewardBasedVideoAdDidRewardCallback_t990863796 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::Invoke(System.IntPtr,System.String,System.Double)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidRewardCallback_Invoke_m2425462797 (GADURewardBasedVideoAdDidRewardCallback_t990863796 * __this, intptr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardBasedVideoAdDidRewardCallback_Invoke_m2425462797((GADURewardBasedVideoAdDidRewardCallback_t990863796 *)__this->get_prev_9(), ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2);
					else
						VirtActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::BeginInvoke(System.IntPtr,System.String,System.Double,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidRewardCallback_BeginInvoke_m2575968676 (GADURewardBasedVideoAdDidRewardCallback_t990863796 * __this, intptr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardBasedVideoAdDidRewardCallback_BeginInvoke_m2575968676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	__d_args[1] = ___rewardType1;
	__d_args[2] = Box(Double_t594665363_il2cpp_TypeInfo_var, &___rewardAmount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidRewardCallback_EndInvoke_m1385610743 (GADURewardBasedVideoAdDidRewardCallback_t990863796 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidStartCallback_t2792276088 (GADURewardBasedVideoAdDidStartCallback_t2792276088 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidStartCallback__ctor_m968833380 (GADURewardBasedVideoAdDidStartCallback_t2792276088 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidStartCallback_Invoke_m3297920828 (GADURewardBasedVideoAdDidStartCallback_t2792276088 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardBasedVideoAdDidStartCallback_Invoke_m3297920828((GADURewardBasedVideoAdDidStartCallback_t2792276088 *)__this->get_prev_9(), ___rewardBasedVideoAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidStartCallback_BeginInvoke_m1266548090 (GADURewardBasedVideoAdDidStartCallback_t2792276088 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardBasedVideoAdDidStartCallback_BeginInvoke_m1266548090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidStartCallback_EndInvoke_m2704389833 (GADURewardBasedVideoAdDidStartCallback_t2792276088 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 (GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdWillLeaveApplicationCallback__ctor_m3356045568 (GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdWillLeaveApplicationCallback_Invoke_m3916786250 (GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardBasedVideoAdWillLeaveApplicationCallback_Invoke_m3916786250((GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 *)__this->get_prev_9(), ___rewardBasedVideoAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdWillLeaveApplicationCallback_BeginInvoke_m2152875379 (GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardBasedVideoAdWillLeaveApplicationCallback_BeginInvoke_m2152875379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdWillLeaveApplicationCallback_EndInvoke_m1461152984 (GADURewardBasedVideoAdWillLeaveApplicationCallback_t3217042531 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardedAdClient_RewardedAdDidReceiveAdCallback_m1737487716(intptr_t ___rewardedAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardedAdClient_RewardedAdDidReceiveAdCallback_m1737487716(NULL, ___rewardedAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardedAdClient_RewardedAdDidFailToReceiveAdWithErrorCallback_m394272376(intptr_t ___rewardedAdClient0, char* ___error1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___error1' to managed representation
	String_t* ____error1_unmarshaled = NULL;
	____error1_unmarshaled = il2cpp_codegen_marshal_string_result(___error1);

	// Managed method invocation
	RewardedAdClient_RewardedAdDidFailToReceiveAdWithErrorCallback_m394272376(NULL, ___rewardedAdClient0, ____error1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardedAdClient_RewardedAdDidFailToShowAdWithErrorCallback_m3597122014(intptr_t ___rewardedAdClient0, char* ___error1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___error1' to managed representation
	String_t* ____error1_unmarshaled = NULL;
	____error1_unmarshaled = il2cpp_codegen_marshal_string_result(___error1);

	// Managed method invocation
	RewardedAdClient_RewardedAdDidFailToShowAdWithErrorCallback_m3597122014(NULL, ___rewardedAdClient0, ____error1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardedAdClient_RewardedAdDidOpenCallback_m2709578822(intptr_t ___rewardedAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardedAdClient_RewardedAdDidOpenCallback_m2709578822(NULL, ___rewardedAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardedAdClient_RewardedAdDidCloseCallback_m29586772(intptr_t ___rewardedAdClient0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RewardedAdClient_RewardedAdDidCloseCallback_m29586772(NULL, ___rewardedAdClient0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardedAdClient_RewardedAdUserDidEarnRewardCallback_m478552977(intptr_t ___rewardedAdClient0, char* ___rewardType1, double ___rewardAmount2)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___rewardType1' to managed representation
	String_t* ____rewardType1_unmarshaled = NULL;
	____rewardType1_unmarshaled = il2cpp_codegen_marshal_string_result(___rewardType1);

	// Managed method invocation
	RewardedAdClient_RewardedAdUserDidEarnRewardCallback_m478552977(NULL, ___rewardedAdClient0, ____rewardType1_unmarshaled, ___rewardAmount2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RewardedAdClient_RewardedAdPaidEventCallback_m3158905489(intptr_t ___rewardedAdClient0, int32_t ___precision1, int64_t ___value2, char* ___currencyCode3)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___currencyCode3' to managed representation
	String_t* ____currencyCode3_unmarshaled = NULL;
	____currencyCode3_unmarshaled = il2cpp_codegen_marshal_string_result(___currencyCode3);

	// Managed method invocation
	RewardedAdClient_RewardedAdPaidEventCallback_m3158905489(NULL, ___rewardedAdClient0, ___precision1, ___value2, ____currencyCode3_unmarshaled, NULL);

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient__ctor_m2257483965 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_add_OnAdLoaded_m3978882217 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_add_OnAdLoaded_m3978882217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLoaded_2();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_remove_OnAdLoaded_m219583257 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_remove_OnAdLoaded_m219583257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdLoaded_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdLoaded_2();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_add_OnAdFailedToLoad_m177930082 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t2412906204 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_add_OnAdFailedToLoad_m177930082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2412906204 * V_0 = NULL;
	EventHandler_1_t2412906204 * V_1 = NULL;
	{
		EventHandler_1_t2412906204 * L_0 = __this->get_OnAdFailedToLoad_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2412906204 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2412906204 ** L_2 = __this->get_address_of_OnAdFailedToLoad_3();
		EventHandler_1_t2412906204 * L_3 = V_1;
		EventHandler_1_t2412906204 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2412906204 * L_6 = V_0;
		EventHandler_1_t2412906204 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2412906204 *>(L_2, ((EventHandler_1_t2412906204 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2412906204_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2412906204 * L_8 = V_0;
		EventHandler_1_t2412906204 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2412906204 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2412906204 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_remove_OnAdFailedToLoad_m976326327 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t2412906204 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_remove_OnAdFailedToLoad_m976326327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2412906204 * V_0 = NULL;
	EventHandler_1_t2412906204 * V_1 = NULL;
	{
		EventHandler_1_t2412906204 * L_0 = __this->get_OnAdFailedToLoad_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2412906204 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2412906204 ** L_2 = __this->get_address_of_OnAdFailedToLoad_3();
		EventHandler_1_t2412906204 * L_3 = V_1;
		EventHandler_1_t2412906204 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2412906204 * L_6 = V_0;
		EventHandler_1_t2412906204 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2412906204 *>(L_2, ((EventHandler_1_t2412906204 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2412906204_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2412906204 * L_8 = V_0;
		EventHandler_1_t2412906204 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2412906204 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2412906204 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_add_OnAdFailedToShow_m4115919787 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t2412906204 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_add_OnAdFailedToShow_m4115919787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2412906204 * V_0 = NULL;
	EventHandler_1_t2412906204 * V_1 = NULL;
	{
		EventHandler_1_t2412906204 * L_0 = __this->get_OnAdFailedToShow_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2412906204 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2412906204 ** L_2 = __this->get_address_of_OnAdFailedToShow_4();
		EventHandler_1_t2412906204 * L_3 = V_1;
		EventHandler_1_t2412906204 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2412906204 * L_6 = V_0;
		EventHandler_1_t2412906204 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2412906204 *>(L_2, ((EventHandler_1_t2412906204 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2412906204_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2412906204 * L_8 = V_0;
		EventHandler_1_t2412906204 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2412906204 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2412906204 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::remove_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_remove_OnAdFailedToShow_m3394898885 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t2412906204 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_remove_OnAdFailedToShow_m3394898885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2412906204 * V_0 = NULL;
	EventHandler_1_t2412906204 * V_1 = NULL;
	{
		EventHandler_1_t2412906204 * L_0 = __this->get_OnAdFailedToShow_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2412906204 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2412906204 ** L_2 = __this->get_address_of_OnAdFailedToShow_4();
		EventHandler_1_t2412906204 * L_3 = V_1;
		EventHandler_1_t2412906204 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2412906204 * L_6 = V_0;
		EventHandler_1_t2412906204 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2412906204 *>(L_2, ((EventHandler_1_t2412906204 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2412906204_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2412906204 * L_8 = V_0;
		EventHandler_1_t2412906204 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2412906204 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2412906204 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_add_OnAdOpening_m3774170023 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_add_OnAdOpening_m3774170023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_remove_OnAdOpening_m742956261 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_remove_OnAdOpening_m742956261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::add_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_add_OnAdStarted_m3500009786 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_add_OnAdStarted_m3500009786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdStarted_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdStarted_6();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::remove_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_remove_OnAdStarted_m2773331646 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_remove_OnAdStarted_m2773331646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdStarted_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdStarted_6();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_add_OnAdClosed_m4133592020 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_add_OnAdClosed_m4133592020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdClosed_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdClosed_7();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_remove_OnAdClosed_m2626859137 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_remove_OnAdClosed_m2626859137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_OnAdClosed_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_OnAdClosed_7();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>(L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_add_OnUserEarnedReward_m3496526116 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t1628180368 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_add_OnUserEarnedReward_m3496526116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1628180368 * V_0 = NULL;
	EventHandler_1_t1628180368 * V_1 = NULL;
	{
		EventHandler_1_t1628180368 * L_0 = __this->get_OnUserEarnedReward_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1628180368 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1628180368 ** L_2 = __this->get_address_of_OnUserEarnedReward_8();
		EventHandler_1_t1628180368 * L_3 = V_1;
		EventHandler_1_t1628180368 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1628180368 * L_6 = V_0;
		EventHandler_1_t1628180368 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1628180368 *>(L_2, ((EventHandler_1_t1628180368 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1628180368_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1628180368 * L_8 = V_0;
		EventHandler_1_t1628180368 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1628180368 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1628180368 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::remove_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_remove_OnUserEarnedReward_m3959097112 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t1628180368 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_remove_OnUserEarnedReward_m3959097112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1628180368 * V_0 = NULL;
	EventHandler_1_t1628180368 * V_1 = NULL;
	{
		EventHandler_1_t1628180368 * L_0 = __this->get_OnUserEarnedReward_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1628180368 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1628180368 ** L_2 = __this->get_address_of_OnUserEarnedReward_8();
		EventHandler_1_t1628180368 * L_3 = V_1;
		EventHandler_1_t1628180368 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1628180368 * L_6 = V_0;
		EventHandler_1_t1628180368 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1628180368 *>(L_2, ((EventHandler_1_t1628180368 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1628180368_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1628180368 * L_8 = V_0;
		EventHandler_1_t1628180368 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1628180368 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1628180368 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_add_OnPaidEvent_m1570589511 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t2593147193 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_add_OnPaidEvent_m1570589511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2593147193 * V_0 = NULL;
	EventHandler_1_t2593147193 * V_1 = NULL;
	{
		EventHandler_1_t2593147193 * L_0 = __this->get_OnPaidEvent_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2593147193 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2593147193 ** L_2 = __this->get_address_of_OnPaidEvent_9();
		EventHandler_1_t2593147193 * L_3 = V_1;
		EventHandler_1_t2593147193 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2593147193 * L_6 = V_0;
		EventHandler_1_t2593147193 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2593147193 *>(L_2, ((EventHandler_1_t2593147193 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2593147193_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2593147193 * L_8 = V_0;
		EventHandler_1_t2593147193 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2593147193 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2593147193 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_remove_OnPaidEvent_m2297833985 (RewardedAdClient_t1756845177 * __this, EventHandler_1_t2593147193 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_remove_OnPaidEvent_m2297833985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2593147193 * V_0 = NULL;
	EventHandler_1_t2593147193 * V_1 = NULL;
	{
		EventHandler_1_t2593147193 * L_0 = __this->get_OnPaidEvent_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2593147193 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2593147193 ** L_2 = __this->get_address_of_OnPaidEvent_9();
		EventHandler_1_t2593147193 * L_3 = V_1;
		EventHandler_1_t2593147193 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2593147193 * L_6 = V_0;
		EventHandler_1_t2593147193 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2593147193 *>(L_2, ((EventHandler_1_t2593147193 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2593147193_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2593147193 * L_8 = V_0;
		EventHandler_1_t2593147193 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2593147193 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2593147193 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.IntPtr GoogleMobileAds.iOS.RewardedAdClient::get_RewardedAdPtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t RewardedAdClient_get_RewardedAdPtr_m293379226 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_rewardedAdPtr_0();
		return L_0;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::set_RewardedAdPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_set_RewardedAdPtr_m416070414 (RewardedAdClient_t1756845177 * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_rewardedAdPtr_0();
		Externs_GADURelease_m2380050566(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___value0;
		__this->set_rewardedAdPtr_0(L_1);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::CreateRewardedAd(System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_CreateRewardedAd_m622719777 (RewardedAdClient_t1756845177 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_CreateRewardedAd_m622719777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B4_0 = NULL;
	intptr_t G_B4_1;
	memset(&G_B4_1, 0, sizeof(G_B4_1));
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B3_0 = NULL;
	intptr_t G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * G_B6_0 = NULL;
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B6_1 = NULL;
	intptr_t G_B6_2;
	memset(&G_B6_2, 0, sizeof(G_B6_2));
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * G_B5_0 = NULL;
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B5_1 = NULL;
	intptr_t G_B5_2;
	memset(&G_B5_2, 0, sizeof(G_B5_2));
	GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * G_B8_0 = NULL;
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * G_B8_1 = NULL;
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B8_2 = NULL;
	intptr_t G_B8_3;
	memset(&G_B8_3, 0, sizeof(G_B8_3));
	GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * G_B7_0 = NULL;
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * G_B7_1 = NULL;
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B7_2 = NULL;
	intptr_t G_B7_3;
	memset(&G_B7_3, 0, sizeof(G_B7_3));
	GADURewardedAdDidOpenCallback_t4091248959 * G_B10_0 = NULL;
	GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * G_B10_1 = NULL;
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * G_B10_2 = NULL;
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B10_3 = NULL;
	intptr_t G_B10_4;
	memset(&G_B10_4, 0, sizeof(G_B10_4));
	GADURewardedAdDidOpenCallback_t4091248959 * G_B9_0 = NULL;
	GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * G_B9_1 = NULL;
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * G_B9_2 = NULL;
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B9_3 = NULL;
	intptr_t G_B9_4;
	memset(&G_B9_4, 0, sizeof(G_B9_4));
	GADURewardedAdDidCloseCallback_t2874328472 * G_B12_0 = NULL;
	GADURewardedAdDidOpenCallback_t4091248959 * G_B12_1 = NULL;
	GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * G_B12_2 = NULL;
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * G_B12_3 = NULL;
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B12_4 = NULL;
	intptr_t G_B12_5;
	memset(&G_B12_5, 0, sizeof(G_B12_5));
	GADURewardedAdDidCloseCallback_t2874328472 * G_B11_0 = NULL;
	GADURewardedAdDidOpenCallback_t4091248959 * G_B11_1 = NULL;
	GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * G_B11_2 = NULL;
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * G_B11_3 = NULL;
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B11_4 = NULL;
	intptr_t G_B11_5;
	memset(&G_B11_5, 0, sizeof(G_B11_5));
	GADUUserEarnedRewardCallback_t224874987 * G_B14_0 = NULL;
	GADURewardedAdDidCloseCallback_t2874328472 * G_B14_1 = NULL;
	GADURewardedAdDidOpenCallback_t4091248959 * G_B14_2 = NULL;
	GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * G_B14_3 = NULL;
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * G_B14_4 = NULL;
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B14_5 = NULL;
	intptr_t G_B14_6;
	memset(&G_B14_6, 0, sizeof(G_B14_6));
	GADUUserEarnedRewardCallback_t224874987 * G_B13_0 = NULL;
	GADURewardedAdDidCloseCallback_t2874328472 * G_B13_1 = NULL;
	GADURewardedAdDidOpenCallback_t4091248959 * G_B13_2 = NULL;
	GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * G_B13_3 = NULL;
	GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * G_B13_4 = NULL;
	GADURewardedAdDidReceiveAdCallback_t3678103445 * G_B13_5 = NULL;
	intptr_t G_B13_6;
	memset(&G_B13_6, 0, sizeof(G_B13_6));
	{
		GCHandle_t3351438187  L_0 = GCHandle_Alloc_m3053200191(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		intptr_t L_1 = GCHandle_op_Explicit_m127498741(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_rewardedAdClientPtr_1(L_1);
		intptr_t L_2 = __this->get_rewardedAdClientPtr_1();
		String_t* L_3 = ___adUnitId0;
		intptr_t L_4 = Externs_GADUCreateRewardedAd_m2771365624(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		RewardedAdClient_set_RewardedAdPtr_m416070414(__this, L_4, /*hidden argument*/NULL);
		intptr_t L_5 = RewardedAdClient_get_RewardedAdPtr_m293379226(__this, /*hidden argument*/NULL);
		GADURewardedAdDidReceiveAdCallback_t3678103445 * L_6 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_10();
		G_B1_0 = L_5;
		if (L_6)
		{
			G_B2_0 = L_5;
			goto IL_0041;
		}
	}
	{
		intptr_t L_7 = (intptr_t)RewardedAdClient_RewardedAdDidReceiveAdCallback_m1737487716_RuntimeMethod_var;
		GADURewardedAdDidReceiveAdCallback_t3678103445 * L_8 = (GADURewardedAdDidReceiveAdCallback_t3678103445 *)il2cpp_codegen_object_new(GADURewardedAdDidReceiveAdCallback_t3678103445_il2cpp_TypeInfo_var);
		GADURewardedAdDidReceiveAdCallback__ctor_m885661216(L_8, NULL, L_7, /*hidden argument*/NULL);
		((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_10(L_8);
		G_B2_0 = G_B1_0;
	}

IL_0041:
	{
		GADURewardedAdDidReceiveAdCallback_t3678103445 * L_9 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_10();
		GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * L_10 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_11();
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
		if (L_10)
		{
			G_B4_0 = L_9;
			G_B4_1 = G_B2_0;
			goto IL_005e;
		}
	}
	{
		intptr_t L_11 = (intptr_t)RewardedAdClient_RewardedAdDidFailToReceiveAdWithErrorCallback_m394272376_RuntimeMethod_var;
		GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * L_12 = (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 *)il2cpp_codegen_object_new(GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367_il2cpp_TypeInfo_var);
		GADURewardedAdDidFailToReceiveAdWithErrorCallback__ctor_m352766581(L_12, NULL, L_11, /*hidden argument*/NULL);
		((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_11(L_12);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_005e:
	{
		GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * L_13 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_11();
		GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * L_14 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_12();
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		if (L_14)
		{
			G_B6_0 = L_13;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			goto IL_007b;
		}
	}
	{
		intptr_t L_15 = (intptr_t)RewardedAdClient_RewardedAdDidFailToShowAdWithErrorCallback_m3597122014_RuntimeMethod_var;
		GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * L_16 = (GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 *)il2cpp_codegen_object_new(GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855_il2cpp_TypeInfo_var);
		GADURewardedAdDidFailToShowAdWithErrorCallback__ctor_m3557311141(L_16, NULL, L_15, /*hidden argument*/NULL);
		((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_12(L_16);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_007b:
	{
		GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * L_17 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_12();
		GADURewardedAdDidOpenCallback_t4091248959 * L_18 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_13();
		G_B7_0 = L_17;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		if (L_18)
		{
			G_B8_0 = L_17;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			G_B8_3 = G_B6_2;
			goto IL_0098;
		}
	}
	{
		intptr_t L_19 = (intptr_t)RewardedAdClient_RewardedAdDidOpenCallback_m2709578822_RuntimeMethod_var;
		GADURewardedAdDidOpenCallback_t4091248959 * L_20 = (GADURewardedAdDidOpenCallback_t4091248959 *)il2cpp_codegen_object_new(GADURewardedAdDidOpenCallback_t4091248959_il2cpp_TypeInfo_var);
		GADURewardedAdDidOpenCallback__ctor_m3495398227(L_20, NULL, L_19, /*hidden argument*/NULL);
		((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_13(L_20);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0098:
	{
		GADURewardedAdDidOpenCallback_t4091248959 * L_21 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_13();
		GADURewardedAdDidCloseCallback_t2874328472 * L_22 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_14();
		G_B9_0 = L_21;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
		if (L_22)
		{
			G_B10_0 = L_21;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			G_B10_3 = G_B8_2;
			G_B10_4 = G_B8_3;
			goto IL_00b5;
		}
	}
	{
		intptr_t L_23 = (intptr_t)RewardedAdClient_RewardedAdDidCloseCallback_m29586772_RuntimeMethod_var;
		GADURewardedAdDidCloseCallback_t2874328472 * L_24 = (GADURewardedAdDidCloseCallback_t2874328472 *)il2cpp_codegen_object_new(GADURewardedAdDidCloseCallback_t2874328472_il2cpp_TypeInfo_var);
		GADURewardedAdDidCloseCallback__ctor_m2458889410(L_24, NULL, L_23, /*hidden argument*/NULL);
		((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache4_14(L_24);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
	}

IL_00b5:
	{
		GADURewardedAdDidCloseCallback_t2874328472 * L_25 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_14();
		GADUUserEarnedRewardCallback_t224874987 * L_26 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache5_15();
		G_B11_0 = L_25;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
		G_B11_5 = G_B10_4;
		if (L_26)
		{
			G_B12_0 = L_25;
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			G_B12_3 = G_B10_2;
			G_B12_4 = G_B10_3;
			G_B12_5 = G_B10_4;
			goto IL_00d2;
		}
	}
	{
		intptr_t L_27 = (intptr_t)RewardedAdClient_RewardedAdUserDidEarnRewardCallback_m478552977_RuntimeMethod_var;
		GADUUserEarnedRewardCallback_t224874987 * L_28 = (GADUUserEarnedRewardCallback_t224874987 *)il2cpp_codegen_object_new(GADUUserEarnedRewardCallback_t224874987_il2cpp_TypeInfo_var);
		GADUUserEarnedRewardCallback__ctor_m2745036547(L_28, NULL, L_27, /*hidden argument*/NULL);
		((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache5_15(L_28);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
		G_B12_4 = G_B11_4;
		G_B12_5 = G_B11_5;
	}

IL_00d2:
	{
		GADUUserEarnedRewardCallback_t224874987 * L_29 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache5_15();
		GADURewardedAdPaidEventCallback_t3617339775 * L_30 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache6_16();
		G_B13_0 = L_29;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		G_B13_4 = G_B12_3;
		G_B13_5 = G_B12_4;
		G_B13_6 = G_B12_5;
		if (L_30)
		{
			G_B14_0 = L_29;
			G_B14_1 = G_B12_0;
			G_B14_2 = G_B12_1;
			G_B14_3 = G_B12_2;
			G_B14_4 = G_B12_3;
			G_B14_5 = G_B12_4;
			G_B14_6 = G_B12_5;
			goto IL_00ef;
		}
	}
	{
		intptr_t L_31 = (intptr_t)RewardedAdClient_RewardedAdPaidEventCallback_m3158905489_RuntimeMethod_var;
		GADURewardedAdPaidEventCallback_t3617339775 * L_32 = (GADURewardedAdPaidEventCallback_t3617339775 *)il2cpp_codegen_object_new(GADURewardedAdPaidEventCallback_t3617339775_il2cpp_TypeInfo_var);
		GADURewardedAdPaidEventCallback__ctor_m2777055707(L_32, NULL, L_31, /*hidden argument*/NULL);
		((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache6_16(L_32);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		G_B14_4 = G_B13_4;
		G_B14_5 = G_B13_5;
		G_B14_6 = G_B13_6;
	}

IL_00ef:
	{
		GADURewardedAdPaidEventCallback_t3617339775 * L_33 = ((RewardedAdClient_t1756845177_StaticFields*)il2cpp_codegen_static_fields_for(RewardedAdClient_t1756845177_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache6_16();
		Externs_GADUSetRewardedAdCallbacks_m1842440298(NULL /*static, unused*/, G_B14_6, G_B14_5, G_B14_4, G_B14_3, G_B14_2, G_B14_1, G_B14_0, L_33, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_LoadAd_m3336585455 (RewardedAdClient_t1756845177 * __this, AdRequest_t1573687800 * ___request0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		AdRequest_t1573687800 * L_0 = ___request0;
		intptr_t L_1 = Utils_BuildAdRequest_m293820848(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = RewardedAdClient_get_RewardedAdPtr_m293379226(__this, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		Externs_GADURequestRewardedAd_m2466116203(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = V_0;
		Externs_GADURelease_m2380050566(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::Show()
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_Show_m3542110985 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = RewardedAdClient_get_RewardedAdPtr_m293379226(__this, /*hidden argument*/NULL);
		Externs_GADUShowRewardedAd_m1569304222(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_SetServerSideVerificationOptions_m2428667041 (RewardedAdClient_t1756845177 * __this, ServerSideVerificationOptions_t4071074516 * ___serverSideVerificationOptions0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ServerSideVerificationOptions_t4071074516 * L_0 = ___serverSideVerificationOptions0;
		intptr_t L_1 = Utils_BuildServerSideVerificationOptions_m3905722713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = RewardedAdClient_get_RewardedAdPtr_m293379226(__this, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		Externs_GADURewardedAdSetServerSideVerificationOptions_m1857564689(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = V_0;
		Externs_GADURelease_m2380050566(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GoogleMobileAds.iOS.RewardedAdClient::IsLoaded()
extern "C" IL2CPP_METHOD_ATTR bool RewardedAdClient_IsLoaded_m3882401114 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = RewardedAdClient_get_RewardedAdPtr_m293379226(__this, /*hidden argument*/NULL);
		bool L_1 = Externs_GADURewardedAdReady_m2237724168(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GoogleMobileAds.Api.Reward GoogleMobileAds.iOS.RewardedAdClient::GetRewardItem()
extern "C" IL2CPP_METHOD_ATTR Reward_t3704020935 * RewardedAdClient_GetRewardItem_m4220804077 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_GetRewardItem_m4220804077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	Reward_t3704020935 * V_2 = NULL;
	{
		intptr_t L_0 = RewardedAdClient_get_RewardedAdPtr_m293379226(__this, /*hidden argument*/NULL);
		String_t* L_1 = Externs_GADURewardedAdGetRewardType_m411225125(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = RewardedAdClient_get_RewardedAdPtr_m293379226(__this, /*hidden argument*/NULL);
		double L_3 = Externs_GADURewardedAdGetRewardAmount_m986135042(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Reward_t3704020935 * L_4 = (Reward_t3704020935 *)il2cpp_codegen_object_new(Reward_t3704020935_il2cpp_TypeInfo_var);
		Reward__ctor_m184642892(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		Reward_t3704020935 * L_5 = V_2;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		Reward_set_Type_m4069022543(L_5, L_6, /*hidden argument*/NULL);
		Reward_t3704020935 * L_7 = V_2;
		double L_8 = V_1;
		NullCheck(L_7);
		Reward_set_Amount_m3356887413(L_7, L_8, /*hidden argument*/NULL);
		Reward_t3704020935 * L_9 = V_2;
		return L_9;
	}
}
// System.String GoogleMobileAds.iOS.RewardedAdClient::MediationAdapterClassName()
extern "C" IL2CPP_METHOD_ATTR String_t* RewardedAdClient_MediationAdapterClassName_m3066739452 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = RewardedAdClient_get_RewardedAdPtr_m293379226(__this, /*hidden argument*/NULL);
		intptr_t L_1 = Externs_GADUMediationAdapterClassNameForRewardedAd_m4194593350(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = Utils_PtrToString_m1166713158(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::DestroyRewardedAd()
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_DestroyRewardedAd_m1401785117 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_DestroyRewardedAd_m1401785117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RewardedAdClient_set_RewardedAdPtr_m416070414(__this, (intptr_t)(0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::Dispose()
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_Dispose_m888037648 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method)
{
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RewardedAdClient_DestroyRewardedAd_m1401785117(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_rewardedAdClientPtr_1();
		GCHandle_t3351438187  L_1 = GCHandle_op_Explicit_m976572069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GCHandle_Free_m1457699368((&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::Finalize()
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_Finalize_m3168616008 (RewardedAdClient_t1756845177 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		RewardedAdClient_Dispose_m888037648(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdDidReceiveAdCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdDidReceiveAdCallback_m1737487716 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_RewardedAdDidReceiveAdCallback_m1737487716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardedAdClient_t1756845177 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardedAdClient0;
		RewardedAdClient_t1756845177 * L_1 = RewardedAdClient_IntPtrToRewardedAdClient_m789117288(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardedAdClient_t1756845177 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1515976428 * L_3 = L_2->get_OnAdLoaded_2();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardedAdClient_t1756845177 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1515976428 * L_5 = L_4->get_OnAdLoaded_2();
		RewardedAdClient_t1756845177 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_7 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_5);
		EventHandler_1_Invoke_m3837310126(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m3837310126_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdDidFailToReceiveAdWithErrorCallback_m394272376 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_RewardedAdDidFailToReceiveAdWithErrorCallback_m394272376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardedAdClient_t1756845177 * V_0 = NULL;
	AdErrorEventArgs_t193779475 * V_1 = NULL;
	AdErrorEventArgs_t193779475 * V_2 = NULL;
	{
		intptr_t L_0 = ___rewardedAdClient0;
		RewardedAdClient_t1756845177 * L_1 = RewardedAdClient_IntPtrToRewardedAdClient_m789117288(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardedAdClient_t1756845177 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t2412906204 * L_3 = L_2->get_OnAdFailedToLoad_3();
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		AdErrorEventArgs_t193779475 * L_4 = (AdErrorEventArgs_t193779475 *)il2cpp_codegen_object_new(AdErrorEventArgs_t193779475_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_m2112891314(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		AdErrorEventArgs_t193779475 * L_5 = V_2;
		String_t* L_6 = ___error1;
		NullCheck(L_5);
		AdErrorEventArgs_set_Message_m1471932436(L_5, L_6, /*hidden argument*/NULL);
		AdErrorEventArgs_t193779475 * L_7 = V_2;
		V_1 = L_7;
		RewardedAdClient_t1756845177 * L_8 = V_0;
		NullCheck(L_8);
		EventHandler_1_t2412906204 * L_9 = L_8->get_OnAdFailedToLoad_3();
		RewardedAdClient_t1756845177 * L_10 = V_0;
		AdErrorEventArgs_t193779475 * L_11 = V_1;
		NullCheck(L_9);
		EventHandler_1_Invoke_m121066725(L_9, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m121066725_RuntimeMethod_var);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdDidFailToShowAdWithErrorCallback(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdDidFailToShowAdWithErrorCallback_m3597122014 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_RewardedAdDidFailToShowAdWithErrorCallback_m3597122014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardedAdClient_t1756845177 * V_0 = NULL;
	AdErrorEventArgs_t193779475 * V_1 = NULL;
	AdErrorEventArgs_t193779475 * V_2 = NULL;
	{
		intptr_t L_0 = ___rewardedAdClient0;
		RewardedAdClient_t1756845177 * L_1 = RewardedAdClient_IntPtrToRewardedAdClient_m789117288(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardedAdClient_t1756845177 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t2412906204 * L_3 = L_2->get_OnAdFailedToShow_4();
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		AdErrorEventArgs_t193779475 * L_4 = (AdErrorEventArgs_t193779475 *)il2cpp_codegen_object_new(AdErrorEventArgs_t193779475_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_m2112891314(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		AdErrorEventArgs_t193779475 * L_5 = V_2;
		String_t* L_6 = ___error1;
		NullCheck(L_5);
		AdErrorEventArgs_set_Message_m1471932436(L_5, L_6, /*hidden argument*/NULL);
		AdErrorEventArgs_t193779475 * L_7 = V_2;
		V_1 = L_7;
		RewardedAdClient_t1756845177 * L_8 = V_0;
		NullCheck(L_8);
		EventHandler_1_t2412906204 * L_9 = L_8->get_OnAdFailedToShow_4();
		RewardedAdClient_t1756845177 * L_10 = V_0;
		AdErrorEventArgs_t193779475 * L_11 = V_1;
		NullCheck(L_9);
		EventHandler_1_Invoke_m121066725(L_9, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m121066725_RuntimeMethod_var);
	}

IL_002e:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdDidOpenCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdDidOpenCallback_m2709578822 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_RewardedAdDidOpenCallback_m2709578822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardedAdClient_t1756845177 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardedAdClient0;
		RewardedAdClient_t1756845177 * L_1 = RewardedAdClient_IntPtrToRewardedAdClient_m789117288(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardedAdClient_t1756845177 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1515976428 * L_3 = L_2->get_OnAdOpening_5();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardedAdClient_t1756845177 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1515976428 * L_5 = L_4->get_OnAdOpening_5();
		RewardedAdClient_t1756845177 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_7 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_5);
		EventHandler_1_Invoke_m3837310126(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m3837310126_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdDidCloseCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdDidCloseCallback_m29586772 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_RewardedAdDidCloseCallback_m29586772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardedAdClient_t1756845177 * V_0 = NULL;
	{
		intptr_t L_0 = ___rewardedAdClient0;
		RewardedAdClient_t1756845177 * L_1 = RewardedAdClient_IntPtrToRewardedAdClient_m789117288(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardedAdClient_t1756845177 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1515976428 * L_3 = L_2->get_OnAdClosed_7();
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RewardedAdClient_t1756845177 * L_4 = V_0;
		NullCheck(L_4);
		EventHandler_1_t1515976428 * L_5 = L_4->get_OnAdClosed_7();
		RewardedAdClient_t1756845177 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_7 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_5);
		EventHandler_1_Invoke_m3837310126(L_5, L_6, L_7, /*hidden argument*/EventHandler_1_Invoke_m3837310126_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdUserDidEarnRewardCallback(System.IntPtr,System.String,System.Double)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdUserDidEarnRewardCallback_m478552977 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_RewardedAdUserDidEarnRewardCallback_m478552977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardedAdClient_t1756845177 * V_0 = NULL;
	Reward_t3704020935 * V_1 = NULL;
	Reward_t3704020935 * V_2 = NULL;
	{
		intptr_t L_0 = ___rewardedAdClient0;
		RewardedAdClient_t1756845177 * L_1 = RewardedAdClient_IntPtrToRewardedAdClient_m789117288(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardedAdClient_t1756845177 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t1628180368 * L_3 = L_2->get_OnUserEarnedReward_8();
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Reward_t3704020935 * L_4 = (Reward_t3704020935 *)il2cpp_codegen_object_new(Reward_t3704020935_il2cpp_TypeInfo_var);
		Reward__ctor_m184642892(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		Reward_t3704020935 * L_5 = V_2;
		String_t* L_6 = ___rewardType1;
		NullCheck(L_5);
		Reward_set_Type_m4069022543(L_5, L_6, /*hidden argument*/NULL);
		Reward_t3704020935 * L_7 = V_2;
		double L_8 = ___rewardAmount2;
		NullCheck(L_7);
		Reward_set_Amount_m3356887413(L_7, L_8, /*hidden argument*/NULL);
		Reward_t3704020935 * L_9 = V_2;
		V_1 = L_9;
		RewardedAdClient_t1756845177 * L_10 = V_0;
		NullCheck(L_10);
		EventHandler_1_t1628180368 * L_11 = L_10->get_OnUserEarnedReward_8();
		RewardedAdClient_t1756845177 * L_12 = V_0;
		Reward_t3704020935 * L_13 = V_1;
		NullCheck(L_11);
		EventHandler_1_Invoke_m198145918(L_11, L_12, L_13, /*hidden argument*/EventHandler_1_Invoke_m198145918_RuntimeMethod_var);
	}

IL_0035:
	{
		return;
	}
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient::RewardedAdPaidEventCallback(System.IntPtr,System.Int32,System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void RewardedAdClient_RewardedAdPaidEventCallback_m3158905489 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_RewardedAdPaidEventCallback_m3158905489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RewardedAdClient_t1756845177 * V_0 = NULL;
	AdValue_t4078760168 * V_1 = NULL;
	AdValue_t4078760168 * V_2 = NULL;
	AdValueEventArgs_t374020464 * V_3 = NULL;
	AdValueEventArgs_t374020464 * V_4 = NULL;
	{
		intptr_t L_0 = ___rewardedAdClient0;
		RewardedAdClient_t1756845177 * L_1 = RewardedAdClient_IntPtrToRewardedAdClient_m789117288(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RewardedAdClient_t1756845177 * L_2 = V_0;
		NullCheck(L_2);
		EventHandler_1_t2593147193 * L_3 = L_2->get_OnPaidEvent_9();
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		AdValue_t4078760168 * L_4 = (AdValue_t4078760168 *)il2cpp_codegen_object_new(AdValue_t4078760168_il2cpp_TypeInfo_var);
		AdValue__ctor_m4219000783(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		AdValue_t4078760168 * L_5 = V_2;
		int32_t L_6 = ___precision1;
		NullCheck(L_5);
		AdValue_set_Precision_m3847983301(L_5, L_6, /*hidden argument*/NULL);
		AdValue_t4078760168 * L_7 = V_2;
		int64_t L_8 = ___value2;
		NullCheck(L_7);
		AdValue_set_Value_m1432270804(L_7, L_8, /*hidden argument*/NULL);
		AdValue_t4078760168 * L_9 = V_2;
		String_t* L_10 = ___currencyCode3;
		NullCheck(L_9);
		AdValue_set_CurrencyCode_m2767731806(L_9, L_10, /*hidden argument*/NULL);
		AdValue_t4078760168 * L_11 = V_2;
		V_1 = L_11;
		AdValueEventArgs_t374020464 * L_12 = (AdValueEventArgs_t374020464 *)il2cpp_codegen_object_new(AdValueEventArgs_t374020464_il2cpp_TypeInfo_var);
		AdValueEventArgs__ctor_m2067749485(L_12, /*hidden argument*/NULL);
		V_4 = L_12;
		AdValueEventArgs_t374020464 * L_13 = V_4;
		AdValue_t4078760168 * L_14 = V_1;
		NullCheck(L_13);
		AdValueEventArgs_set_AdValue_m1706002291(L_13, L_14, /*hidden argument*/NULL);
		AdValueEventArgs_t374020464 * L_15 = V_4;
		V_3 = L_15;
		RewardedAdClient_t1756845177 * L_16 = V_0;
		NullCheck(L_16);
		EventHandler_1_t2593147193 * L_17 = L_16->get_OnPaidEvent_9();
		RewardedAdClient_t1756845177 * L_18 = V_0;
		AdValueEventArgs_t374020464 * L_19 = V_3;
		NullCheck(L_17);
		EventHandler_1_Invoke_m2555290985(L_17, L_18, L_19, /*hidden argument*/EventHandler_1_Invoke_m2555290985_RuntimeMethod_var);
	}

IL_004e:
	{
		return;
	}
}
// GoogleMobileAds.iOS.RewardedAdClient GoogleMobileAds.iOS.RewardedAdClient::IntPtrToRewardedAdClient(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RewardedAdClient_t1756845177 * RewardedAdClient_IntPtrToRewardedAdClient_m789117288 (RuntimeObject * __this /* static, unused */, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RewardedAdClient_IntPtrToRewardedAdClient_m789117288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t3351438187  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = ___rewardedAdClient0;
		GCHandle_t3351438187  L_1 = GCHandle_op_Explicit_m976572069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = GCHandle_get_Target_m1824973883((&V_0), /*hidden argument*/NULL);
		return ((RewardedAdClient_t1756845177 *)IsInstClass((RuntimeObject*)L_2, RewardedAdClient_t1756845177_il2cpp_TypeInfo_var));
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
extern "C"  void DelegatePInvokeWrapper_GADURewardedAdDidCloseCallback_t2874328472 (GADURewardedAdDidCloseCallback_t2874328472 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback__ctor_m2458889410 (GADURewardedAdDidCloseCallback_t2874328472 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback_Invoke_m3016830638 (GADURewardedAdDidCloseCallback_t2874328472 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardedAdDidCloseCallback_Invoke_m3016830638((GADURewardedAdDidCloseCallback_t2874328472 *)__this->get_prev_9(), ___rewardedAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardedAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidCloseCallback_BeginInvoke_m557834969 (GADURewardedAdDidCloseCallback_t2874328472 * __this, intptr_t ___rewardedAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdDidCloseCallback_BeginInvoke_m557834969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback_EndInvoke_m3641271155 (GADURewardedAdDidCloseCallback_t2874328472 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback__ctor_m352766581 (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback_Invoke_m2771887453 (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardedAdDidFailToReceiveAdWithErrorCallback_Invoke_m2771887453((GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 *)__this->get_prev_9(), ___rewardedAdClient0, ___error1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m3006431648 (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m3006431648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback_EndInvoke_m2260652995 (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t3264051367 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 (GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback__ctor_m3557311141 (GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback_Invoke_m1789212756 (GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardedAdDidFailToShowAdWithErrorCallback_Invoke_m1789212756((GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 *)__this->get_prev_9(), ___rewardedAdClient0, ___error1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidFailToShowAdWithErrorCallback_BeginInvoke_m3086557590 (GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdDidFailToShowAdWithErrorCallback_BeginInvoke_m3086557590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback_EndInvoke_m1002022136 (GADURewardedAdDidFailToShowAdWithErrorCallback_t3260905855 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardedAdDidOpenCallback_t4091248959 (GADURewardedAdDidOpenCallback_t4091248959 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback__ctor_m3495398227 (GADURewardedAdDidOpenCallback_t4091248959 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback_Invoke_m3356630232 (GADURewardedAdDidOpenCallback_t4091248959 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardedAdDidOpenCallback_Invoke_m3356630232((GADURewardedAdDidOpenCallback_t4091248959 *)__this->get_prev_9(), ___rewardedAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardedAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidOpenCallback_BeginInvoke_m115905619 (GADURewardedAdDidOpenCallback_t4091248959 * __this, intptr_t ___rewardedAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdDidOpenCallback_BeginInvoke_m115905619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback_EndInvoke_m3088758789 (GADURewardedAdDidOpenCallback_t4091248959 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardedAdDidReceiveAdCallback_t3678103445 (GADURewardedAdDidReceiveAdCallback_t3678103445 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback__ctor_m885661216 (GADURewardedAdDidReceiveAdCallback_t3678103445 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback_Invoke_m1607867489 (GADURewardedAdDidReceiveAdCallback_t3678103445 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardedAdDidReceiveAdCallback_Invoke_m1607867489((GADURewardedAdDidReceiveAdCallback_t3678103445 *)__this->get_prev_9(), ___rewardedAdClient0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardedAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidReceiveAdCallback_BeginInvoke_m4278760966 (GADURewardedAdDidReceiveAdCallback_t3678103445 * __this, intptr_t ___rewardedAdClient0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdDidReceiveAdCallback_BeginInvoke_m4278760966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback_EndInvoke_m1973214156 (GADURewardedAdDidReceiveAdCallback_t3678103445 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADURewardedAdPaidEventCallback_t3617339775 (GADURewardedAdPaidEventCallback_t3617339775 * __this, intptr_t ___rewardedAdClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___currencyCode3' to native representation
	char* ____currencyCode3_marshaled = NULL;
	____currencyCode3_marshaled = il2cpp_codegen_marshal_string(___currencyCode3);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ___precision1, ___value2, ____currencyCode3_marshaled);

	// Marshaling cleanup of parameter '___currencyCode3' native representation
	il2cpp_codegen_marshal_free(____currencyCode3_marshaled);
	____currencyCode3_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdPaidEventCallback__ctor_m2777055707 (GADURewardedAdPaidEventCallback_t3617339775 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback::Invoke(System.IntPtr,System.Int32,System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdPaidEventCallback_Invoke_m3679956785 (GADURewardedAdPaidEventCallback_t3617339775 * __this, intptr_t ___rewardedAdClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADURewardedAdPaidEventCallback_Invoke_m3679956785((GADURewardedAdPaidEventCallback_t3617339775 *)__this->get_prev_9(), ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3);
					else
						GenericVirtActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3);
					else
						VirtActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback::BeginInvoke(System.IntPtr,System.Int32,System.Int64,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdPaidEventCallback_BeginInvoke_m1947158652 (GADURewardedAdPaidEventCallback_t3617339775 * __this, intptr_t ___rewardedAdClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADURewardedAdPaidEventCallback_BeginInvoke_m1947158652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___precision1);
	__d_args[2] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___value2);
	__d_args[3] = ___currencyCode3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADURewardedAdPaidEventCallback_EndInvoke_m2710030989 (GADURewardedAdPaidEventCallback_t3617339775 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_GADUUserEarnedRewardCallback_t224874987 (GADUUserEarnedRewardCallback_t224874987 * __this, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, double);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___rewardType1' to native representation
	char* ____rewardType1_marshaled = NULL;
	____rewardType1_marshaled = il2cpp_codegen_marshal_string(___rewardType1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ____rewardType1_marshaled, ___rewardAmount2);

	// Marshaling cleanup of parameter '___rewardType1' native representation
	il2cpp_codegen_marshal_free(____rewardType1_marshaled);
	____rewardType1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback__ctor_m2745036547 (GADUUserEarnedRewardCallback_t224874987 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback::Invoke(System.IntPtr,System.String,System.Double)
extern "C" IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback_Invoke_m2032040093 (GADUUserEarnedRewardCallback_t224874987 * __this, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		GADUUserEarnedRewardCallback_Invoke_m2032040093((GADUUserEarnedRewardCallback_t224874987 *)__this->get_prev_9(), ___rewardedAdClient0, ___rewardType1, ___rewardAmount2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
					else
						VirtActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback::BeginInvoke(System.IntPtr,System.String,System.Double,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GADUUserEarnedRewardCallback_BeginInvoke_m2809280694 (GADUUserEarnedRewardCallback_t224874987 * __this, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GADUUserEarnedRewardCallback_BeginInvoke_m2809280694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = ___rewardType1;
	__d_args[2] = Box(Double_t594665363_il2cpp_TypeInfo_var, &___rewardAmount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback_EndInvoke_m2615815592 (GADUUserEarnedRewardCallback_t224874987 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void GoogleMobileAds.iOS.Utils::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Utils__ctor_m1118932141 (Utils_t143735646 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr GoogleMobileAds.iOS.Utils::BuildAdRequest(GoogleMobileAds.Api.AdRequest)
extern "C" IL2CPP_METHOD_ATTR intptr_t Utils_BuildAdRequest_m293820848 (RuntimeObject * __this /* static, unused */, AdRequest_t1573687800 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_BuildAdRequest_m293820848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	Enumerator_t2117577434  V_2;
	memset(&V_2, 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Enumerator_t913802012  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Nullable_1_t1166124571  V_5;
	memset(&V_5, 0, sizeof(V_5));
	DateTime_t3738529785  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Nullable_1_t1166124571  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Nullable_1_t3356391844  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Nullable_1_t3356391844  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Nullable_1_t1819850047  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Nullable_1_t1819850047  V_11;
	memset(&V_11, 0, sizeof(V_11));
	KeyValuePair_2_t4030379155  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Enumerator_t3586889763  V_13;
	memset(&V_13, 0, sizeof(V_13));
	MediationExtras_t2251835164 * V_14 = NULL;
	Enumerator_t1318186487  V_15;
	memset(&V_15, 0, sizeof(V_15));
	intptr_t V_16;
	memset(&V_16, 0, sizeof(V_16));
	KeyValuePair_2_t4030379155  V_17;
	memset(&V_17, 0, sizeof(V_17));
	Enumerator_t3586889763  V_18;
	memset(&V_18, 0, sizeof(V_18));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		intptr_t L_0 = Externs_GADUCreateRequest_m12381884(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		AdRequest_t1573687800 * L_1 = ___request0;
		NullCheck(L_1);
		HashSet_1_t412400163 * L_2 = AdRequest_get_Keywords_m2599443119(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Enumerator_t2117577434  L_3 = HashSet_1_GetEnumerator_m1519394295(L_2, /*hidden argument*/HashSet_1_GetEnumerator_m1519394295_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_0017:
		{
			String_t* L_4 = Enumerator_get_Current_m3165364755((&V_2), /*hidden argument*/Enumerator_get_Current_m3165364755_RuntimeMethod_var);
			V_1 = L_4;
			intptr_t L_5 = V_0;
			String_t* L_6 = V_1;
			Externs_GADUAddKeyword_m494140717(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		}

IL_0026:
		{
			bool L_7 = Enumerator_MoveNext_m2530340477((&V_2), /*hidden argument*/Enumerator_MoveNext_m2530340477_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0017;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m823536440((&V_2), /*hidden argument*/Enumerator_Dispose_m823536440_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0045:
	{
		AdRequest_t1573687800 * L_8 = ___request0;
		NullCheck(L_8);
		List_1_t3319525431 * L_9 = AdRequest_get_TestDevices_m1682785895(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Enumerator_t913802012  L_10 = List_1_GetEnumerator_m3752588592(L_9, /*hidden argument*/List_1_GetEnumerator_m3752588592_RuntimeMethod_var);
		V_4 = L_10;
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0066;
		}

IL_0057:
		{
			String_t* L_11 = Enumerator_get_Current_m3383387960((&V_4), /*hidden argument*/Enumerator_get_Current_m3383387960_RuntimeMethod_var);
			V_3 = L_11;
			intptr_t L_12 = V_0;
			String_t* L_13 = V_3;
			Externs_GADUAddTestDevice_m4243981418(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		}

IL_0066:
		{
			bool L_14 = Enumerator_MoveNext_m3603343449((&V_4), /*hidden argument*/Enumerator_MoveNext_m3603343449_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0057;
			}
		}

IL_0072:
		{
			IL2CPP_LEAVE(0x85, FINALLY_0077);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2026665411((&V_4), /*hidden argument*/Enumerator_Dispose_m2026665411_RuntimeMethod_var);
		IL2CPP_END_FINALLY(119)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0085:
	{
		AdRequest_t1573687800 * L_15 = ___request0;
		NullCheck(L_15);
		Nullable_1_t1166124571  L_16 = AdRequest_get_Birthday_m2572514828(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		bool L_17 = Nullable_1_get_HasValue_m3308303329((&V_5), /*hidden argument*/Nullable_1_get_HasValue_m3308303329_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00c5;
		}
	}
	{
		AdRequest_t1573687800 * L_18 = ___request0;
		NullCheck(L_18);
		Nullable_1_t1166124571  L_19 = AdRequest_get_Birthday_m2572514828(L_18, /*hidden argument*/NULL);
		V_7 = L_19;
		DateTime_t3738529785  L_20 = Nullable_1_GetValueOrDefault_m1358049705((&V_7), /*hidden argument*/Nullable_1_GetValueOrDefault_m1358049705_RuntimeMethod_var);
		V_6 = L_20;
		intptr_t L_21 = V_0;
		int32_t L_22 = DateTime_get_Year_m1184003812((&V_6), /*hidden argument*/NULL);
		int32_t L_23 = DateTime_get_Month_m1566006993((&V_6), /*hidden argument*/NULL);
		int32_t L_24 = DateTime_get_Day_m1623500273((&V_6), /*hidden argument*/NULL);
		Externs_GADUSetBirthday_m3517097208(NULL /*static, unused*/, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		AdRequest_t1573687800 * L_25 = ___request0;
		NullCheck(L_25);
		Nullable_1_t3356391844  L_26 = AdRequest_get_Gender_m4265506577(L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		bool L_27 = Nullable_1_get_HasValue_m2043790361((&V_8), /*hidden argument*/Nullable_1_get_HasValue_m2043790361_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_00ee;
		}
	}
	{
		intptr_t L_28 = V_0;
		AdRequest_t1573687800 * L_29 = ___request0;
		NullCheck(L_29);
		Nullable_1_t3356391844  L_30 = AdRequest_get_Gender_m4265506577(L_29, /*hidden argument*/NULL);
		V_9 = L_30;
		int32_t L_31 = Nullable_1_GetValueOrDefault_m2088687324((&V_9), /*hidden argument*/Nullable_1_GetValueOrDefault_m2088687324_RuntimeMethod_var);
		Externs_GADUSetGender_m1996646863(NULL /*static, unused*/, L_28, L_31, /*hidden argument*/NULL);
	}

IL_00ee:
	{
		AdRequest_t1573687800 * L_32 = ___request0;
		NullCheck(L_32);
		Nullable_1_t1819850047  L_33 = AdRequest_get_TagForChildDirectedTreatment_m2166109080(L_32, /*hidden argument*/NULL);
		V_10 = L_33;
		bool L_34 = Nullable_1_get_HasValue_m3741069969((&V_10), /*hidden argument*/Nullable_1_get_HasValue_m3741069969_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_0117;
		}
	}
	{
		intptr_t L_35 = V_0;
		AdRequest_t1573687800 * L_36 = ___request0;
		NullCheck(L_36);
		Nullable_1_t1819850047  L_37 = AdRequest_get_TagForChildDirectedTreatment_m2166109080(L_36, /*hidden argument*/NULL);
		V_11 = L_37;
		bool L_38 = Nullable_1_GetValueOrDefault_m256290237((&V_11), /*hidden argument*/Nullable_1_GetValueOrDefault_m256290237_RuntimeMethod_var);
		Externs_GADUTagForChildDirectedTreatment_m493683814(NULL /*static, unused*/, L_35, L_38, /*hidden argument*/NULL);
	}

IL_0117:
	{
		AdRequest_t1573687800 * L_39 = ___request0;
		NullCheck(L_39);
		Dictionary_2_t1632706988 * L_40 = AdRequest_get_Extras_m3434326504(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Enumerator_t3586889763  L_41 = Dictionary_2_GetEnumerator_m4035971863(L_40, /*hidden argument*/Dictionary_2_GetEnumerator_m4035971863_RuntimeMethod_var);
		V_13 = L_41;
	}

IL_0124:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0146;
		}

IL_0129:
		{
			KeyValuePair_2_t4030379155  L_42 = Enumerator_get_Current_m3704352721((&V_13), /*hidden argument*/Enumerator_get_Current_m3704352721_RuntimeMethod_var);
			V_12 = L_42;
			intptr_t L_43 = V_0;
			String_t* L_44 = KeyValuePair_2_get_Key_m1558613789((&V_12), /*hidden argument*/KeyValuePair_2_get_Key_m1558613789_RuntimeMethod_var);
			String_t* L_45 = KeyValuePair_2_get_Value_m3184375205((&V_12), /*hidden argument*/KeyValuePair_2_get_Value_m3184375205_RuntimeMethod_var);
			Externs_GADUSetExtra_m1192982622(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
		}

IL_0146:
		{
			bool L_46 = Enumerator_MoveNext_m1807940103((&V_13), /*hidden argument*/Enumerator_MoveNext_m1807940103_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_0129;
			}
		}

IL_0152:
		{
			IL2CPP_LEAVE(0x165, FINALLY_0157);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0157;
	}

FINALLY_0157:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2198401511((&V_13), /*hidden argument*/Enumerator_Dispose_m2198401511_RuntimeMethod_var);
		IL2CPP_END_FINALLY(343)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(343)
	{
		IL2CPP_JUMP_TBL(0x165, IL_0165)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0165:
	{
		intptr_t L_47 = V_0;
		Externs_GADUSetExtra_m1192982622(NULL /*static, unused*/, L_47, _stringLiteral1979715244, _stringLiteral3452614543, /*hidden argument*/NULL);
		AdRequest_t1573687800 * L_48 = ___request0;
		NullCheck(L_48);
		List_1_t3723909906 * L_49 = AdRequest_get_MediationExtras_m3388587535(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Enumerator_t1318186487  L_50 = List_1_GetEnumerator_m1516320239(L_49, /*hidden argument*/List_1_GetEnumerator_m1516320239_RuntimeMethod_var);
		V_15 = L_50;
	}

IL_0182:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0207;
		}

IL_0187:
		{
			MediationExtras_t2251835164 * L_51 = Enumerator_get_Current_m942627990((&V_15), /*hidden argument*/Enumerator_get_Current_m942627990_RuntimeMethod_var);
			V_14 = L_51;
			intptr_t L_52 = Externs_GADUCreateMutableDictionary_m1394405504(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_16 = L_52;
			intptr_t L_53 = V_16;
			bool L_54 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_53, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_54)
			{
				goto IL_0207;
			}
		}

IL_01a8:
		{
			MediationExtras_t2251835164 * L_55 = V_14;
			NullCheck(L_55);
			Dictionary_2_t1632706988 * L_56 = MediationExtras_get_Extras_m2824990405(L_55, /*hidden argument*/NULL);
			NullCheck(L_56);
			Enumerator_t3586889763  L_57 = Dictionary_2_GetEnumerator_m4035971863(L_56, /*hidden argument*/Dictionary_2_GetEnumerator_m4035971863_RuntimeMethod_var);
			V_18 = L_57;
		}

IL_01b6:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01d9;
			}

IL_01bb:
			{
				KeyValuePair_2_t4030379155  L_58 = Enumerator_get_Current_m3704352721((&V_18), /*hidden argument*/Enumerator_get_Current_m3704352721_RuntimeMethod_var);
				V_17 = L_58;
				intptr_t L_59 = V_16;
				String_t* L_60 = KeyValuePair_2_get_Key_m1558613789((&V_17), /*hidden argument*/KeyValuePair_2_get_Key_m1558613789_RuntimeMethod_var);
				String_t* L_61 = KeyValuePair_2_get_Value_m3184375205((&V_17), /*hidden argument*/KeyValuePair_2_get_Value_m3184375205_RuntimeMethod_var);
				Externs_GADUMutableDictionarySetValue_m4263840583(NULL /*static, unused*/, L_59, L_60, L_61, /*hidden argument*/NULL);
			}

IL_01d9:
			{
				bool L_62 = Enumerator_MoveNext_m1807940103((&V_18), /*hidden argument*/Enumerator_MoveNext_m1807940103_RuntimeMethod_var);
				if (L_62)
				{
					goto IL_01bb;
				}
			}

IL_01e5:
			{
				IL2CPP_LEAVE(0x1F8, FINALLY_01ea);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01ea;
		}

FINALLY_01ea:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m2198401511((&V_18), /*hidden argument*/Enumerator_Dispose_m2198401511_RuntimeMethod_var);
			IL2CPP_END_FINALLY(490)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(490)
		{
			IL2CPP_JUMP_TBL(0x1F8, IL_01f8)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01f8:
		{
			intptr_t L_63 = V_0;
			intptr_t L_64 = V_16;
			MediationExtras_t2251835164 * L_65 = V_14;
			NullCheck(L_65);
			String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String GoogleMobileAds.Api.Mediation.MediationExtras::get_IOSMediationExtraBuilderClassName() */, L_65);
			Externs_GADUSetMediationExtras_m4106390223(NULL /*static, unused*/, L_63, L_64, L_66, /*hidden argument*/NULL);
		}

IL_0207:
		{
			bool L_67 = Enumerator_MoveNext_m4093686627((&V_15), /*hidden argument*/Enumerator_MoveNext_m4093686627_RuntimeMethod_var);
			if (L_67)
			{
				goto IL_0187;
			}
		}

IL_0213:
		{
			IL2CPP_LEAVE(0x226, FINALLY_0218);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0218;
	}

FINALLY_0218:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3659158765((&V_15), /*hidden argument*/Enumerator_Dispose_m3659158765_RuntimeMethod_var);
		IL2CPP_END_FINALLY(536)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(536)
	{
		IL2CPP_JUMP_TBL(0x226, IL_0226)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0226:
	{
		intptr_t L_68 = V_0;
		Externs_GADUSetRequestAgent_m2007299171(NULL /*static, unused*/, L_68, _stringLiteral454589178, /*hidden argument*/NULL);
		intptr_t L_69 = V_0;
		return L_69;
	}
}
// System.IntPtr GoogleMobileAds.iOS.Utils::BuildServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions)
extern "C" IL2CPP_METHOD_ATTR intptr_t Utils_BuildServerSideVerificationOptions_m3905722713 (RuntimeObject * __this /* static, unused */, ServerSideVerificationOptions_t4071074516 * ___options0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = Externs_GADUCreateServerSideVerificationOptions_m1466441549(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		intptr_t L_1 = V_0;
		ServerSideVerificationOptions_t4071074516 * L_2 = ___options0;
		NullCheck(L_2);
		String_t* L_3 = ServerSideVerificationOptions_get_UserId_m3098835367(L_2, /*hidden argument*/NULL);
		Externs_GADUServerSideVerificationOptionsSetUserId_m2585719509(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = V_0;
		ServerSideVerificationOptions_t4071074516 * L_5 = ___options0;
		NullCheck(L_5);
		String_t* L_6 = ServerSideVerificationOptions_get_CustomData_m1173803063(L_5, /*hidden argument*/NULL);
		Externs_GADUServerSideVerificationOptionsSetCustomRewardString_m2900251167(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.String GoogleMobileAds.iOS.Utils::PtrToString(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Utils_PtrToString_m1166713158 (RuntimeObject * __this /* static, unused */, intptr_t ___stringPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_PtrToString_m1166713158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		intptr_t L_0 = ___stringPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_m2474145239(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = ___stringPtr0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.iOS.Utils::PtrArrayToManagedList(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR List_1_t3319525431 * Utils_PtrArrayToManagedList_m1310791226 (RuntimeObject * __this /* static, unused */, intptr_t ___arrayPtr0, int32_t ___numOfAssets1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_PtrArrayToManagedList_m1310791226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_t4013366056* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___numOfAssets1;
		V_0 = ((IntPtrU5BU5D_t4013366056*)SZArrayNew(IntPtrU5BU5D_t4013366056_il2cpp_TypeInfo_var, (uint32_t)L_0));
		int32_t L_1 = ___numOfAssets1;
		V_1 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_1));
		intptr_t L_2 = ___arrayPtr0;
		IntPtrU5BU5D_t4013366056* L_3 = V_0;
		int32_t L_4 = ___numOfAssets1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m437255119(NULL /*static, unused*/, L_2, L_3, 0, L_4, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		StringU5BU5D_t1281789340* L_5 = V_1;
		int32_t L_6 = V_2;
		IntPtrU5BU5D_t4013366056* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		intptr_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_11 = Marshal_PtrToStringAuto_m3648166035(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_11);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (String_t*)L_11);
		IntPtrU5BU5D_t4013366056* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		intptr_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = ___numOfAssets1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001e;
		}
	}
	{
		intptr_t L_19 = ___arrayPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_20 = V_1;
		List_1_t3319525431 * L_21 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m199233495(L_21, (RuntimeObject*)(RuntimeObject*)L_20, /*hidden argument*/List_1__ctor_m199233495_RuntimeMethod_var);
		return L_21;
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
// System.Void MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern "C" IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m556113543 (MonoPInvokeCallbackAttribute_t3472581009 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
