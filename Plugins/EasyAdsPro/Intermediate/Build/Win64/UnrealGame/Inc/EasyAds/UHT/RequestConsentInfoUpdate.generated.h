// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RequestConsentInfoUpdate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URequestConsentInfoUpdate;
enum class ConsentStatus : uint8;
#ifdef EASYADS_RequestConsentInfoUpdate_generated_h
#error "RequestConsentInfoUpdate.generated.h already included, missing '#pragma once' in RequestConsentInfoUpdate.h"
#endif
#define EASYADS_RequestConsentInfoUpdate_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_14_DELEGATE \
struct _Script_EasyAds_eventConsentInfoUpdateDelegate_Parms \
{ \
	bool IsSuccess; \
	ConsentStatus status; \
}; \
static inline void FConsentInfoUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& ConsentInfoUpdateDelegate, bool IsSuccess, ConsentStatus status) \
{ \
	_Script_EasyAds_eventConsentInfoUpdateDelegate_Parms Parms; \
	Parms.IsSuccess=IsSuccess ? true : false; \
	Parms.status=status; \
	ConsentInfoUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestConsentInfoUpdate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestConsentInfoUpdate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURequestConsentInfoUpdate(); \
	friend struct Z_Construct_UClass_URequestConsentInfoUpdate_Statics; \
public: \
	DECLARE_CLASS(URequestConsentInfoUpdate, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(URequestConsentInfoUpdate)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_INCLASS \
private: \
	static void StaticRegisterNativesURequestConsentInfoUpdate(); \
	friend struct Z_Construct_UClass_URequestConsentInfoUpdate_Statics; \
public: \
	DECLARE_CLASS(URequestConsentInfoUpdate, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(URequestConsentInfoUpdate)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URequestConsentInfoUpdate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URequestConsentInfoUpdate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestConsentInfoUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestConsentInfoUpdate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequestConsentInfoUpdate(URequestConsentInfoUpdate&&); \
	NO_API URequestConsentInfoUpdate(const URequestConsentInfoUpdate&); \
public:


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequestConsentInfoUpdate(URequestConsentInfoUpdate&&); \
	NO_API URequestConsentInfoUpdate(const URequestConsentInfoUpdate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestConsentInfoUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestConsentInfoUpdate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URequestConsentInfoUpdate)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class URequestConsentInfoUpdate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
