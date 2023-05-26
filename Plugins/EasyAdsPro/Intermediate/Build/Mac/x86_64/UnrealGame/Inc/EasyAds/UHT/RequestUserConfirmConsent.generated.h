// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RequestUserConfirmConsent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URequestUserConfirmConsent;
enum class ConsentStatus : uint8;
#ifdef EASYADS_RequestUserConfirmConsent_generated_h
#error "RequestUserConfirmConsent.generated.h already included, missing '#pragma once' in RequestUserConfirmConsent.h"
#endif
#define EASYADS_RequestUserConfirmConsent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_14_DELEGATE \
struct _Script_EasyAds_eventUserConfirmConsentDelegate_Parms \
{ \
	ConsentStatus status; \
	bool preferAdFree; \
}; \
static inline void FUserConfirmConsentDelegate_DelegateWrapper(const FMulticastScriptDelegate& UserConfirmConsentDelegate, ConsentStatus status, bool preferAdFree) \
{ \
	_Script_EasyAds_eventUserConfirmConsentDelegate_Parms Parms; \
	Parms.status=status; \
	Parms.preferAdFree=preferAdFree ? true : false; \
	UserConfirmConsentDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestUserConfirmConsent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestUserConfirmConsent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURequestUserConfirmConsent(); \
	friend struct Z_Construct_UClass_URequestUserConfirmConsent_Statics; \
public: \
	DECLARE_CLASS(URequestUserConfirmConsent, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(URequestUserConfirmConsent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesURequestUserConfirmConsent(); \
	friend struct Z_Construct_UClass_URequestUserConfirmConsent_Statics; \
public: \
	DECLARE_CLASS(URequestUserConfirmConsent, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(URequestUserConfirmConsent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URequestUserConfirmConsent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URequestUserConfirmConsent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestUserConfirmConsent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestUserConfirmConsent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequestUserConfirmConsent(URequestUserConfirmConsent&&); \
	NO_API URequestUserConfirmConsent(const URequestUserConfirmConsent&); \
public:


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequestUserConfirmConsent(URequestUserConfirmConsent&&); \
	NO_API URequestUserConfirmConsent(const URequestUserConfirmConsent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestUserConfirmConsent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestUserConfirmConsent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URequestUserConfirmConsent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_19_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class URequestUserConfirmConsent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
