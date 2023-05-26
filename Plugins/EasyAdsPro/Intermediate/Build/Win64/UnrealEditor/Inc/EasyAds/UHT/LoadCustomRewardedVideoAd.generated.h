// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LoadCustomRewardedVideoAd.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULoadCustomRewardedVideoAd;
#ifdef EASYADS_LoadCustomRewardedVideoAd_generated_h
#error "LoadCustomRewardedVideoAd.generated.h already included, missing '#pragma once' in LoadCustomRewardedVideoAd.h"
#endif
#define EASYADS_LoadCustomRewardedVideoAd_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_13_DELEGATE \
struct _Script_EasyAds_eventCustomRewardedVideoLoadFailDelegate_Parms \
{ \
	FString errmsg; \
}; \
static inline void FCustomRewardedVideoLoadFailDelegate_DelegateWrapper(const FMulticastScriptDelegate& CustomRewardedVideoLoadFailDelegate, const FString& errmsg) \
{ \
	_Script_EasyAds_eventCustomRewardedVideoLoadFailDelegate_Parms Parms; \
	Parms.errmsg=errmsg; \
	CustomRewardedVideoLoadFailDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_14_DELEGATE \
static inline void FCustomRewardedVideoLoadSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& CustomRewardedVideoLoadSuccessDelegate) \
{ \
	CustomRewardedVideoLoadSuccessDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadCustomRewardedVideoAd);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadCustomRewardedVideoAd);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadCustomRewardedVideoAd(); \
	friend struct Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics; \
public: \
	DECLARE_CLASS(ULoadCustomRewardedVideoAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(ULoadCustomRewardedVideoAd)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULoadCustomRewardedVideoAd(); \
	friend struct Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics; \
public: \
	DECLARE_CLASS(ULoadCustomRewardedVideoAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(ULoadCustomRewardedVideoAd)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadCustomRewardedVideoAd(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadCustomRewardedVideoAd) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadCustomRewardedVideoAd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadCustomRewardedVideoAd); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadCustomRewardedVideoAd(ULoadCustomRewardedVideoAd&&); \
	NO_API ULoadCustomRewardedVideoAd(const ULoadCustomRewardedVideoAd&); \
public:


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadCustomRewardedVideoAd(ULoadCustomRewardedVideoAd&&); \
	NO_API ULoadCustomRewardedVideoAd(const ULoadCustomRewardedVideoAd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadCustomRewardedVideoAd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadCustomRewardedVideoAd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadCustomRewardedVideoAd)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class ULoadCustomRewardedVideoAd>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
