// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayCustomRewardedVideoAd.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayCustomRewardedVideoAd;
#ifdef EASYADS_PlayCustomRewardedVideoAd_generated_h
#error "PlayCustomRewardedVideoAd.generated.h already included, missing '#pragma once' in PlayCustomRewardedVideoAd.h"
#endif
#define EASYADS_PlayCustomRewardedVideoAd_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_14_DELEGATE \
struct _Script_EasyAds_eventCustomRewardedVideoEarnDelegate_Parms \
{ \
	FString type; \
	int32 amout; \
}; \
static inline void FCustomRewardedVideoEarnDelegate_DelegateWrapper(const FMulticastScriptDelegate& CustomRewardedVideoEarnDelegate, const FString& type, int32 amout) \
{ \
	_Script_EasyAds_eventCustomRewardedVideoEarnDelegate_Parms Parms; \
	Parms.type=type; \
	Parms.amout=amout; \
	CustomRewardedVideoEarnDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_15_DELEGATE \
static inline void FCustomRewardedVideoCloseDelegate_DelegateWrapper(const FMulticastScriptDelegate& CustomRewardedVideoCloseDelegate) \
{ \
	CustomRewardedVideoCloseDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_16_DELEGATE \
struct _Script_EasyAds_eventCustomRewardedVideoFailDelegate_Parms \
{ \
	FString errmsg; \
}; \
static inline void FCustomRewardedVideoFailDelegate_DelegateWrapper(const FMulticastScriptDelegate& CustomRewardedVideoFailDelegate, const FString& errmsg) \
{ \
	_Script_EasyAds_eventCustomRewardedVideoFailDelegate_Parms Parms; \
	Parms.errmsg=errmsg; \
	CustomRewardedVideoFailDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayCustomRewardedVideoAd);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayCustomRewardedVideoAd);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayCustomRewardedVideoAd(); \
	friend struct Z_Construct_UClass_UPlayCustomRewardedVideoAd_Statics; \
public: \
	DECLARE_CLASS(UPlayCustomRewardedVideoAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(UPlayCustomRewardedVideoAd)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUPlayCustomRewardedVideoAd(); \
	friend struct Z_Construct_UClass_UPlayCustomRewardedVideoAd_Statics; \
public: \
	DECLARE_CLASS(UPlayCustomRewardedVideoAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(UPlayCustomRewardedVideoAd)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayCustomRewardedVideoAd(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayCustomRewardedVideoAd) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayCustomRewardedVideoAd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayCustomRewardedVideoAd); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayCustomRewardedVideoAd(UPlayCustomRewardedVideoAd&&); \
	NO_API UPlayCustomRewardedVideoAd(const UPlayCustomRewardedVideoAd&); \
public:


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayCustomRewardedVideoAd(UPlayCustomRewardedVideoAd&&); \
	NO_API UPlayCustomRewardedVideoAd(const UPlayCustomRewardedVideoAd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayCustomRewardedVideoAd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayCustomRewardedVideoAd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayCustomRewardedVideoAd)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_22_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class UPlayCustomRewardedVideoAd>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayCustomRewardedVideoAd_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
