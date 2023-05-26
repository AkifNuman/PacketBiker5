// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMPRequestConsentInfoUpdate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUMPRequestConsentInfoUpdate;
#ifdef EASYADS_UMPRequestConsentInfoUpdate_generated_h
#error "UMPRequestConsentInfoUpdate.generated.h already included, missing '#pragma once' in UMPRequestConsentInfoUpdate.h"
#endif
#define EASYADS_UMPRequestConsentInfoUpdate_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_11_DELEGATE \
struct _Script_EasyAds_eventUMPConsentDelegate_Parms \
{ \
	bool isSuccess; \
	FString err; \
}; \
static inline void FUMPConsentDelegate_DelegateWrapper(const FMulticastScriptDelegate& UMPConsentDelegate, bool isSuccess, const FString& err) \
{ \
	_Script_EasyAds_eventUMPConsentDelegate_Parms Parms; \
	Parms.isSuccess=isSuccess ? true : false; \
	Parms.err=err; \
	UMPConsentDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUMPRequestConsentInfoUpdate);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUMPRequestConsentInfoUpdate);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMPRequestConsentInfoUpdate(); \
	friend struct Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics; \
public: \
	DECLARE_CLASS(UUMPRequestConsentInfoUpdate, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(UUMPRequestConsentInfoUpdate)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUUMPRequestConsentInfoUpdate(); \
	friend struct Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics; \
public: \
	DECLARE_CLASS(UUMPRequestConsentInfoUpdate, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(UUMPRequestConsentInfoUpdate)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMPRequestConsentInfoUpdate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMPRequestConsentInfoUpdate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMPRequestConsentInfoUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMPRequestConsentInfoUpdate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMPRequestConsentInfoUpdate(UUMPRequestConsentInfoUpdate&&); \
	NO_API UUMPRequestConsentInfoUpdate(const UUMPRequestConsentInfoUpdate&); \
public:


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMPRequestConsentInfoUpdate(UUMPRequestConsentInfoUpdate&&); \
	NO_API UUMPRequestConsentInfoUpdate(const UUMPRequestConsentInfoUpdate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMPRequestConsentInfoUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMPRequestConsentInfoUpdate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMPRequestConsentInfoUpdate)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_16_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class UUMPRequestConsentInfoUpdate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
