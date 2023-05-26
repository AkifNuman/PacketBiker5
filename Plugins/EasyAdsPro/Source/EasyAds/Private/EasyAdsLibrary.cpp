/*
* EasyAds Pro - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/


#include "EasyAdsLibrary.h"
#include "EasyAds.h"
#include "AdmobMediation.h"

#if PLATFORM_ANDROID
bool AndroidIsCustomInterstitialReady(const FString& adUnit);
bool AndroidIsCustomRewardedVideoReady(const FString& adUnit);
void AndroidUMPResetConsent();

void AndroidSetTagForChildDirectedTreatment(int setting);
void AndroidSetTagForUnderAgeOfConsent(int setting);
void AndroidSetMaxAdContentRating(int setting);
bool AndroidIsAdNetworkConsent(AdNetworks adnetwork);

void AndroidShowCustomBanner(bool isBottom);
void AndroidHideCustomBanner();

#endif

#if PLATFORM_IOS
extern "C" bool IOS_IsCustomInterstitialReady(FString adUnit);
extern "C" bool IOS_IsCustomRewardedVideoReady(FString adUnit);

extern "C" bool IOS_IsAdmobInitlized();
extern "C" void IOS_UMPResetConsent();

extern "C" void IOS_SetTagForChildDirectedTreatment(bool forChild);
extern "C" void IOS_SetTagForUnderAgeOfConsent(bool underAgeOfConsent);
extern "C" void IOS_SetMaxAdContentRating(int rating);
extern "C" bool IOS_IsAdNetworkConsent(AdNetworks adnetwork);

extern "C" void IOS_ShowCustomBanner(bool isBottom);
extern "C" void IOS_HideCustomBanner();

#endif


void UEasyAdsLibrary::ShowBanner(bool isOnBottom)
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	mediation.ShowBanner(isOnBottom);
}


void UEasyAdsLibrary::HideBanner()
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	mediation.HideBanner();
}

void UEasyAdsLibrary::ShowCustomBanner(bool isOnBottom)
{
#if PLATFORM_ANDROID
	AndroidShowCustomBanner(isOnBottom);
#endif

#if PLATFORM_IOS
	IOS_ShowCustomBanner(isOnBottom);
#endif
}

void UEasyAdsLibrary::HideCustomBanner()
{
#if PLATFORM_ANDROID
	AndroidHideCustomBanner();
#endif

#if PLATFORM_IOS
	IOS_HideCustomBanner();
#endif
}



bool UEasyAdsLibrary::IsBannerReady()
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return false;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	return mediation.IsBannerReady();
}

bool UEasyAdsLibrary::IsInterstitialReady()
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return false;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	return mediation.IsInterstitalReady();
}

bool UEasyAdsLibrary::IsCustomInterstitialReady(const FString& adUnit)
{
#if PLATFORM_ANDROID
	return AndroidIsCustomInterstitialReady(adUnit);
#endif

#if PLATFORM_IOS
	return IOS_IsCustomInterstitialReady(adUnit);
#endif

	return false;
}

bool UEasyAdsLibrary::IsCustomRewardedVideoAdsReady(const FString& adUnit)
{
#if PLATFORM_ANDROID
	return AndroidIsCustomRewardedVideoReady(adUnit);
#endif

#if PLATFORM_IOS
	return IOS_IsCustomRewardedVideoReady(adUnit);
#endif
	
	return false;
}

bool UEasyAdsLibrary::IsRewardedVideoReady()
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return false;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	return mediation.IsRewardedVideoReady();
}

void UEasyAdsLibrary::LaunchMediationTestSuite()
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	return mediation.LaunchTestSuite();
}



bool UEasyAdsLibrary::IsAdmobInitlized()
{
#if PLATFORM_IOS
	return IOS_IsAdmobInitlized();
#endif
	
	return true;
}

void UEasyAdsLibrary::UMPResetConsentInformation()
{
#if PLATFORM_ANDROID
	AndroidUMPResetConsent();
#endif

#if PLATFORM_IOS
    IOS_UMPResetConsent();
#endif
}


void UEasyAdsLibrary::SetTagForChildDirectedTreatment(bool forChild)
{
#if PLATFORM_ANDROID
    if(forChild) {
        AndroidSetTagForChildDirectedTreatment((int)ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE);
    } else {
        AndroidSetTagForChildDirectedTreatment((int)ChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE);
    }
	
#endif
    
#if PLATFORM_IOS
    IOS_SetTagForChildDirectedTreatment(forChild);
#endif
}

void UEasyAdsLibrary::SetTagForUnderAgeOfConsent(bool underAgeOfConsent)
{
#if PLATFORM_ANDROID
    if(underAgeOfConsent) {
        AndroidSetTagForUnderAgeOfConsent((int)UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE);
    } else {
        AndroidSetTagForUnderAgeOfConsent((int)UnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE);
    }
	
#endif
    
#if PLATFORM_IOS
    IOS_SetTagForUnderAgeOfConsent(underAgeOfConsent);
#endif
}

void UEasyAdsLibrary::SetMaxAdContentRating(MaxAdContentRating setting)
{
#if PLATFORM_ANDROID
	AndroidSetMaxAdContentRating((int)setting);
#endif
    
#if PLATFORM_IOS
    IOS_SetMaxAdContentRating((int)setting);
#endif
}

int AdNetworkToVendor(AdNetworks adnetwork) {
	if (adnetwork == AdNetworks::Applovin) {
		return 1301;
	}else if (adnetwork == AdNetworks::Chartboost) {
		return 2898;
	}else if (adnetwork == AdNetworks::Facebook) {
		return 89;
	}else if (adnetwork == AdNetworks::Unity) {
		return 3234;
	}else if (adnetwork == AdNetworks::Vungle) {
		return 2707;
	}
	
	return 0;
}

bool UEasyAdsLibrary::IsAdNetworkConsent(AdNetworks adnetwork) {
#if PLATFORM_ANDROID
	return AndroidIsAdNetworkConsent(adnetwork);
#endif
	
#if PLATFORM_IOS
	return IOS_IsAdNetworkConsent(adnetwork);
#endif

	return true;
}