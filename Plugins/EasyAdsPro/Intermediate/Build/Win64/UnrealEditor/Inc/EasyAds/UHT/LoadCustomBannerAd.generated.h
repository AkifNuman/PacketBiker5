// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LoadCustomBannerAd.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULoadCustomBannerAd;
#ifdef EASYADS_LoadCustomBannerAd_generated_h
#error "LoadCustomBannerAd.generated.h already included, missing '#pragma once' in LoadCustomBannerAd.h"
#endif
#define EASYADS_LoadCustomBannerAd_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_9_DELEGATE \
struct _Script_EasyAds_eventCustomBannerLoadFailDelegate_Parms \
{ \
	FString errmsg; \
}; \
static inline void FCustomBannerLoadFailDelegate_DelegateWrapper(const FMulticastScriptDelegate& CustomBannerLoadFailDelegate, const FString& errmsg) \
{ \
	_Script_EasyAds_eventCustomBannerLoadFailDelegate_Parms Parms; \
	Parms.errmsg=errmsg; \
	CustomBannerLoadFailDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_10_DELEGATE \
static inline void FCustomBannerLoadSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& CustomBannerLoadSuccessDelegate) \
{ \
	CustomBannerLoadSuccessDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadCustomBannerAd);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadCustomBannerAd);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadCustomBannerAd(); \
	friend struct Z_Construct_UClass_ULoadCustomBannerAd_Statics; \
public: \
	DECLARE_CLASS(ULoadCustomBannerAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(ULoadCustomBannerAd)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULoadCustomBannerAd(); \
	friend struct Z_Construct_UClass_ULoadCustomBannerAd_Statics; \
public: \
	DECLARE_CLASS(ULoadCustomBannerAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(ULoadCustomBannerAd)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadCustomBannerAd(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadCustomBannerAd) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadCustomBannerAd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadCustomBannerAd); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadCustomBannerAd(ULoadCustomBannerAd&&); \
	NO_API ULoadCustomBannerAd(const ULoadCustomBannerAd&); \
public:


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadCustomBannerAd(ULoadCustomBannerAd&&); \
	NO_API ULoadCustomBannerAd(const ULoadCustomBannerAd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadCustomBannerAd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadCustomBannerAd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadCustomBannerAd)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class ULoadCustomBannerAd>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomBannerAd_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
