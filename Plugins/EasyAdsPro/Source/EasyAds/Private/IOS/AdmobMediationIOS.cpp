/*
* EasyAds Pro - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/
#include "AdmobMediation.h"
#include "EasyAds.h"
#include "IOSAppDelegate.h"
#include "Misc/ConfigCacheIni.h"
#include "Async/TaskGraphInterfaces.h"
#import "AdsUtil.h"
#import <GoogleMobileAdsMediationTestSuite/GoogleMobileAdsMediationTestSuite.h>

#ifdef WITH_IOS14_SUPPORT
#import <AppTrackingTransparency/AppTrackingTransparency.h>
#endif

#include "LoadCustomBannerAd.h"
#include "LoadCustomInterstitialAd.h"
#include "ShowCustomInterstitialAd.h"
#include "LoadCustomRewardedVideoAd.h"
#include "PlayCustomRewardedVideoAd.h"
#include "RequestConsentInfoUpdate.h"
#include "RequestUserConfirmConsent.h"
#include "UMPRequestConsentInfoUpdate.h"


extern ULoadCustomBannerAd* g_CustomBannerAd;

AdmobMediation::AdmobMediation()
{
}

static void IOS_OnUserConfirmConsent(int status, bool preferAdsFree)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.OnUserConfirmConsent"), STAT_FSimpleDelegateGraphTask_OnUserConfirmConsent, STATGROUP_TaskGraphTasks);
	
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FPlatformMisc::LowLevelOutputDebugStringf(TEXT("IOS_OnUserConfirmConsent\n"));
				URequestUserConfirmConsent::OnUserConfirmConsent(status, preferAdsFree);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_OnUserConfirmConsent),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_OnUMPConsentInfoUpdate(bool isSuccess, NSString* err)
{
    DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.OnUMPConsentInfoUpdate"), STAT_FSimpleDelegateGraphTask_OnUMPConsentInfoUpdate, STATGROUP_TaskGraphTasks);
    
    FString strError = UTF8_TO_TCHAR([err cStringUsingEncoding : NSUTF8StringEncoding]);
    
    FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
        FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
            {
                FPlatformMisc::LowLevelOutputDebugStringf(TEXT("IOS nativeOnUMPConsentResult;%d\n"), (int)isSuccess);
                UUMPRequestConsentInfoUpdate::OnConsentUpdateCallback(isSuccess, strError);
            }),
        GET_STATID(STAT_FSimpleDelegateGraphTask_OnUMPConsentInfoUpdate),
                nullptr,
                ENamedThreads::GameThread
                );
}

static void IOS_OnConsentInfoUpdate(NSString* publisherId, bool success, int status)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.OnConsentInfoUpdate"), STAT_FSimpleDelegateGraphTask_OnConsentInfoUpdate, STATGROUP_TaskGraphTasks);
	FString strPublisherId = UTF8_TO_TCHAR([publisherId cStringUsingEncoding : NSUTF8StringEncoding]);
	
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FPlatformMisc::LowLevelOutputDebugStringf(TEXT("IOS_OnConsentInfoUpdate\n"));
				URequestConsentInfoUpdate::OnConsentUpdateCallback(strPublisherId, (bool)success, status);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_OnConsentInfoUpdate),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobCustomBannerLoadResult(bool isSuccess, NSString* errmsg)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.CustomBannerLoadResult"), STAT_FSimpleDelegateGraphTask_CustomBannerLoadResult, STATGROUP_TaskGraphTasks);
	FString strErrMessage = UTF8_TO_TCHAR([errmsg cStringUsingEncoding : NSUTF8StringEncoding]);


	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				if (isSuccess)
				{
					g_CustomBannerAd->OnLoadCompleteCallback();
				}
				else
				{
					g_CustomBannerAd->OnLoadFailCallback(strErrMessage);
				}
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_CustomBannerLoadResult),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobCustomInterstitialLoadResult(NSString* adUnit, bool isSuccess, NSString* errmsg)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.CustomInterstitialLoadResult"), STAT_FSimpleDelegateGraphTask_CustomInterstitialLoadResult, STATGROUP_TaskGraphTasks);
	FString strAdUnit = UTF8_TO_TCHAR([adUnit cStringUsingEncoding : NSUTF8StringEncoding]);
	FString strErrMessage = UTF8_TO_TCHAR([errmsg cStringUsingEncoding : NSUTF8StringEncoding]);


	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				if (isSuccess)
				{
					ULoadCustomInterstitialAd::OnLoadCompleteCallback(strAdUnit);
				}
				else
				{
					ULoadCustomInterstitialAd::OnLoadFailCallback(strAdUnit, strErrMessage);
				}
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_CustomInterstitialLoadResult),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobCustomRewardedVideoLoadResult(NSString* adUnit, bool isSuccess, NSString* errmsg)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.CustomRewardedVideoLoadResult"), STAT_FSimpleDelegateGraphTask_CustomRewardedVideoLoadResult, STATGROUP_TaskGraphTasks);
	FString strAdUnit = UTF8_TO_TCHAR([adUnit cStringUsingEncoding : NSUTF8StringEncoding]);
	FString strErrMessage = UTF8_TO_TCHAR([errmsg cStringUsingEncoding : NSUTF8StringEncoding]);

	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				if (isSuccess)
				{
					ULoadCustomRewardedVideoAd::OnLoadCompleteCallback(strAdUnit);
				}
				else
				{
					ULoadCustomRewardedVideoAd::OnLoadFailCallback(strAdUnit, strErrMessage);
				}
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_CustomRewardedVideoLoadResult),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobCustomInterstitialClick(NSString* adUnit)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.CustomInterstitialClick"), STAT_FSimpleDelegateGraphTask_CustomInterstitialClick, STATGROUP_TaskGraphTasks);
	FString strAdUnit = UTF8_TO_TCHAR([adUnit cStringUsingEncoding : NSUTF8StringEncoding]);
	
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				UShowCustomInterstitialAd::OnClickCallback(strAdUnit);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_CustomInterstitialClick),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobCustomInterstitialShow(NSString* adUnit)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.CustomInterstitialShow"), STAT_FSimpleDelegateGraphTask_CustomInterstitialShow, STATGROUP_TaskGraphTasks);
	FString strAdUnit = UTF8_TO_TCHAR([adUnit cStringUsingEncoding : NSUTF8StringEncoding]);

	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				UShowCustomInterstitialAd::OnShowCallback(strAdUnit);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_CustomInterstitialShow),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobCustomInterstitialClose(NSString* adUnit)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.CustomInterstitialClose"), STAT_FSimpleDelegateGraphTask_CustomInterstitialClose, STATGROUP_TaskGraphTasks);
	FString strAdUnit = UTF8_TO_TCHAR([adUnit cStringUsingEncoding : NSUTF8StringEncoding]);

	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				UShowCustomInterstitialAd::OnCloseCallback(strAdUnit);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_CustomInterstitialClose),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobCustomRewardedVideoComplete(NSString* adUnit, NSString* type, int amount)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.CustomRewardedVideoComplete"), STAT_FSimpleDelegateGraphTask_CustomRewardedVideoComplete, STATGROUP_TaskGraphTasks);
	FString strAdUnit = UTF8_TO_TCHAR([adUnit cStringUsingEncoding : NSUTF8StringEncoding]);
	FString strType = UTF8_TO_TCHAR([type cStringUsingEncoding : NSUTF8StringEncoding]);

	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				UPlayCustomRewardedVideoAd::OnEarnCallback(strAdUnit, strType, amount);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_CustomRewardedVideoComplete),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobCustomRewardedVideoClose(NSString* adUnit)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.CustomRewardedVideoClose"), STAT_FSimpleDelegateGraphTask_CustomRewardedVideoClose, STATGROUP_TaskGraphTasks);
	FString strAdUnit = UTF8_TO_TCHAR([adUnit cStringUsingEncoding : NSUTF8StringEncoding]);

	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				UPlayCustomRewardedVideoAd::OnCloseCallback(strAdUnit);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_CustomRewardedVideoClose),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobCustomRewardedVideoFail(NSString* adUnit, NSString* errmsg)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.CustomRewardedVideoClose"), STAT_FSimpleDelegateGraphTask_CustomRewardedVideoClose, STATGROUP_TaskGraphTasks);
	FString strAdUnit = UTF8_TO_TCHAR([adUnit cStringUsingEncoding : NSUTF8StringEncoding]);
	FString strErrMessage = UTF8_TO_TCHAR([errmsg cStringUsingEncoding : NSUTF8StringEncoding]);

	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				UPlayCustomRewardedVideoAd::OnFailCallback(strAdUnit, strErrMessage);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_CustomRewardedVideoClose),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdMobRcvDebugMessage(NSString* debugMessage)
{
#if !UE_BUILD_SHIPPING
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.nativeRcvDebugMessage"), STAT_FSimpleDelegateGraphTask_nativeRcvDebugMessage, STATGROUP_TaskGraphTasks);
	FString strDebugMessage = UTF8_TO_TCHAR([debugMessage cStringUsingEncoding : NSUTF8StringEncoding]);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerEasyAdsDebugMessageDelegates(strDebugMessage);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_nativeRcvDebugMessage),
				nullptr,
				ENamedThreads::GameThread
				);
#endif
}

static void IOS_AdMobPlayComplete(NSString* type, int amount)
{
	FString strType = UTF8_TO_TCHAR([type cStringUsingEncoding : NSUTF8StringEncoding]);
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.nativePlayRewardedComplete"), STAT_FSimpleDelegateGraphTask_nativePlayRewardedComplete, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerPlayRewardCompleteDelegates(strType, (int32)amount);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_nativePlayRewardedComplete),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobRewardClose()
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.nativeRewardClose"), STAT_FSimpleDelegateGraphTask_nativeRewardClose, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerPlayRewardClosedDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_nativeRewardClose),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobInterstitialShow()
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.interstitialShow"), STAT_FSimpleDelegateGraphTask_interstitialShow, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerInterstitialShowDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_interstitialShow),
				nullptr,
				ENamedThreads::GameThread
				);
}
static void IOS_AdmobInterstitialClick()
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.interstitialClick"), STAT_FSimpleDelegateGraphTask_interstitialClick, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerInterstitialClickDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_interstitialClick),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobInterstitialClose()
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.interstitialClose"), STAT_FSimpleDelegateGraphTask_interstitialClose, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerInterstitialClosedDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_interstitialClose),
				nullptr,
				ENamedThreads::GameThread
				);
}

void AdmobMediation::init()
{
	FString appId;
	GConfig->GetString(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("IOSAppId"), appId, GEngineIni);

	FString bannerUnit;
	GConfig->GetString(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("IOSBannerUnit"), bannerUnit, GEngineIni);

	FString InterstitalUnit;
	GConfig->GetString(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("IOSInterstitialUnit"), InterstitalUnit, GEngineIni);

	FString rewardedUnit;
	GConfig->GetString(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("IOSRewardedVideoAdUnit"), rewardedUnit, GEngineIni);

	//FString testDevice;
	TArray<FString> testDeviceList;
	GConfig->GetArray(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("IOSTestDeviceList"), testDeviceList, GEngineIni);
    
    FString simulateLocation;
    GConfig->GetString(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("SimulateIOSLocation"), simulateLocation, GEngineIni);
    

	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;

	NSMutableArray<NSString*>* nsTestDeviceList = [NSMutableArray<NSString*> new];
	for (size_t i = 0; i < testDeviceList.Num(); i++)
	{
		[nsTestDeviceList addObject : [NSString stringWithFString : testDeviceList[i]]];
		NSLog(@"MobileAds AddTestDevice : %@",[NSString stringWithFString : testDeviceList[i]]);
	}

	dispatch_async(dispatch_get_main_queue(), ^{

#ifdef WITH_IOS14_SUPPORT
		if (NSClassFromString(@"ATTrackingManager") != NULL)
		{
			[ATTrackingManager requestTrackingAuthorizationWithCompletionHandler : ^ (ATTrackingManagerAuthorizationStatus status) {

				[[AdMobHelper GetDelegate] InitSDK:curViewController AppID : [NSString stringWithFString : appId] testDevice : nsTestDeviceList
					simulateLocation : [NSString stringWithFString : simulateLocation]
					BannerUnit : [NSString stringWithFString : bannerUnit]
					InterstitalUnit : [NSString stringWithFString : InterstitalUnit] RewardedUnit : [NSString stringWithFString : rewardedUnit]
					callback : &IOS_AdMobPlayComplete rewardClose : &IOS_AdmobRewardClose  interstitialShow : &IOS_AdmobInterstitialShow
					interstitialClick : &IOS_AdmobInterstitialClick
					interstitialClose : IOS_AdmobInterstitialClose
					rcvDebugMessage : &IOS_AdMobRcvDebugMessage
					customBannerLoadResult :&IOS_AdmobCustomBannerLoadResult
					customInterstitialLoadResult : &IOS_AdmobCustomInterstitialLoadResult
					customRewardedVideoLoadResult : &IOS_AdmobCustomRewardedVideoLoadResult
					customInterstitialClick : &IOS_AdmobCustomInterstitialClick
					customInterstitialShow : &IOS_AdmobCustomInterstitialShow
					customInterstitialClose : &IOS_AdmobCustomInterstitialClose
					customRewardedComplete : &IOS_AdmobCustomRewardedVideoComplete
					customRewardedClos : &IOS_AdmobCustomRewardedVideoClose
					customRewardedFail : &IOS_AdmobCustomRewardedVideoFail
					userConfirmConsent : &IOS_OnUserConfirmConsent
					consentInfoUpdate : &IOS_OnConsentInfoUpdate
					umpConsentInfoResult : &IOS_OnUMPConsentInfoUpdate];
                
                
                [[AdMobHelper GetDelegate] SetAppTrackingStatus:status];
			}];
		}
		else
		{
			[[AdMobHelper GetDelegate] InitSDK:curViewController AppID : [NSString stringWithFString : appId] testDevice : nsTestDeviceList
                simulateLocation : [NSString stringWithFString : simulateLocation]
				BannerUnit : [NSString stringWithFString : bannerUnit]
				InterstitalUnit : [NSString stringWithFString : InterstitalUnit] RewardedUnit : [NSString stringWithFString : rewardedUnit]
				callback : &IOS_AdMobPlayComplete rewardClose : &IOS_AdmobRewardClose  interstitialShow : &IOS_AdmobInterstitialShow
				interstitialClick : &IOS_AdmobInterstitialClick
				interstitialClose : IOS_AdmobInterstitialClose
				rcvDebugMessage : &IOS_AdMobRcvDebugMessage
				customBannerLoadResult : &IOS_AdmobCustomBannerLoadResult
				customInterstitialLoadResult : &IOS_AdmobCustomInterstitialLoadResult
				customRewardedVideoLoadResult : &IOS_AdmobCustomRewardedVideoLoadResult
				customInterstitialClick : &IOS_AdmobCustomInterstitialClick
				customInterstitialShow : &IOS_AdmobCustomInterstitialShow
				customInterstitialClose : &IOS_AdmobCustomInterstitialClose
				customRewardedComplete : &IOS_AdmobCustomRewardedVideoComplete
				customRewardedClos : &IOS_AdmobCustomRewardedVideoClose
				customRewardedFail : &IOS_AdmobCustomRewardedVideoFail
				userConfirmConsent : &IOS_OnUserConfirmConsent
				consentInfoUpdate : &IOS_OnConsentInfoUpdate
                umpConsentInfoResult:&IOS_OnUMPConsentInfoUpdate];

		}
		
#else
			[[AdMobHelper GetDelegate] InitSDK:curViewController AppID : [NSString stringWithFString : appId] testDevice : nsTestDeviceList
            simulateLocation : [NSString stringWithFString : simulateLocation]
			BannerUnit : [NSString stringWithFString : bannerUnit]
			InterstitalUnit : [NSString stringWithFString : InterstitalUnit] RewardedUnit : [NSString stringWithFString : rewardedUnit]
			callback : &IOS_AdMobPlayComplete rewardClose : &IOS_AdmobRewardClose  interstitialShow : &IOS_AdmobInterstitialShow
			interstitialClick : &IOS_AdmobInterstitialClick
			interstitialClose : IOS_AdmobInterstitialClose
		rcvDebugMessage : &IOS_AdMobRcvDebugMessage
		customBannerLoadResult : &IOS_AdmobCustomBannerLoadResult
			customInterstitialLoadResult : &IOS_AdmobCustomInterstitialLoadResult
			customRewardedVideoLoadResult : &IOS_AdmobCustomRewardedVideoLoadResult
			customInterstitialClick : &IOS_AdmobCustomInterstitialClick
			customInterstitialShow : &IOS_AdmobCustomInterstitialShow
			customInterstitialClose : &IOS_AdmobCustomInterstitialClose
			customRewardedComplete : &IOS_AdmobCustomRewardedVideoComplete
			customRewardedClos : &IOS_AdmobCustomRewardedVideoClose
			customRewardedFail : &IOS_AdmobCustomRewardedVideoFail
			userConfirmConsent : &IOS_OnUserConfirmConsent
			consentInfoUpdate : &IOS_OnConsentInfoUpdate
            umpConsentInfoResult:&IOS_OnUMPConsentInfoUpdate];
#endif
	});
}

AdmobMediation::~AdmobMediation()
{
}

void AdmobMediation::ShowBanner(bool isBottom)
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;

	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] ShowBanner:curViewController isBottom : isBottom];
		});
}

void AdmobMediation::HideBanner()
{
	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] HideBanner];
		});
}

extern "C" void IOS_LoadCustomBanner(FString adUnit)
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;
	dispatch_async(dispatch_get_main_queue(), ^ {
		[[AdMobHelper GetDelegate] LoadCustomBanner:[NSString stringWithFString : adUnit] ];
		});
}

extern "C" void IOS_ShowCustomBanner(bool isBottom)
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;

	dispatch_async(dispatch_get_main_queue(), ^ {
		[[AdMobHelper GetDelegate]ShowCustomBanner:curViewController isBottom : isBottom];
		});
}

extern "C" void IOS_HideCustomBanner()
{
	dispatch_async(dispatch_get_main_queue(), ^ {
		[[AdMobHelper GetDelegate]HideCustomBanner];
		});
}


bool AdmobMediation::IsBannerReady()
{
	NSMutableDictionary *resultDictionary = [NSMutableDictionary dictionaryWithCapacity : 1];
	[[AdMobHelper GetDelegate] performSelectorOnMainThread:@selector(IsBannerReady : ) withObject:resultDictionary waitUntilDone : YES];

	NSNumber* number = (NSNumber*)[resultDictionary objectForKey : @"RetValue"];
	bool ret = (bool)[number boolValue];

	return ret;
}


void AdmobMediation::ShowInterstitial()
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;

	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] ShowInterstitialAds:curViewController];
		});
}

bool AdmobMediation::IsInterstitalReady()
{
	NSMutableDictionary *resultDictionary = [NSMutableDictionary dictionaryWithCapacity : 1];
	[[AdMobHelper GetDelegate] performSelectorOnMainThread:@selector(IsInterstitalReady : ) withObject:resultDictionary waitUntilDone : YES];

	NSNumber* number = (NSNumber*)[resultDictionary objectForKey : @"RetValue"];
	bool ret = (bool)[number boolValue];

	return ret;
}


void AdmobMediation::PlayRewardedVideo()
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;

	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] Play:curViewController];
		});
}

bool AdmobMediation::IsRewardedVideoReady()
{
	NSMutableDictionary *resultDictionary = [NSMutableDictionary dictionaryWithCapacity : 1];
	[[AdMobHelper GetDelegate] performSelectorOnMainThread:@selector(IsPlayable : ) withObject:resultDictionary waitUntilDone : YES];

	NSNumber* number = (NSNumber*)[resultDictionary objectForKey : @"RetValue"];
	bool ret = (bool)[number boolValue];

	return ret;
}

void AdmobMediation::LaunchTestSuite()
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;
	dispatch_async(dispatch_get_main_queue(), ^{
		[GoogleMobileAdsMediationTestSuite presentOnViewController : curViewController delegate : nil];
		});
}

extern "C" void IOS_LoadCustomInterstitial(FString adUnit)
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;
	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] LoadCustomInterstitial:curViewController adUnit: [NSString stringWithFString : adUnit]];
		});
}



extern "C" bool IOS_IsCustomInterstitialReady(FString adUnit)
{
	NSMutableDictionary *resultDictionary = [NSMutableDictionary dictionaryWithCapacity : 2];
	[resultDictionary setObject : [NSString stringWithFString : adUnit] forKey : @"AdUnit"];
	
	[[AdMobHelper GetDelegate] performSelectorOnMainThread:@selector(IsCustomInterstitialReady : ) withObject:resultDictionary waitUntilDone : YES];

	NSNumber* number = (NSNumber*)[resultDictionary objectForKey : @"RetValue"];
	bool ret = (bool)[number boolValue];

	return ret;
}

extern "C" void IOS_ShowCustomInterstitialAd(FString adUnit)
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;
	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] ShowCustomInterstitialAd:curViewController adUnit : [NSString stringWithFString : adUnit]];
		});
}


extern "C" void IOS_LoadCustomRewardedVideo(FString adUnit)
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;
	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] LoadCustomRewardedVideo:curViewController adUnit : [NSString stringWithFString : adUnit]];
		});
}

extern "C" bool IOS_IsCustomRewardedVideoReady(FString adUnit)
{
	NSMutableDictionary *resultDictionary = [NSMutableDictionary dictionaryWithCapacity : 2];
	[resultDictionary setObject : [NSString stringWithFString : adUnit] forKey : @"AdUnit"];

	[[AdMobHelper GetDelegate] performSelectorOnMainThread:@selector(IsCustomRewardReady : ) withObject:resultDictionary waitUntilDone : YES];

	NSNumber* number = (NSNumber*)[resultDictionary objectForKey : @"RetValue"];
	bool ret = (bool)[number boolValue];

	return ret;
}

extern "C" void IOS_PlayCustomRewardedVideoAd(FString adUnit)
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;
	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] PlayCustomRewardAd:curViewController adUnit : [NSString stringWithFString : adUnit]];
		});
}




static bool IOS_IsAdmobConsent() {
	NSUserDefaults* userDefaults = [NSUserDefaults standardUserDefaults];
	int apply = (int)[userDefaults integerForKey : @"IABTCF_gdprApplies"];
	if (apply == 0) {
		return true;
	}

	NSString* vendor_consnt = [userDefaults stringForKey : @"IABTCF_VendorConsents"];
	if (vendor_consnt && [vendor_consnt length] >= 755 && [vendor_consnt characterAtIndex : 754] == '1') {
		return true;
	}

	return false;
}

extern "C" bool IOS_IsAdNetworkConsent(AdNetworks adnetwork) {

	if (adnetwork == AdNetworks::Admob) {
		return IOS_IsAdmobConsent();
	}

	NSUserDefaults* userDefaults = [NSUserDefaults standardUserDefaults];
	int apply = (int)[userDefaults integerForKey : @"IABTCF_gdprApplies"];
	if (apply == 0) {
		return true;
	}

	int vendor_id = AdNetworkToVendor(adnetwork);
	NSString* mediation_consent = [userDefaults stringForKey : @"IABTCF_AddtlConsent"];
	NSArray* comsent_part = [mediation_consent componentsSeparatedByString : @"~"];
	if ([comsent_part count] == 2) {
		NSString* comsent_part2 = comsent_part[1];
		NSArray* mediation_list = [comsent_part2 componentsSeparatedByString : @"."];
		for (int i = 0; i < [mediation_list count]; i++) {
			if ([mediation_list[i] intValue] == vendor_id) {
				return true;
			}
		}
	}
	return false;
}



extern "C" bool IOS_IsAdmobInitlized()
{
	NSMutableDictionary *resultDictionary = [NSMutableDictionary new];
	[[AdMobHelper GetDelegate] performSelectorOnMainThread:@selector(IsSdkInitlized : ) withObject:resultDictionary waitUntilDone : YES];

	NSNumber* number = (NSNumber*)[resultDictionary objectForKey : @"RetValue"];
	bool ret = (bool)[number boolValue];

	return ret;
}


extern "C" void IOS_UMPRequestConsentInfoUpdate(bool underAgeOfConsent)
{
    UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;
    dispatch_async(dispatch_get_main_queue(), ^{
        [[AdMobHelper GetDelegate] UMPRequestConsentInfoUpdate:curViewController underAgeOfConsent:underAgeOfConsent];
        });
}

extern "C" void IOS_UMPResetConsent()
{
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [[AdMobHelper GetDelegate] ResetUMPConsent];
        });
}

extern "C" void IOS_SetTagForChildDirectedTreatment(bool forChild) {
    dispatch_async(dispatch_get_main_queue(), ^{
        [[AdMobHelper GetDelegate] SetTagForChildDirectedTreatment:forChild];
        });
}


extern "C" void IOS_SetTagForUnderAgeOfConsent(bool underAgeOfConsent) {
    dispatch_async(dispatch_get_main_queue(), ^{
        [[AdMobHelper GetDelegate] SetTagForUnderAgeOfConsent:underAgeOfConsent];
        });
}

extern "C" void IOS_SetMaxAdContentRating(int rating) {
    dispatch_async(dispatch_get_main_queue(), ^{
        [[AdMobHelper GetDelegate] SetMaxAdContentRating:rating];
        });
}
