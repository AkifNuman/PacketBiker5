// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/EasyAdsLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyAdsLibrary() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_UEasyAdsLibrary();
	EASYADS_API UClass* Z_Construct_UClass_UEasyAdsLibrary_NoRegister();
	EASYADS_API UEnum* Z_Construct_UEnum_EasyAds_AdNetworks();
	EASYADS_API UEnum* Z_Construct_UEnum_EasyAds_ChildDirectedTreatment();
	EASYADS_API UEnum* Z_Construct_UEnum_EasyAds_ConsentStatus();
	EASYADS_API UEnum* Z_Construct_UEnum_EasyAds_MaxAdContentRating();
	EASYADS_API UEnum* Z_Construct_UEnum_EasyAds_UnderAgeOfConsent();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ConsentStatus;
	static UEnum* ConsentStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ConsentStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ConsentStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyAds_ConsentStatus, Z_Construct_UPackage__Script_EasyAds(), TEXT("ConsentStatus"));
		}
		return Z_Registration_Info_UEnum_ConsentStatus.OuterSingleton;
	}
	template<> EASYADS_API UEnum* StaticEnum<ConsentStatus>()
	{
		return ConsentStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyAds_ConsentStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyAds_ConsentStatus_Statics::Enumerators[] = {
		{ "ConsentStatus::INVALID", (int64)ConsentStatus::INVALID },
		{ "ConsentStatus::UNKNOWN", (int64)ConsentStatus::UNKNOWN },
		{ "ConsentStatus::NON_PERSONALIZED", (int64)ConsentStatus::NON_PERSONALIZED },
		{ "ConsentStatus::PERSONALIZED", (int64)ConsentStatus::PERSONALIZED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyAds_ConsentStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "INVALID.DisplayName", "INVALID" },
		{ "INVALID.Name", "ConsentStatus::INVALID" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "NON_PERSONALIZED.DisplayName", "NON_PERSONALIZED" },
		{ "NON_PERSONALIZED.Name", "ConsentStatus::NON_PERSONALIZED" },
		{ "PERSONALIZED.DisplayName", "PERSONALIZED" },
		{ "PERSONALIZED.Name", "ConsentStatus::PERSONALIZED" },
		{ "UNKNOWN.DisplayName", "UNKNOWN" },
		{ "UNKNOWN.Name", "ConsentStatus::UNKNOWN" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyAds_ConsentStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyAds,
		nullptr,
		"ConsentStatus",
		"ConsentStatus",
		Z_Construct_UEnum_EasyAds_ConsentStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAds_ConsentStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyAds_ConsentStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAds_ConsentStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyAds_ConsentStatus()
	{
		if (!Z_Registration_Info_UEnum_ConsentStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ConsentStatus.InnerSingleton, Z_Construct_UEnum_EasyAds_ConsentStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ConsentStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AdNetworks;
	static UEnum* AdNetworks_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AdNetworks.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AdNetworks.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyAds_AdNetworks, Z_Construct_UPackage__Script_EasyAds(), TEXT("AdNetworks"));
		}
		return Z_Registration_Info_UEnum_AdNetworks.OuterSingleton;
	}
	template<> EASYADS_API UEnum* StaticEnum<AdNetworks>()
	{
		return AdNetworks_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyAds_AdNetworks_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyAds_AdNetworks_Statics::Enumerators[] = {
		{ "AdNetworks::Admob", (int64)AdNetworks::Admob },
		{ "AdNetworks::Unity", (int64)AdNetworks::Unity },
		{ "AdNetworks::Chartboost", (int64)AdNetworks::Chartboost },
		{ "AdNetworks::Vungle", (int64)AdNetworks::Vungle },
		{ "AdNetworks::Applovin", (int64)AdNetworks::Applovin },
		{ "AdNetworks::Facebook", (int64)AdNetworks::Facebook },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyAds_AdNetworks_Statics::Enum_MetaDataParams[] = {
		{ "Admob.DisplayName", "Admob" },
		{ "Admob.Name", "AdNetworks::Admob" },
		{ "Applovin.DisplayName", "Applovin" },
		{ "Applovin.Name", "AdNetworks::Applovin" },
		{ "BlueprintType", "true" },
		{ "Chartboost.DisplayName", "Chartboost" },
		{ "Chartboost.Name", "AdNetworks::Chartboost" },
		{ "Facebook.DisplayName", "Facebook" },
		{ "Facebook.Name", "AdNetworks::Facebook" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "Unity.DisplayName", "Unity" },
		{ "Unity.Name", "AdNetworks::Unity" },
		{ "Vungle.DisplayName", "Vungle" },
		{ "Vungle.Name", "AdNetworks::Vungle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyAds_AdNetworks_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyAds,
		nullptr,
		"AdNetworks",
		"AdNetworks",
		Z_Construct_UEnum_EasyAds_AdNetworks_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAds_AdNetworks_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyAds_AdNetworks_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAds_AdNetworks_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyAds_AdNetworks()
	{
		if (!Z_Registration_Info_UEnum_AdNetworks.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AdNetworks.InnerSingleton, Z_Construct_UEnum_EasyAds_AdNetworks_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AdNetworks.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ChildDirectedTreatment;
	static UEnum* ChildDirectedTreatment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ChildDirectedTreatment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ChildDirectedTreatment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyAds_ChildDirectedTreatment, Z_Construct_UPackage__Script_EasyAds(), TEXT("ChildDirectedTreatment"));
		}
		return Z_Registration_Info_UEnum_ChildDirectedTreatment.OuterSingleton;
	}
	template<> EASYADS_API UEnum* StaticEnum<ChildDirectedTreatment>()
	{
		return ChildDirectedTreatment_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyAds_ChildDirectedTreatment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyAds_ChildDirectedTreatment_Statics::Enumerators[] = {
		{ "ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED", (int64)ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED },
		{ "ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE", (int64)ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE },
		{ "ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE", (int64)ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyAds_ChildDirectedTreatment_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE.DisplayName", "TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE" },
		{ "TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE.Name", "ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE" },
		{ "TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE.DisplayName", "TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE" },
		{ "TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE.Name", "ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE" },
		{ "TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED.DisplayName", "TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED" },
		{ "TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED.Name", "ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyAds_ChildDirectedTreatment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyAds,
		nullptr,
		"ChildDirectedTreatment",
		"ChildDirectedTreatment",
		Z_Construct_UEnum_EasyAds_ChildDirectedTreatment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAds_ChildDirectedTreatment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyAds_ChildDirectedTreatment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAds_ChildDirectedTreatment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyAds_ChildDirectedTreatment()
	{
		if (!Z_Registration_Info_UEnum_ChildDirectedTreatment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ChildDirectedTreatment.InnerSingleton, Z_Construct_UEnum_EasyAds_ChildDirectedTreatment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ChildDirectedTreatment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_MaxAdContentRating;
	static UEnum* MaxAdContentRating_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_MaxAdContentRating.OuterSingleton)
		{
			Z_Registration_Info_UEnum_MaxAdContentRating.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyAds_MaxAdContentRating, Z_Construct_UPackage__Script_EasyAds(), TEXT("MaxAdContentRating"));
		}
		return Z_Registration_Info_UEnum_MaxAdContentRating.OuterSingleton;
	}
	template<> EASYADS_API UEnum* StaticEnum<MaxAdContentRating>()
	{
		return MaxAdContentRating_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyAds_MaxAdContentRating_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyAds_MaxAdContentRating_Statics::Enumerators[] = {
		{ "MaxAdContentRating::MAX_AD_CONTENT_RATING_G", (int64)MaxAdContentRating::MAX_AD_CONTENT_RATING_G },
		{ "MaxAdContentRating::MAX_AD_CONTENT_RATING_PG", (int64)MaxAdContentRating::MAX_AD_CONTENT_RATING_PG },
		{ "MaxAdContentRating::MAX_AD_CONTENT_RATING_T", (int64)MaxAdContentRating::MAX_AD_CONTENT_RATING_T },
		{ "MaxAdContentRating::MAX_AD_CONTENT_RATING_MA", (int64)MaxAdContentRating::MAX_AD_CONTENT_RATING_MA },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyAds_MaxAdContentRating_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MAX_AD_CONTENT_RATING_G.DisplayName", "MAX_AD_CONTENT_RATING_G" },
		{ "MAX_AD_CONTENT_RATING_G.Name", "MaxAdContentRating::MAX_AD_CONTENT_RATING_G" },
		{ "MAX_AD_CONTENT_RATING_MA.DisplayName", "MAX_AD_CONTENT_RATING_MA" },
		{ "MAX_AD_CONTENT_RATING_MA.Name", "MaxAdContentRating::MAX_AD_CONTENT_RATING_MA" },
		{ "MAX_AD_CONTENT_RATING_PG.DisplayName", "MAX_AD_CONTENT_RATING_PG" },
		{ "MAX_AD_CONTENT_RATING_PG.Name", "MaxAdContentRating::MAX_AD_CONTENT_RATING_PG" },
		{ "MAX_AD_CONTENT_RATING_T.DisplayName", "MAX_AD_CONTENT_RATING_T" },
		{ "MAX_AD_CONTENT_RATING_T.Name", "MaxAdContentRating::MAX_AD_CONTENT_RATING_T" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyAds_MaxAdContentRating_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyAds,
		nullptr,
		"MaxAdContentRating",
		"MaxAdContentRating",
		Z_Construct_UEnum_EasyAds_MaxAdContentRating_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAds_MaxAdContentRating_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyAds_MaxAdContentRating_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAds_MaxAdContentRating_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyAds_MaxAdContentRating()
	{
		if (!Z_Registration_Info_UEnum_MaxAdContentRating.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_MaxAdContentRating.InnerSingleton, Z_Construct_UEnum_EasyAds_MaxAdContentRating_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_MaxAdContentRating.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UnderAgeOfConsent;
	static UEnum* UnderAgeOfConsent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UnderAgeOfConsent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UnderAgeOfConsent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyAds_UnderAgeOfConsent, Z_Construct_UPackage__Script_EasyAds(), TEXT("UnderAgeOfConsent"));
		}
		return Z_Registration_Info_UEnum_UnderAgeOfConsent.OuterSingleton;
	}
	template<> EASYADS_API UEnum* StaticEnum<UnderAgeOfConsent>()
	{
		return UnderAgeOfConsent_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyAds_UnderAgeOfConsent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyAds_UnderAgeOfConsent_Statics::Enumerators[] = {
		{ "UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE", (int64)UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE },
		{ "UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE", (int64)UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE },
		{ "UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED", (int64)UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyAds_UnderAgeOfConsent_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE.DisplayName", "TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE" },
		{ "TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE.Name", "UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE" },
		{ "TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE.DisplayName", "TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE" },
		{ "TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE.Name", "UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE" },
		{ "TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED.DisplayName", "TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED" },
		{ "TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED.Name", "UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyAds_UnderAgeOfConsent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyAds,
		nullptr,
		"UnderAgeOfConsent",
		"UnderAgeOfConsent",
		Z_Construct_UEnum_EasyAds_UnderAgeOfConsent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAds_UnderAgeOfConsent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyAds_UnderAgeOfConsent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyAds_UnderAgeOfConsent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyAds_UnderAgeOfConsent()
	{
		if (!Z_Registration_Info_UEnum_UnderAgeOfConsent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UnderAgeOfConsent.InnerSingleton, Z_Construct_UEnum_EasyAds_UnderAgeOfConsent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UnderAgeOfConsent.InnerSingleton;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execIsAdNetworkConsent)
	{
		P_GET_ENUM(AdNetworks,Z_Param_adnetwork);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsAdNetworkConsent(AdNetworks(Z_Param_adnetwork));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execSetMaxAdContentRating)
	{
		P_GET_ENUM(MaxAdContentRating,Z_Param_setting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyAdsLibrary::SetMaxAdContentRating(MaxAdContentRating(Z_Param_setting));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execSetTagForUnderAgeOfConsent)
	{
		P_GET_UBOOL(Z_Param_underAgeOfConsent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyAdsLibrary::SetTagForUnderAgeOfConsent(Z_Param_underAgeOfConsent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execSetTagForChildDirectedTreatment)
	{
		P_GET_UBOOL(Z_Param_forChild);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyAdsLibrary::SetTagForChildDirectedTreatment(Z_Param_forChild);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execUMPResetConsentInformation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyAdsLibrary::UMPResetConsentInformation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execIsAdmobInitlized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsAdmobInitlized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execIsCustomRewardedVideoAdsReady)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_adUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsCustomRewardedVideoAdsReady(Z_Param_adUnit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execIsCustomInterstitialReady)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_adUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsCustomInterstitialReady(Z_Param_adUnit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execLaunchMediationTestSuite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyAdsLibrary::LaunchMediationTestSuite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execIsRewardedVideoReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsRewardedVideoReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execIsInterstitialReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsInterstitialReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execIsBannerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsBannerReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execHideCustomBanner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyAdsLibrary::HideCustomBanner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execHideBanner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyAdsLibrary::HideBanner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execShowCustomBanner)
	{
		P_GET_UBOOL(Z_Param_isOnBottom);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyAdsLibrary::ShowCustomBanner(Z_Param_isOnBottom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEasyAdsLibrary::execShowBanner)
	{
		P_GET_UBOOL(Z_Param_isOnBottom);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEasyAdsLibrary::ShowBanner(Z_Param_isOnBottom);
		P_NATIVE_END;
	}
	void UEasyAdsLibrary::StaticRegisterNativesUEasyAdsLibrary()
	{
		UClass* Class = UEasyAdsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideBanner", &UEasyAdsLibrary::execHideBanner },
			{ "HideCustomBanner", &UEasyAdsLibrary::execHideCustomBanner },
			{ "IsAdmobInitlized", &UEasyAdsLibrary::execIsAdmobInitlized },
			{ "IsAdNetworkConsent", &UEasyAdsLibrary::execIsAdNetworkConsent },
			{ "IsBannerReady", &UEasyAdsLibrary::execIsBannerReady },
			{ "IsCustomInterstitialReady", &UEasyAdsLibrary::execIsCustomInterstitialReady },
			{ "IsCustomRewardedVideoAdsReady", &UEasyAdsLibrary::execIsCustomRewardedVideoAdsReady },
			{ "IsInterstitialReady", &UEasyAdsLibrary::execIsInterstitialReady },
			{ "IsRewardedVideoReady", &UEasyAdsLibrary::execIsRewardedVideoReady },
			{ "LaunchMediationTestSuite", &UEasyAdsLibrary::execLaunchMediationTestSuite },
			{ "SetMaxAdContentRating", &UEasyAdsLibrary::execSetMaxAdContentRating },
			{ "SetTagForChildDirectedTreatment", &UEasyAdsLibrary::execSetTagForChildDirectedTreatment },
			{ "SetTagForUnderAgeOfConsent", &UEasyAdsLibrary::execSetTagForUnderAgeOfConsent },
			{ "ShowBanner", &UEasyAdsLibrary::execShowBanner },
			{ "ShowCustomBanner", &UEasyAdsLibrary::execShowCustomBanner },
			{ "UMPResetConsentInformation", &UEasyAdsLibrary::execUMPResetConsentInformation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "Comment", "/**\n\x09* hide  banner\n\x09* @param\x09""adType\x09\x09\x09the  ads type\n\x09*/" },
		{ "DisplayName", "HideBanner" },
		{ "Keywords", "EasyAds Hide Banner" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "ToolTip", "hide  banner\n@param        adType                  the  ads type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "HideBanner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_HideBanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_HideCustomBanner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_HideCustomBanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "HideCustomBanner" },
		{ "Keywords", "EasyAds Hide Banner" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_HideCustomBanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "HideCustomBanner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_HideCustomBanner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_HideCustomBanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_HideCustomBanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_HideCustomBanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics
	{
		struct EasyAdsLibrary_eventIsAdmobInitlized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventIsAdmobInitlized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventIsAdmobInitlized_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "IsAdmobInitlized" },
		{ "Keywords", "EasyAds IsAdmobInitlize" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "IsAdmobInitlized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::EasyAdsLibrary_eventIsAdmobInitlized_Parms), Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics
	{
		struct EasyAdsLibrary_eventIsAdNetworkConsent_Parms
		{
			AdNetworks adnetwork;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_adnetwork_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_adnetwork;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::NewProp_adnetwork_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::NewProp_adnetwork = { "adnetwork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EasyAdsLibrary_eventIsAdNetworkConsent_Parms, adnetwork), Z_Construct_UEnum_EasyAds_AdNetworks, METADATA_PARAMS(nullptr, 0) }; // 4110745856
	void Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventIsAdNetworkConsent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventIsAdNetworkConsent_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::NewProp_adnetwork_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::NewProp_adnetwork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "IsAdNetworkConsent" },
		{ "Keywords", "EasyAds IsAdNetworkConsent" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "IsAdNetworkConsent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::EasyAdsLibrary_eventIsAdNetworkConsent_Parms), Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics
	{
		struct EasyAdsLibrary_eventIsBannerReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventIsBannerReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventIsBannerReady_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "Comment", "/**\n\x09* check is the banner is load finish\n\x09* @param\x09""adType\x09\x09\x09the  ads type\n\x09*/" },
		{ "DisplayName", "IsBannerAdsReady" },
		{ "Keywords", "EasyAds Check Banner Ads Ready" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "ToolTip", "check is the banner is load finish\n@param        adType                  the  ads type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "IsBannerReady", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::EasyAdsLibrary_eventIsBannerReady_Parms), Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics
	{
		struct EasyAdsLibrary_eventIsCustomInterstitialReady_Parms
		{
			FString adUnit;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_adUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_adUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::NewProp_adUnit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::NewProp_adUnit = { "adUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EasyAdsLibrary_eventIsCustomInterstitialReady_Parms, adUnit), METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::NewProp_adUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::NewProp_adUnit_MetaData)) };
	void Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventIsCustomInterstitialReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventIsCustomInterstitialReady_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::NewProp_adUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "IsCustomInterstitialAdsReady" },
		{ "Keywords", "EasyAds Check Custom Interstital Ads Ready" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "IsCustomInterstitialReady", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::EasyAdsLibrary_eventIsCustomInterstitialReady_Parms), Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics
	{
		struct EasyAdsLibrary_eventIsCustomRewardedVideoAdsReady_Parms
		{
			FString adUnit;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_adUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_adUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::NewProp_adUnit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::NewProp_adUnit = { "adUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EasyAdsLibrary_eventIsCustomRewardedVideoAdsReady_Parms, adUnit), METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::NewProp_adUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::NewProp_adUnit_MetaData)) };
	void Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventIsCustomRewardedVideoAdsReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventIsCustomRewardedVideoAdsReady_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::NewProp_adUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "IsCustomRewardedVideoAdsReady" },
		{ "Keywords", "EasyAds Check Custom RewardedVideo Ads Ready" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "IsCustomRewardedVideoAdsReady", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::EasyAdsLibrary_eventIsCustomRewardedVideoAdsReady_Parms), Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics
	{
		struct EasyAdsLibrary_eventIsInterstitialReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventIsInterstitialReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventIsInterstitialReady_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "Comment", "/**\n\x09* check is the interstitial is load finish\n\x09* @param\x09""adType\x09\x09\x09the  ads type\n\x09*/" },
		{ "DisplayName", "IsInterstitialAdsReady" },
		{ "Keywords", "EasyAds Check Interstital Ads Ready" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "ToolTip", "check is the interstitial is load finish\n@param        adType                  the  ads type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "IsInterstitialReady", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::EasyAdsLibrary_eventIsInterstitialReady_Parms), Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics
	{
		struct EasyAdsLibrary_eventIsRewardedVideoReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventIsRewardedVideoReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventIsRewardedVideoReady_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "Comment", "/**\n\x09* check is the rewardedvideo ads load finish\n\x09* @param\x09""adType\x09\x09\x09the  ads type\n\x09*/" },
		{ "DisplayName", "IsRewardedVideoAdsReady" },
		{ "Keywords", "EasyAds Check RewardedVideo Ads Ready" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "ToolTip", "check is the rewardedvideo ads load finish\n@param        adType                  the  ads type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "IsRewardedVideoReady", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::EasyAdsLibrary_eventIsRewardedVideoReady_Parms), Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "LaunchMediationTestSuite" },
		{ "Keywords", "EasyAds Launch Mediation TestSuite" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "LaunchMediationTestSuite", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics
	{
		struct EasyAdsLibrary_eventSetMaxAdContentRating_Parms
		{
			MaxAdContentRating setting;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_setting_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_setting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::NewProp_setting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::NewProp_setting = { "setting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EasyAdsLibrary_eventSetMaxAdContentRating_Parms, setting), Z_Construct_UEnum_EasyAds_MaxAdContentRating, METADATA_PARAMS(nullptr, 0) }; // 4156159164
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::NewProp_setting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::NewProp_setting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "SetMaxAdContentRating" },
		{ "Keywords", "EasyAds SetMaxAdContentRating" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "SetMaxAdContentRating", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::EasyAdsLibrary_eventSetMaxAdContentRating_Parms), Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics
	{
		struct EasyAdsLibrary_eventSetTagForChildDirectedTreatment_Parms
		{
			bool forChild;
		};
		static void NewProp_forChild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::NewProp_forChild_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventSetTagForChildDirectedTreatment_Parms*)Obj)->forChild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::NewProp_forChild = { "forChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventSetTagForChildDirectedTreatment_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::NewProp_forChild_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::NewProp_forChild,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "SetTagForChildDirectedTreatment" },
		{ "Keywords", "EasyAds SetTagForChildDirectedTreatment" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "SetTagForChildDirectedTreatment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::EasyAdsLibrary_eventSetTagForChildDirectedTreatment_Parms), Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics
	{
		struct EasyAdsLibrary_eventSetTagForUnderAgeOfConsent_Parms
		{
			bool underAgeOfConsent;
		};
		static void NewProp_underAgeOfConsent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_underAgeOfConsent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::NewProp_underAgeOfConsent_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventSetTagForUnderAgeOfConsent_Parms*)Obj)->underAgeOfConsent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::NewProp_underAgeOfConsent = { "underAgeOfConsent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventSetTagForUnderAgeOfConsent_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::NewProp_underAgeOfConsent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::NewProp_underAgeOfConsent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "SetTagForUnderAgeOfConsent" },
		{ "Keywords", "EasyAds SetTagForUnderAgeOfConsent" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "SetTagForUnderAgeOfConsent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::EasyAdsLibrary_eventSetTagForUnderAgeOfConsent_Parms), Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics
	{
		struct EasyAdsLibrary_eventShowBanner_Parms
		{
			bool isOnBottom;
		};
		static void NewProp_isOnBottom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isOnBottom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::NewProp_isOnBottom_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventShowBanner_Parms*)Obj)->isOnBottom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::NewProp_isOnBottom = { "isOnBottom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventShowBanner_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::NewProp_isOnBottom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::NewProp_isOnBottom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "Comment", "/**\n\x09* Show  banner\n\x09* @param\x09isOnBottom\x09\x09if the banner show on the bottom of the screen\n\x09*/" },
		{ "DisplayName", "ShowBanner" },
		{ "Keywords", "EasyAds Show Banner" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "ToolTip", "Show  banner\n@param        isOnBottom              if the banner show on the bottom of the screen" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "ShowBanner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::EasyAdsLibrary_eventShowBanner_Parms), Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics
	{
		struct EasyAdsLibrary_eventShowCustomBanner_Parms
		{
			bool isOnBottom;
		};
		static void NewProp_isOnBottom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isOnBottom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::NewProp_isOnBottom_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventShowCustomBanner_Parms*)Obj)->isOnBottom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::NewProp_isOnBottom = { "isOnBottom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EasyAdsLibrary_eventShowCustomBanner_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::NewProp_isOnBottom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::NewProp_isOnBottom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "ShowCustomBanner" },
		{ "Keywords", "EasyAds Show Banner" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "ShowCustomBanner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::EasyAdsLibrary_eventShowCustomBanner_Parms), Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_UMPResetConsentInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_UMPResetConsentInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds|GDPR" },
		{ "DisplayName", "UMPResetConsentInformation" },
		{ "Keywords", "EasyAds UMPResetConsentInformation" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_UMPResetConsentInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "UMPResetConsentInformation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_UMPResetConsentInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_UMPResetConsentInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_UMPResetConsentInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_UMPResetConsentInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEasyAdsLibrary);
	UClass* Z_Construct_UClass_UEasyAdsLibrary_NoRegister()
	{
		return UEasyAdsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEasyAdsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEasyAdsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEasyAdsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyAdsLibrary_HideBanner, "HideBanner" }, // 3625147639
		{ &Z_Construct_UFunction_UEasyAdsLibrary_HideCustomBanner, "HideCustomBanner" }, // 1490349415
		{ &Z_Construct_UFunction_UEasyAdsLibrary_IsAdmobInitlized, "IsAdmobInitlized" }, // 2639391170
		{ &Z_Construct_UFunction_UEasyAdsLibrary_IsAdNetworkConsent, "IsAdNetworkConsent" }, // 1554165887
		{ &Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady, "IsBannerReady" }, // 1443187790
		{ &Z_Construct_UFunction_UEasyAdsLibrary_IsCustomInterstitialReady, "IsCustomInterstitialReady" }, // 346249359
		{ &Z_Construct_UFunction_UEasyAdsLibrary_IsCustomRewardedVideoAdsReady, "IsCustomRewardedVideoAdsReady" }, // 3645069487
		{ &Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady, "IsInterstitialReady" }, // 1498015176
		{ &Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady, "IsRewardedVideoReady" }, // 2051932294
		{ &Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite, "LaunchMediationTestSuite" }, // 3922782256
		{ &Z_Construct_UFunction_UEasyAdsLibrary_SetMaxAdContentRating, "SetMaxAdContentRating" }, // 613403799
		{ &Z_Construct_UFunction_UEasyAdsLibrary_SetTagForChildDirectedTreatment, "SetTagForChildDirectedTreatment" }, // 349248416
		{ &Z_Construct_UFunction_UEasyAdsLibrary_SetTagForUnderAgeOfConsent, "SetTagForUnderAgeOfConsent" }, // 2255977987
		{ &Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner, "ShowBanner" }, // 2247916045
		{ &Z_Construct_UFunction_UEasyAdsLibrary_ShowCustomBanner, "ShowCustomBanner" }, // 3683752618
		{ &Z_Construct_UFunction_UEasyAdsLibrary_UMPResetConsentInformation, "UMPResetConsentInformation" }, // 3668950046
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyAdsLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EasyAdsLibrary.h" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEasyAdsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyAdsLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEasyAdsLibrary_Statics::ClassParams = {
		&UEasyAdsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEasyAdsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyAdsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEasyAdsLibrary()
	{
		if (!Z_Registration_Info_UClass_UEasyAdsLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEasyAdsLibrary.OuterSingleton, Z_Construct_UClass_UEasyAdsLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEasyAdsLibrary.OuterSingleton;
	}
	template<> EASYADS_API UClass* StaticClass<UEasyAdsLibrary>()
	{
		return UEasyAdsLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyAdsLibrary);
	UEasyAdsLibrary::~UEasyAdsLibrary() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_Statics::EnumInfo[] = {
		{ ConsentStatus_StaticEnum, TEXT("ConsentStatus"), &Z_Registration_Info_UEnum_ConsentStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1474213218U) },
		{ AdNetworks_StaticEnum, TEXT("AdNetworks"), &Z_Registration_Info_UEnum_AdNetworks, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4110745856U) },
		{ ChildDirectedTreatment_StaticEnum, TEXT("ChildDirectedTreatment"), &Z_Registration_Info_UEnum_ChildDirectedTreatment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 872422702U) },
		{ MaxAdContentRating_StaticEnum, TEXT("MaxAdContentRating"), &Z_Registration_Info_UEnum_MaxAdContentRating, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4156159164U) },
		{ UnderAgeOfConsent_StaticEnum, TEXT("UnderAgeOfConsent"), &Z_Registration_Info_UEnum_UnderAgeOfConsent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2856489857U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEasyAdsLibrary, UEasyAdsLibrary::StaticClass, TEXT("UEasyAdsLibrary"), &Z_Registration_Info_UClass_UEasyAdsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEasyAdsLibrary), 4241664358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_149425034(TEXT("/Script/EasyAds"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_EasyAdsLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
