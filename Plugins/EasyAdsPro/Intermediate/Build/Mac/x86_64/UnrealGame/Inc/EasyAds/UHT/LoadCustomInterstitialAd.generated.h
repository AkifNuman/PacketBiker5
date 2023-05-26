// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LoadCustomInterstitialAd.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULoadCustomInterstitialAd;
#ifdef EASYADS_LoadCustomInterstitialAd_generated_h
#error "LoadCustomInterstitialAd.generated.h already included, missing '#pragma once' in LoadCustomInterstitialAd.h"
#endif
#define EASYADS_LoadCustomInterstitialAd_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_14_DELEGATE \
struct _Script_EasyAds_eventCustomInterstitialLoadFailDelegate_Parms \
{ \
	FString errmsg; \
}; \
static inline void FCustomInterstitialLoadFailDelegate_DelegateWrapper(const FMulticastScriptDelegate& CustomInterstitialLoadFailDelegate, const FString& errmsg) \
{ \
	_Script_EasyAds_eventCustomInterstitialLoadFailDelegate_Parms Parms; \
	Parms.errmsg=errmsg; \
	CustomInterstitialLoadFailDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_15_DELEGATE \
static inline void FCustomInterstitialLoadSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& CustomInterstitialLoadSuccessDelegate) \
{ \
	CustomInterstitialLoadSuccessDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadCustomInterstitialAd);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadCustomInterstitialAd);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadCustomInterstitialAd(); \
	friend struct Z_Construct_UClass_ULoadCustomInterstitialAd_Statics; \
public: \
	DECLARE_CLASS(ULoadCustomInterstitialAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(ULoadCustomInterstitialAd)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_INCLASS \
private: \
	static void StaticRegisterNativesULoadCustomInterstitialAd(); \
	friend struct Z_Construct_UClass_ULoadCustomInterstitialAd_Statics; \
public: \
	DECLARE_CLASS(ULoadCustomInterstitialAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(ULoadCustomInterstitialAd)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadCustomInterstitialAd(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadCustomInterstitialAd) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadCustomInterstitialAd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadCustomInterstitialAd); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadCustomInterstitialAd(ULoadCustomInterstitialAd&&); \
	NO_API ULoadCustomInterstitialAd(const ULoadCustomInterstitialAd&); \
public:


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadCustomInterstitialAd(ULoadCustomInterstitialAd&&); \
	NO_API ULoadCustomInterstitialAd(const ULoadCustomInterstitialAd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadCustomInterstitialAd); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadCustomInterstitialAd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadCustomInterstitialAd)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_21_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class ULoadCustomInterstitialAd>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
