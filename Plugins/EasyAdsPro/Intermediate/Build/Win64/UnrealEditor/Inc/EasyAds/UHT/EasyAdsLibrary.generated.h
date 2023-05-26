// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EasyAdsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class AdNetworks : uint8;
enum class MaxAdContentRating : uint8;
#ifdef EASYADS_EasyAdsLibrary_generated_h
#error "EasyAdsLibrary.generated.h already included, missing '#pragma once' in EasyAdsLibrary.h"
#endif
#define EASYADS_EasyAdsLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAdNetworkConsent); \
	DECLARE_FUNCTION(execSetMaxAdContentRating); \
	DECLARE_FUNCTION(execSetTagForUnderAgeOfConsent); \
	DECLARE_FUNCTION(execSetTagForChildDirectedTreatment); \
	DECLARE_FUNCTION(execUMPResetConsentInformation); \
	DECLARE_FUNCTION(execIsAdmobInitlized); \
	DECLARE_FUNCTION(execIsCustomRewardedVideoAdsReady); \
	DECLARE_FUNCTION(execIsCustomInterstitialReady); \
	DECLARE_FUNCTION(execLaunchMediationTestSuite); \
	DECLARE_FUNCTION(execIsRewardedVideoReady); \
	DECLARE_FUNCTION(execIsInterstitialReady); \
	DECLARE_FUNCTION(execIsBannerReady); \
	DECLARE_FUNCTION(execHideCustomBanner); \
	DECLARE_FUNCTION(execHideBanner); \
	DECLARE_FUNCTION(execShowCustomBanner); \
	DECLARE_FUNCTION(execShowBanner);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAdNetworkConsent); \
	DECLARE_FUNCTION(execSetMaxAdContentRating); \
	DECLARE_FUNCTION(execSetTagForUnderAgeOfConsent); \
	DECLARE_FUNCTION(execSetTagForChildDirectedTreatment); \
	DECLARE_FUNCTION(execUMPResetConsentInformation); \
	DECLARE_FUNCTION(execIsAdmobInitlized); \
	DECLARE_FUNCTION(execIsCustomRewardedVideoAdsReady); \
	DECLARE_FUNCTION(execIsCustomInterstitialReady); \
	DECLARE_FUNCTION(execLaunchMediationTestSuite); \
	DECLARE_FUNCTION(execIsRewardedVideoReady); \
	DECLARE_FUNCTION(execIsInterstitialReady); \
	DECLARE_FUNCTION(execIsBannerReady); \
	DECLARE_FUNCTION(execHideCustomBanner); \
	DECLARE_FUNCTION(execHideBanner); \
	DECLARE_FUNCTION(execShowCustomBanner); \
	DECLARE_FUNCTION(execShowBanner);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyAdsLibrary(); \
	friend struct Z_Construct_UClass_UEasyAdsLibrary_Statics; \
public: \
	DECLARE_CLASS(UEasyAdsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(UEasyAdsLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUEasyAdsLibrary(); \
	friend struct Z_Construct_UClass_UEasyAdsLibrary_Statics; \
public: \
	DECLARE_CLASS(UEasyAdsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(UEasyAdsLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyAdsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyAdsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyAdsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyAdsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEasyAdsLibrary(UEasyAdsLibrary&&); \
	NO_API UEasyAdsLibrary(const UEasyAdsLibrary&); \
public: \
	NO_API virtual ~UEasyAdsLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyAdsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEasyAdsLibrary(UEasyAdsLibrary&&); \
	NO_API UEasyAdsLibrary(const UEasyAdsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyAdsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyAdsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyAdsLibrary) \
	NO_API virtual ~UEasyAdsLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_81_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class UEasyAdsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h


#define FOREACH_ENUM_CONSENTSTATUS(op) \
	op(ConsentStatus::INVALID) \
	op(ConsentStatus::UNKNOWN) \
	op(ConsentStatus::NON_PERSONALIZED) \
	op(ConsentStatus::PERSONALIZED) 

enum class ConsentStatus : uint8;
template<> struct TIsUEnumClass<ConsentStatus> { enum { Value = true }; };
template<> EASYADS_API UEnum* StaticEnum<ConsentStatus>();

#define FOREACH_ENUM_ADNETWORKS(op) \
	op(AdNetworks::Admob) \
	op(AdNetworks::Unity) \
	op(AdNetworks::Chartboost) \
	op(AdNetworks::Vungle) \
	op(AdNetworks::Applovin) \
	op(AdNetworks::Facebook) 

enum class AdNetworks : uint8;
template<> struct TIsUEnumClass<AdNetworks> { enum { Value = true }; };
template<> EASYADS_API UEnum* StaticEnum<AdNetworks>();

#define FOREACH_ENUM_CHILDDIRECTEDTREATMENT(op) \
	op(ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED) \
	op(ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE) \
	op(ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE) 

enum class ChildDirectedTreatment : uint8;
template<> struct TIsUEnumClass<ChildDirectedTreatment> { enum { Value = true }; };
template<> EASYADS_API UEnum* StaticEnum<ChildDirectedTreatment>();

#define FOREACH_ENUM_MAXADCONTENTRATING(op) \
	op(MaxAdContentRating::MAX_AD_CONTENT_RATING_G) \
	op(MaxAdContentRating::MAX_AD_CONTENT_RATING_PG) \
	op(MaxAdContentRating::MAX_AD_CONTENT_RATING_T) \
	op(MaxAdContentRating::MAX_AD_CONTENT_RATING_MA) 

enum class MaxAdContentRating : uint8;
template<> struct TIsUEnumClass<MaxAdContentRating> { enum { Value = true }; };
template<> EASYADS_API UEnum* StaticEnum<MaxAdContentRating>();

#define FOREACH_ENUM_UNDERAGEOFCONSENT(op) \
	op(UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE) \
	op(UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE) \
	op(UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED) 

enum class UnderAgeOfConsent : uint8;
template<> struct TIsUEnumClass<UnderAgeOfConsent> { enum { Value = true }; };
template<> EASYADS_API UEnum* StaticEnum<UnderAgeOfConsent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
