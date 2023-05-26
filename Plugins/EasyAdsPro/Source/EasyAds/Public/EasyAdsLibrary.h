/*
* EasyAds Pro - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EasyAdsLibrary.generated.h"


UENUM(BlueprintType)
enum class ConsentStatus :uint8
{
	INVALID = 0 UMETA(DisplayName = "INVALID"),

	UNKNOWN = 1 UMETA(DisplayName = "UNKNOWN"),

	NON_PERSONALIZED = 2 UMETA(DisplayName = "NON_PERSONALIZED"),

	PERSONALIZED = 3 UMETA(DisplayName = "PERSONALIZED"),
};

UENUM(BlueprintType)
enum class AdNetworks :uint8
{
	Admob = 0 UMETA(DisplayName = "Admob"),

	Unity = 1 UMETA(DisplayName = "Unity"),

	Chartboost = 2 UMETA(DisplayName = "Chartboost"),

	Vungle = 3 UMETA(DisplayName = "Vungle"),

	Applovin = 4 UMETA(DisplayName = "Applovin"),

	Facebook = 5 UMETA(DisplayName = "Facebook"),
};


UENUM(BlueprintType)
enum class ChildDirectedTreatment :uint8
{
	TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED = 0 UMETA(DisplayName = "TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED"),

	TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE = 1 UMETA(DisplayName = "TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE"),

	TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE = 2 UMETA(DisplayName = "TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE"),
};

UENUM(BlueprintType)
enum class MaxAdContentRating :uint8
{
	MAX_AD_CONTENT_RATING_G = 0 UMETA(DisplayName = "MAX_AD_CONTENT_RATING_G"),

	MAX_AD_CONTENT_RATING_PG = 1 UMETA(DisplayName = "MAX_AD_CONTENT_RATING_PG"),

	MAX_AD_CONTENT_RATING_T = 2 UMETA(DisplayName = "MAX_AD_CONTENT_RATING_T"),

	MAX_AD_CONTENT_RATING_MA = 3 UMETA(DisplayName = "MAX_AD_CONTENT_RATING_MA"),
};


UENUM(BlueprintType)
enum class UnderAgeOfConsent :uint8
{
	TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE = 0 UMETA(DisplayName = "TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE"),

	TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE = 1 UMETA(DisplayName = "TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE"),

	TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED = 2 UMETA(DisplayName = "TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED"),
};

int AdNetworkToVendor(AdNetworks adnetwork);

/**
 * 
 */
UCLASS()
class EASYADS_API UEasyAdsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:

	/**
	* Show  banner
	* @param	isOnBottom		if the banner show on the bottom of the screen
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ShowBanner", Keywords = "EasyAds Show Banner"), Category = "EasyAds")
		static void ShowBanner(bool isOnBottom);


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ShowCustomBanner", Keywords = "EasyAds Show Banner"), Category = "EasyAds")
		static void ShowCustomBanner(bool isOnBottom);

	/**
	* hide  banner
	* @param	adType			the  ads type
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "HideBanner", Keywords = "EasyAds Hide Banner"), Category = "EasyAds")
		static void HideBanner();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "HideCustomBanner", Keywords = "EasyAds Hide Banner"), Category = "EasyAds")
		static void HideCustomBanner();

	/**
	* show interstitial ads
	* @param	adType			the  ads type
	*/
	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "ShowInterstitial", Keywords = "AdCollection Show Interstitial Ads"), Category = "AdCollection")
	//static void ShowInterstitial();

	/**
	* check is the banner is load finish
	* @param	adType			the  ads type
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "IsBannerAdsReady", Keywords = "EasyAds Check Banner Ads Ready"), Category = "EasyAds")
		static bool IsBannerReady();

	/**
	* check is the interstitial is load finish
	* @param	adType			the  ads type
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "IsInterstitialAdsReady", Keywords = "EasyAds Check Interstital Ads Ready"), Category = "EasyAds")
		static bool IsInterstitialReady();

	/**
	* check is the rewardedvideo ads load finish
	* @param	adType			the  ads type
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "IsRewardedVideoAdsReady", Keywords = "EasyAds Check RewardedVideo Ads Ready"), Category = "EasyAds")
		static bool IsRewardedVideoReady();


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "LaunchMediationTestSuite", Keywords = "EasyAds Launch Mediation TestSuite"), Category = "EasyAds")
	static void LaunchMediationTestSuite();
	

	UFUNCTION(BlueprintPure, meta = (DisplayName = "IsCustomInterstitialAdsReady", Keywords = "EasyAds Check Custom Interstital Ads Ready"), Category = "EasyAds")
	static bool IsCustomInterstitialReady(const FString& adUnit);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "IsCustomRewardedVideoAdsReady", Keywords = "EasyAds Check Custom RewardedVideo Ads Ready"), Category = "EasyAds")
	static bool IsCustomRewardedVideoAdsReady(const FString& adUnit);
	
	
	UFUNCTION(BlueprintPure, meta = (DisplayName = "IsAdmobInitlized", Keywords = "EasyAds IsAdmobInitlize"), Category = "EasyAds")
	static bool IsAdmobInitlized();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "UMPResetConsentInformation", Keywords = "EasyAds UMPResetConsentInformation"), Category = "EasyAds|GDPR")
	static void UMPResetConsentInformation();


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetTagForChildDirectedTreatment", Keywords = "EasyAds SetTagForChildDirectedTreatment"), Category = "EasyAds")
	static void SetTagForChildDirectedTreatment(bool forChild);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetTagForUnderAgeOfConsent", Keywords = "EasyAds SetTagForUnderAgeOfConsent"), Category = "EasyAds")
	static void SetTagForUnderAgeOfConsent(bool underAgeOfConsent);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetMaxAdContentRating", Keywords = "EasyAds SetMaxAdContentRating"), Category = "EasyAds")
	static void SetMaxAdContentRating(MaxAdContentRating setting);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "IsAdNetworkConsent", Keywords = "EasyAds IsAdNetworkConsent"), Category = "EasyAds")
	static bool IsAdNetworkConsent(AdNetworks adnetwork);
};
