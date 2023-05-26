//
//  AdMobHelper.m
//  AdsUtil
//
//  Created by Xufei Wu on 2017/6/28.
//  Copyright © 2017年 Xufei Wu. All rights reserved.
//

#include "AdMobHelper.h"
#import <Foundation/Foundation.h>
#import <AdSupport/AdSupport.h>
#import <GoogleMobileAds/GoogleMobileAds.h>
#include <UserMessagingPlatform/UserMessagingPlatform.h>


static AdMobHelper* AdMobHelperSingleton = NULL;
static BOOL isAdMobBannerReady = FALSE;
static GADBannerView *bannerViewSingleton = NULL;

static const int _MAX_AD_CONTENT_RATING_G = 0;
static const int _MAX_AD_CONTENT_RATING_PG = 1;
static const int _MAX_AD_CONTENT_RATING_T = 2;
static const int _MAX_AD_CONTENT_RATING_MA = 3;

static GADBannerView *customBannerViewSingleton = NULL;

static int admobRefreshTimer = 35000;
static void(*admobRcvDebugMessageCb)(NSString* debugMessage) = NULL;

static void(*admobCustomInterstitialLoadCb)(NSString* adUnit, bool isSuccess, NSString* errmsg) = NULL;
static void(*admobCustomRewardedLoadCb)(NSString* adUnit, bool isSuccess, NSString* errmsg) = NULL;

static void(*admobAutoInterstitialShowCb)(void) = NULL;
static void(*admobAutoInterstitialCloseCb)(void) = NULL;
static void(*admobAutoRewardedVideoCloseCb)(void) = NULL;
static void(*admobAutoRewardedVideoRewardCb)(NSString* type, int amount) = NULL;


static void(*admobCustomBannerLoadCb)(bool isSuccess, NSString* err);
static void(*admobCustomInterstitialClickCb)(NSString* adUnit) = NULL;
static void(*admobCustomInterstitialShowCb)(NSString* adUnit) = NULL;
static void(*admobCustomInterstitialCloseCb)(NSString* adUnit) = NULL;
static void(*admobCustomRewardCompleteCb)(NSString* adUnit, NSString* type, int amount);
static void(*admobCustomRewardCloseCb)(NSString* adUnit) = NULL;
static void(*admobCustomRewardFailCb)(NSString* adUnit, NSString* errmsg) = NULL;
static void(*admobUserConfirmConsent)(int status, bool preferAdsFree);
static void(*admobConsentInfoUpdate)(NSString* publisherId, bool success, int status);
static void(*admobUMPConsentInfoUpdate)(bool isSuccess, NSString* err);
static bool s_isInitlized = false;

@interface RewardedVideoFullScreenCallback : NSObject<GADFullScreenContentDelegate>
@property(nonatomic, retain) NSString* adUnit;
@property(nonatomic, retain) NSString* adType;
@property(nonatomic) bool isCustomAds;
@end

static RewardedVideoFullScreenCallback* s_autoRewardedVideoCallback = NULL;

@implementation RewardedVideoFullScreenCallback
- (void)adDidRecordImpression:(nonnull id<GADFullScreenPresentingAd>)ad{
    NSString* impression_log = [NSString stringWithFormat:@"Admob RewardedVideo %@ Ads:%@ show record", self.adType, self.adUnit];
    [[AdMobHelper GetDelegate] AdmobLogMessage:impression_log];
}

- (void)ad:(nonnull id<GADFullScreenPresentingAd>)ad
didFailToPresentFullScreenContentWithError:(nonnull NSError *)error{
    NSString* impression_fail_log = [NSString stringWithFormat:@"Admob RewardedVideo %@ Ads:%@ show fail reason:%@", self.adType, self.adUnit, error];
    [[AdMobHelper GetDelegate] AdmobLogMessage:impression_fail_log];
    
    if(self.isCustomAds) {
        if(admobCustomRewardFailCb != NULL) {
            admobCustomRewardFailCb(self.adUnit, impression_fail_log);
        }
    }
}

- (void)adDidPresentFullScreenContent:(nonnull id<GADFullScreenPresentingAd>)ad{
    NSString* impression_log = [NSString stringWithFormat:@"Admob RewardedVideo %@ Ads:%@ show display", self.adType, self.adUnit];
    [[AdMobHelper GetDelegate] AdmobLogMessage:impression_log];
}

- (void)adDidDismissFullScreenContent:(nonnull id<GADFullScreenPresentingAd>)ad{
    NSString* impression_dismiss_log = [NSString stringWithFormat:@"Admob RewardedVideo %@ Ads:%@ show dismiss", self.adType, self.adUnit];
    [[AdMobHelper GetDelegate] AdmobLogMessage:impression_dismiss_log];
    
    if(self.isCustomAds) {
        if(admobCustomRewardCloseCb != NULL) {
            admobCustomRewardCloseCb(self.adUnit);
        }
        [[AdMobHelper GetDelegate].admobCustomRewardedVideoDic removeObjectForKey:self.adUnit];
    } else {
        if(admobAutoRewardedVideoCloseCb != NULL) {
            admobAutoRewardedVideoCloseCb();
        }
        [[AdMobHelper GetDelegate] SetAutoRewardedAd:NULL];
        [[AdMobHelper GetDelegate] reloadRewardedVideo];
    }
}
@end

@interface RewardedVideoPair : NSObject
@property(nonatomic, retain) GADRewardedAd* rewardedVideo;
@property(nonatomic, retain) RewardedVideoFullScreenCallback* callback;
@end

@implementation RewardedVideoPair
@end


@interface InterstitialFullScreenCallback : NSObject<GADFullScreenContentDelegate>
@property(nonatomic, retain) NSString* adUnit;
@property(nonatomic, retain) NSString* adType;
@property(nonatomic) bool isCustomAds;
@end

static InterstitialFullScreenCallback* s_autoInterstitialCallback = NULL;

@implementation InterstitialFullScreenCallback
- (void)adDidRecordImpression:(nonnull id<GADFullScreenPresentingAd>)ad{
    NSString* impression_log = [NSString stringWithFormat:@"Admob Interstitial %@ Ads:%@ show record", self.adType, self.adUnit];
    [[AdMobHelper GetDelegate] AdmobLogMessage:impression_log];
    if(self.isCustomAds) {
        if(admobCustomInterstitialShowCb != NULL) {
            admobCustomInterstitialShowCb(self.adUnit);
        }
    } else {
        if(admobAutoInterstitialShowCb != NULL) {
            admobAutoInterstitialShowCb();
        }
    }
}

- (void)ad:(nonnull id<GADFullScreenPresentingAd>)ad
didFailToPresentFullScreenContentWithError:(nonnull NSError *)error{
    NSString* impression_fail_log = [NSString stringWithFormat:@"Admob Interstitial %@ Ads:%@ show fail reason:%@", self.adType, self.adUnit, error];
    [[AdMobHelper GetDelegate] AdmobLogMessage:impression_fail_log];
}

- (void)adDidPresentFullScreenContent:(nonnull id<GADFullScreenPresentingAd>)ad{
    NSString* impression_log = [NSString stringWithFormat:@"Admob Interstitial %@ Ads:%@ show display", self.adType, self.adUnit];
    [[AdMobHelper GetDelegate] AdmobLogMessage:impression_log];
}

- (void)adDidDismissFullScreenContent:(nonnull id<GADFullScreenPresentingAd>)ad{
    NSString* impression_dismiss_log = [NSString stringWithFormat:@"Admob Interstitial %@ Ads:%@ show dismiss", self.adType, self.adUnit];
    [[AdMobHelper GetDelegate] AdmobLogMessage:impression_dismiss_log];
    
    if(self.isCustomAds) {
        if(admobCustomInterstitialCloseCb != NULL) {
            admobCustomInterstitialCloseCb(self.adUnit);
        }
        [[AdMobHelper GetDelegate].admobCustomInterstitialDic removeObjectForKey:self.adUnit];
    } else {
        if(admobAutoInterstitialCloseCb != NULL) {
            admobAutoInterstitialCloseCb();
        }
        [[AdMobHelper GetDelegate] SetAutoInterstitialAd:NULL];
        [[AdMobHelper GetDelegate] reloadInterstitial];
    }
}
@end


@interface InterstitialPair : NSObject
@property(nonatomic, retain) GADInterstitialAd* interstitial;
@property(nonatomic, retain) InterstitialFullScreenCallback* callback;
@end

@implementation InterstitialPair
@end


@interface BannerDelegate : NSObject<GADBannerViewDelegate>

@end

static BannerDelegate* admobBannerDelegate = NULL;

@implementation BannerDelegate

- (void)bannerViewDidReceiveAd:(nonnull GADBannerView *)bannerView
{
    isAdMobBannerReady = TRUE;
    [[AdMobHelper GetDelegate] AdmobLogMessage:@"AdMob Banner Auto Ads load success!!!"];
}

- (void)bannerView:(nonnull GADBannerView *)bannerView
    didFailToReceiveAdWithError:(nonnull NSError *)error
{
    NSString *s = [NSString stringWithFormat : @"Admob Banner Auto Ads load fail : %@", error];
    if (admobRcvDebugMessageCb != NULL) admobRcvDebugMessageCb(s);
    [[AdMobHelper GetDelegate] AdmobLogMessage:s];
	[self reloadBanner];
}

-(void)reloadBanner {
	[NSTimer scheduledTimerWithTimeInterval : admobRefreshTimer / 1000.0 repeats : false block : ^ (NSTimer *_timer) {
		GADRequest *request = [GADRequest request];
        [bannerViewSingleton loadRequest : request];
	}];
}
@end

@interface CustomBannerDelegate : NSObject<GADBannerViewDelegate>

@end

static CustomBannerDelegate* admobCustomBannerDelegate = NULL;

@implementation CustomBannerDelegate

- (void)bannerViewDidReceiveAd:(nonnull GADBannerView *)bannerView
{
    admobCustomBannerLoadCb(true, @"");
}

- (void)bannerView:(nonnull GADBannerView *)bannerView
    didFailToReceiveAdWithError:(nonnull NSError *)error
{
    NSString *s = [NSString stringWithFormat : @"load custom banner fail : %@", error];
    admobCustomBannerLoadCb(false, s);
}

@end


@implementation AdMobHelper

+ (AdMobHelper*) GetDelegate
{
    if(AdMobHelperSingleton == NULL)
    {
        AdMobHelperSingleton = [AdMobHelper new];
    }
    
    return AdMobHelperSingleton;
}

-(void)IsSdkInitlized:(NSMutableDictionary*)result;
{
	NSNumber *boolNumber = [NSNumber numberWithBool : s_isInitlized];
	[result setValue : boolNumber forKey : @"RetValue"];
}

#ifdef WITH_IOS14_SUPPORT
-(void)SetAppTrackingStatus:(ATTrackingManagerAuthorizationStatus) stats;
{
    self.trackingStatus = stats;
}
#endif


- (void) InitSDK:(UIViewController*) viewController AppID:(NSString*) AppID  testDevice : (NSArray<NSString *> *)testDevice
      simulateLocation:(NSString *) simulateLocation
      BannerUnit:(NSString*)BannerUnit InterstitalUnit:(NSString*)InterstitalUnit RewardedUnit:(NSString*)RewardedUnit callback:(void(*)(NSString* strType, int amount)) callback rewardClose:(void(*)(void)) rewardClose interstitialShow:(void(*)(void)) interstitialShow  interstitialClick:(void(*)(void)) interstitialClick interstitialClose:(void(*)(void)) interstitialClose rcvDebugMessage : (void(*)(NSString* debugMessage)) rcvDebugMessage
customBannerLoadResult:(void(*)(bool isSuccess, NSString* errmsg)) customBannerLoadResult
customInterstitialLoadResult:(void(*)(NSString* adUnit, bool isSuccess, NSString* errmsg))  customInterstitialLoadResult
        customRewardedVideoLoadResult:(void(*)(NSString* adUnit, bool isSuccess, NSString* errmsg)) customRewardedVideoLoadResult
        customInterstitialClick:(void(*)(NSString* adUnit)) customInterstitialClick
        customInterstitialShow:(void(*)(NSString* adUnit)) customInterstitialShow
        customInterstitialClose:(void(*)(NSString* adUnit)) customInterstitialClose
        customRewardedComplete:(void(*)(NSString* adUnit, NSString* type, int amount)) customRewardedComplete
        customRewardedClos:(void(*)(NSString* adUnit)) customRewardedClos
    customRewardedFail:(void(*)(NSString* adUnit, NSString* errmsg)) customRewardedFail
    userConfirmConsent:(void(*)(int status, bool preferAdsFree)) userConfirmConsent
    consentInfoUpdate:(void(*)(NSString* publisherId, bool success, int status)) consentInfoUpdate
    umpConsentInfoResult:(void(*)(bool isSuccess, NSString* err)) umpConsentInfoResult
{
    admobAutoInterstitialShowCb = interstitialShow;
    admobAutoInterstitialCloseCb = interstitialClose;
    admobAutoRewardedVideoCloseCb = rewardClose;
    admobAutoRewardedVideoRewardCb = callback;
    
    admobCustomInterstitialLoadCb =customInterstitialLoadResult;
    admobCustomRewardedLoadCb = customRewardedVideoLoadResult;
    admobCustomInterstitialClickCb = customInterstitialClick;
    admobCustomInterstitialShowCb = customInterstitialShow;
    admobCustomInterstitialCloseCb = customInterstitialClose;
    admobCustomRewardCompleteCb = customRewardedComplete;
    admobCustomRewardCloseCb = customRewardedClos;
    admobCustomRewardFailCb = customRewardedFail;
    admobUserConfirmConsent = userConfirmConsent;
    admobConsentInfoUpdate = consentInfoUpdate;
    admobUMPConsentInfoUpdate = umpConsentInfoResult;
    self.admobTestDevices = testDevice;
    
    self.admobSimulateLocation = simulateLocation;
    
    self.admobCustomInterstitialDic = [[NSMutableDictionary alloc] init];
    self.admobCustomRewardedVideoDic = [[NSMutableDictionary alloc] init];
    
#ifdef WITH_IOS14_SUPPORT
    self.trackingStatus = ATTrackingManagerAuthorizationStatusNotDetermined;
#endif

    [[GADMobileAds sharedInstance] startWithCompletionHandler:^(GADInitializationStatus *_Nonnull status) {
        NSLog(@"MobileAds Status begin  sdk version:%@--- ", [GADMobileAds sharedInstance].sdkVersion);
        NSLog(@"Admob Advertising ID: %@",
      ASIdentifierManager.sharedManager.advertisingIdentifier.UUIDString);
		s_isInitlized = true;
	  	admobRcvDebugMessageCb = rcvDebugMessage;

        for (NSString* key in status.adapterStatusesByClassName)
        {
            NSLog(@"MobileAds Status ad network:%@ status:%ld", key, status.adapterStatusesByClassName[key].state);
        }

        NSLog(@"MobileAds Status end--- ");
        if(testDevice)
        {
            GADMobileAds.sharedInstance.requestConfiguration.testDeviceIdentifiers = testDevice;
        }

        if (BannerUnit != NULL && BannerUnit.length > 1)
        {
            bannerViewSingleton = [[GADBannerView alloc]
                initWithAdSize:GADAdSizeBanner];
            bannerViewSingleton.hidden = TRUE;

            bannerViewSingleton.adUnitID = BannerUnit;
            bannerViewSingleton.rootViewController = viewController;
            admobBannerDelegate = [BannerDelegate new];
            bannerViewSingleton.delegate = admobBannerDelegate;
            

            GADRequest *request = [GADRequest request];
            [bannerViewSingleton loadRequest : request];
        }
        
        {
            customBannerViewSingleton = [[GADBannerView alloc]
                                         initWithAdSize:GADAdSizeBanner];
            customBannerViewSingleton.hidden = TRUE;
            customBannerViewSingleton.rootViewController = viewController;
            admobCustomBannerDelegate = [CustomBannerDelegate new];
            customBannerViewSingleton.delegate = admobCustomBannerDelegate;
            admobCustomBannerLoadCb = customBannerLoadResult;
        }
        
        if (InterstitalUnit != NULL && InterstitalUnit.length > 1)
        {
            self.adMobInterstitialUnit = InterstitalUnit;
            [self LoadInterstitialImp:InterstitalUnit isCustomLoad:false];
        }

        if (RewardedUnit != NULL && RewardedUnit.length > 1)
        {
            self.adMobReawrdedVideoUnit = RewardedUnit;
            [self LoadRewardedVideoImp:RewardedUnit isCustomLoad:false];
        }
        
        NSString* init_log = [NSString stringWithFormat:@"AdMob Init:%@ %@ %@ %@\n", AppID, BannerUnit, InterstitalUnit, RewardedUnit];
        [self AdmobLogMessage:init_log];
    }];
}

-(void)LoadForm:(UIViewController*) viewController
{
    [UMPConsentForm loadWithCompletionHandler:^(UMPConsentForm *form,
                                                NSError *loadError) {
      if (loadError) {
        // Handle the error.
          NSLog(@"load ump form fail:%@", loadError);
          NSString *s = [NSString stringWithFormat : @"ump load consent form fail : %@", loadError];
          if(admobRcvDebugMessageCb != NULL) admobRcvDebugMessageCb(s);
          if(admobUMPConsentInfoUpdate != NULL) {
              admobUMPConsentInfoUpdate(false, s);
          }
      } else {
        // Present the form. You can also hold on to the reference to present
        // later.
        if (UMPConsentInformation.sharedInstance.consentStatus ==
            UMPConsentStatusRequired) {
          [form
              presentFromViewController:viewController
                      completionHandler:^(NSError *_Nullable dismissError) {
                        if (UMPConsentInformation.sharedInstance.consentStatus ==
                            UMPConsentStatusObtained) {
                            // App can start requesting ads.
                            if(admobUMPConsentInfoUpdate != NULL) {
                                admobUMPConsentInfoUpdate(true, @"");
                            }
                        }

                      }];
        } else {
            // Keep the form available for changes to user consent.
            if(admobUMPConsentInfoUpdate != NULL) {
                admobUMPConsentInfoUpdate(true, @"");
            }
        }
      }
    }];
}

-(void)UMPRequestConsentInfoUpdate:(UIViewController*) viewController underAgeOfConsent:(bool) underAgeOfConsent
{
    UMPRequestParameters *parameters = [[UMPRequestParameters alloc] init];
    UMPDebugSettings *debugSettings = [[UMPDebugSettings alloc] init];
    debugSettings.testDeviceIdentifiers = self.admobTestDevices;
    
    for(id device in self.admobTestDevices) {
        NSLog(@"UMP try add testdevices:%@", device);
    }
    
    if(self.admobSimulateLocation != NULL) {
        if([self.admobSimulateLocation isEqualToString:@"IN_EEA"]) {
            debugSettings.geography = UMPDebugGeographyEEA;
        } else if([self.admobSimulateLocation isEqualToString:@"NOT_IN_EEA"]) {
            debugSettings.geography = UMPDebugGeographyNotEEA;
        } else {
            debugSettings.geography = UMPDebugGeographyDisabled;
        }
    }
    
    
    parameters.debugSettings = debugSettings;
    parameters.tagForUnderAgeOfConsent = underAgeOfConsent;

#ifdef WITH_IOS14_SUPPORT
    if(self.trackingStatus == ATTrackingManagerAuthorizationStatusDenied) {
        NSString *s = [NSString stringWithFormat : @"user disabled transparent tracking"];
        if(admobUMPConsentInfoUpdate != NULL){
            admobUMPConsentInfoUpdate(false, s);
        }
        return;
    }
#endif

    // Request an update to the consent information.
    [UMPConsentInformation.sharedInstance
        requestConsentInfoUpdateWithParameters:parameters
             completionHandler:^(NSError *_Nullable error) {
               if (error) {
                 // Handle the error.
                   NSLog(@"error:%@", error);
                   NSString *s = [NSString stringWithFormat : @"ump request consentInfoUpdate fail : %@", error];
                   if(admobUMPConsentInfoUpdate != NULL){
                       admobUMPConsentInfoUpdate(false, s);
                   }
                   if(admobRcvDebugMessageCb != NULL) admobRcvDebugMessageCb(s);
               } else {
                 // The consent information state was updated.
                 // You are now ready to check if a form is
                 // available.
                   UMPFormStatus formStatus =
                        UMPConsentInformation.sharedInstance
                            .formStatus;
                    if (formStatus == UMPFormStatusAvailable) {
                      [self LoadForm:viewController];
                    } else {
                        if(admobUMPConsentInfoUpdate != NULL){
                            admobUMPConsentInfoUpdate(true, @"");
                        }
                    }
               }
             }];
}

-(void)ResetUMPConsent
{
    [UMPConsentInformation.sharedInstance reset];
}


-(void)SetAutoInterstitialAd:(GADInterstitialAd*)interstitialAd{
    self.instertitialViewSingleton = interstitialAd;
}

-(void)SetAutoRewardedAd:(GADRewardedAd*)rewardedAd{
    self.rewardedVideoSingleton = rewardedAd;
}

-(void) AdmobLogMessage:(NSString*) content{
    NSLog(@"%@", content);
    if(admobRcvDebugMessageCb != NULL) {
        admobRcvDebugMessageCb(content);
    }
}

-(void)reloadInterstitial{
    [NSTimer scheduledTimerWithTimeInterval : admobRefreshTimer / 1000.0 repeats : false block : ^ (NSTimer *_timer) {
        [self LoadInterstitialImp:self.adMobInterstitialUnit isCustomLoad:false];
    }];
}

-(void) LoadInterstitialImp:(NSString*) adUnit isCustomLoad:(bool)isCustomLoad {
    GADRequest *request = [GADRequest request];
    NSString* adType = isCustomLoad?@"Custom":@"Auto";
    [GADInterstitialAd loadWithAdUnitID:adUnit request:request completionHandler:^(GADInterstitialAd * _Nullable interstitialAd, NSError * _Nullable error) {
        if(error){
            NSString* loadfail_log = [NSString stringWithFormat : @"Admob Interstitial %@ Ads:%@ Load Fail : %@", adType, adUnit, error];
            [self AdmobLogMessage:loadfail_log];
            if(isCustomLoad){
                if(admobCustomInterstitialLoadCb != NULL) {
                    admobCustomInterstitialLoadCb(adUnit, false, loadfail_log);
                }
            } else {
                [self reloadInterstitial];
            }
            return;
        }
        
        NSString* loadsuccess_log = [NSString stringWithFormat : @"Admob Interstitial %@ Ads:%@ Load success : %@", adType,adUnit, error];
        [self AdmobLogMessage:loadsuccess_log];
        
        InterstitialFullScreenCallback* cb = [InterstitialFullScreenCallback alloc];
        cb.adUnit = adUnit;
        cb.adType = adType;
        cb.isCustomAds = isCustomLoad;
        
        if(isCustomLoad) {
            if(admobCustomInterstitialLoadCb != NULL) {
                admobCustomInterstitialLoadCb(adUnit, true, @"");
            }
            InterstitialPair* pair = [InterstitialPair alloc];
            pair.interstitial = interstitialAd;
            pair.callback = cb;
            [self.admobCustomInterstitialDic setObject:pair forKey:adUnit];
        } else {
            self.instertitialViewSingleton = interstitialAd;
            s_autoInterstitialCallback = cb;
        }
        
        [interstitialAd setFullScreenContentDelegate:cb];
    }];
}

-(void) reloadRewardedVideo{
    [NSTimer scheduledTimerWithTimeInterval : admobRefreshTimer / 1000.0 repeats : false block : ^ (NSTimer *_timer) {
        [self LoadRewardedVideoImp:self.adMobReawrdedVideoUnit isCustomLoad:false];
    }];
}

-(void) LoadRewardedVideoImp:(NSString*) adUnit isCustomLoad:(bool)isCustomLoad{
    GADRequest *request = [GADRequest request];
    NSString* adType = isCustomLoad?@"Custom":@"Auto";
    [GADRewardedAd loadWithAdUnitID:adUnit request:request completionHandler:^(GADRewardedAd * _Nullable rewardedAd, NSError * _Nullable error) {
        if(error){
            NSString* loadfail_log = [NSString stringWithFormat : @"Admob RewardedVideo %@ Ads :%@ Load Fail : %@", adType, adUnit, error];
            [self AdmobLogMessage:loadfail_log];
            if(isCustomLoad){
                if(admobCustomInterstitialLoadCb != NULL) {
                    admobCustomInterstitialLoadCb(adUnit, false, loadfail_log);
                }
            } else {
                [self reloadRewardedVideo];
            }
            return;
        }
        
        NSString* loadsuccess_log = [NSString stringWithFormat : @"Admob RewardedVideo %@ Ads:%@ Load success : %@", adType,adUnit, error];
        [self AdmobLogMessage:loadsuccess_log];
        
        RewardedVideoFullScreenCallback* cb = [RewardedVideoFullScreenCallback alloc];
        cb.adUnit = adUnit;
        cb.adType = adType;
        cb.isCustomAds = isCustomLoad;
        
        if(isCustomLoad) {
            if(admobCustomRewardedLoadCb != NULL) {
                admobCustomRewardedLoadCb(adUnit, true, @"");
            }
            
            RewardedVideoPair* pair = [RewardedVideoPair alloc];
            pair.rewardedVideo = rewardedAd;
            pair.callback = cb;
            [self.admobCustomRewardedVideoDic setObject:pair forKey:adUnit];
        } else {
            self.rewardedVideoSingleton = rewardedAd;
            s_autoRewardedVideoCallback = cb;
        }
        
        [rewardedAd setFullScreenContentDelegate:cb];
    }];
}

-(void) LoadCustomBanner:(NSString*) adUnit
{
    GADRequest *request = [GADRequest request];
    customBannerViewSingleton.adUnitID = adUnit;
    [customBannerViewSingleton loadRequest: request];
}

-(void) ShowCustomBanner:(UIViewController*) viewController isBottom:(BOOL)isBottom
{
    [customBannerViewSingleton.rootViewController.view willRemoveSubview:customBannerViewSingleton];
    customBannerViewSingleton.rootViewController = viewController;
    [viewController.view addSubview:customBannerViewSingleton];
    
    CGRect bannerFrame = CGRectZero;
    bannerFrame.size = bannerViewSingleton.bounds.size;
    CGFloat topPadding = 0.0f;
    CGFloat bottomPadding = 0.0f;

    if (@available(iOS 11.0, *)) {
        UIWindow *window = UIApplication.sharedApplication.windows.firstObject;
        topPadding = window.safeAreaInsets.top;
        bottomPadding = window.safeAreaInsets.bottom;
    }
    
    if(isBottom)
    {
        bannerFrame.origin.y = viewController.view.bounds.size.height - bannerFrame.size.height - bottomPadding;
    }
    else
    {
        bannerFrame.origin.y = topPadding;
    }
    
    bannerFrame.origin.x = (viewController.view.bounds.size.width - bannerFrame.size.width)/2;
    customBannerViewSingleton.frame = bannerFrame;
    customBannerViewSingleton.hidden = FALSE;
}

-(void) HideCustomBanner
{
    if(customBannerViewSingleton != NULL)
    {
        customBannerViewSingleton.hidden = TRUE;
    }
}

-(void) ShowBanner:(UIViewController*)viewController isBottom:(BOOL)isBottom
{
    if(isAdMobBannerReady)
    {
        [bannerViewSingleton.rootViewController.view willRemoveSubview:bannerViewSingleton];
        bannerViewSingleton.rootViewController = viewController;
        [viewController.view addSubview:bannerViewSingleton];
        
        CGRect bannerFrame = CGRectZero;
        bannerFrame.size = bannerViewSingleton.bounds.size;
		CGFloat topPadding = 0.0f;
		CGFloat bottomPadding = 0.0f;

		if (@available(iOS 11.0, *)) {
			UIWindow *window = UIApplication.sharedApplication.windows.firstObject;
			topPadding = window.safeAreaInsets.top;
			bottomPadding = window.safeAreaInsets.bottom;
		}

        if(isBottom)
        {
            bannerFrame.origin.y = viewController.view.bounds.size.height - bannerFrame.size.height - bottomPadding;
		}
		else 
		{
			bannerFrame.origin.y = topPadding;
		}
		
        bannerFrame.origin.x = (viewController.view.bounds.size.width - bannerFrame.size.width)/2;	
  
        bannerViewSingleton.frame = bannerFrame;
        bannerViewSingleton.hidden = FALSE;
        isAdMobBannerReady = FALSE;

		GADRequest *request = [GADRequest request];
        [bannerViewSingleton loadRequest: request];
    }
}

-(void) LoadCustomInterstitial:(UIViewController*) viewController adUnit:(NSString*) adUnit
{
    if([self.admobCustomInterstitialDic objectForKey:adUnit])
    {
        [self.admobCustomInterstitialDic removeObjectForKey:adUnit];
    }
    [self LoadInterstitialImp:adUnit isCustomLoad:true];
}

-(void) IsCustomInterstitialReady:(NSMutableDictionary*) result
{
    if(![result objectForKey:@"AdUnit"])
    {
        NSNumber *boolNumber = [NSNumber numberWithBool:false];
        [result setValue:boolNumber forKey:@"RetValue"];
        return;
    }
    
    NSString* adUnit = [result objectForKey:@"AdUnit"];
    
    if(![self.admobCustomInterstitialDic objectForKey:adUnit])
    {
        NSNumber *boolNumber = [NSNumber numberWithBool:false];
        [result setValue:boolNumber forKey:@"RetValue"];
        return;
    }
    
    
    NSNumber *boolNumber = [NSNumber numberWithBool:true];
    [result setValue:boolNumber forKey:@"RetValue"];
}

-(void) ShowCustomInterstitialAd:(UIViewController*) viewController adUnit:(NSString*) adUnit
{
    if(![self.admobCustomInterstitialDic objectForKey:adUnit])
    {
        return;
    }
    
    InterstitialPair* pair = [self.admobCustomInterstitialDic objectForKey:adUnit];
    GADInterstitialAd* customInterstitial = pair.interstitial;
    [customInterstitial presentFromRootViewController:viewController];
}

-(void) LoadCustomRewardedVideo:(UIViewController*) viewController adUnit:(NSString*) adUnit
{
    if([self.admobCustomRewardedVideoDic objectForKey:adUnit])
    {
        [self.admobCustomRewardedVideoDic removeObjectForKey:adUnit];
    }
    
    [self LoadRewardedVideoImp:adUnit isCustomLoad:true];
}

-(void) IsCustomRewardReady:(NSMutableDictionary*) result
{
    if(![result objectForKey:@"AdUnit"])
    {
        NSNumber *boolNumber = [NSNumber numberWithBool:false];
        [result setValue:boolNumber forKey:@"RetValue"];
        return;
    }
    
    NSString* adUnit = [result objectForKey:@"AdUnit"];
    
    if(![self.admobCustomRewardedVideoDic objectForKey:adUnit])
    {
        NSNumber *boolNumber = [NSNumber numberWithBool:false];
        [result setValue:boolNumber forKey:@"RetValue"];
        return;
    }
    
    NSNumber *boolNumber = [NSNumber numberWithBool:true];
    [result setValue:boolNumber forKey:@"RetValue"];
}

-(void) PlayCustomRewardAd:(UIViewController*)viewController adUnit:(NSString*) adUnit
{
    if(![self.admobCustomRewardedVideoDic objectForKey:adUnit])
    {
        return;
    }
    
    RewardedVideoPair* pair = [self.admobCustomRewardedVideoDic objectForKey:adUnit];
    GADRewardedAd* customRewardedVideo = pair.rewardedVideo;
    [customRewardedVideo presentFromRootViewController:viewController userDidEarnRewardHandler:^{
        GADAdReward *reward = customRewardedVideo.adReward;
        NSString* reward_log = [NSString stringWithFormat:@"Admob RewardedVideo Custom Ads:%@ reward:%@,%@", adUnit, reward.type, reward.amount];
        [self AdmobLogMessage:reward_log];
        if(admobCustomRewardCompleteCb != NULL) {
            admobCustomRewardCompleteCb(adUnit, reward.type, [reward.amount intValue]);
        }
      }];
}

-(void) HideBanner
{
    if(bannerViewSingleton != NULL)
    {
        bannerViewSingleton.hidden = TRUE;
    }
}

-(void) IsBannerReady:(NSMutableDictionary*)result
{
    NSNumber *boolNumber = [NSNumber numberWithBool:isAdMobBannerReady];
    [result setValue:boolNumber forKey:@"RetValue"];
}

-(void) ShowInterstitialAds:(UIViewController*) viewController
{
    if (self.instertitialViewSingleton != NULL)
    {
        [self.instertitialViewSingleton presentFromRootViewController:viewController];
    }
}

-(void) IsInterstitalReady:(NSMutableDictionary*)result
{
    if(self.instertitialViewSingleton != NULL) {
        NSNumber *boolNumber = [NSNumber numberWithBool:true];
        [result setValue:boolNumber forKey:@"RetValue"];
    } else {
        NSNumber *boolNumber = [NSNumber numberWithBool:false];
        [result setValue:boolNumber forKey:@"RetValue"];
    }
}

-(void) Play:(UIViewController*) viewController
{
    if(self.rewardedVideoSingleton != NULL){
        [self.rewardedVideoSingleton presentFromRootViewController:viewController userDidEarnRewardHandler:^{
            GADAdReward *reward = self.rewardedVideoSingleton.adReward;
            NSString* reward_log = [NSString stringWithFormat:@"Admob RewardedVideo Auto Ads:%@ reward:%@,%@", self.adMobReawrdedVideoUnit, reward.type, reward.amount];
            [self AdmobLogMessage:reward_log];
            if(admobAutoRewardedVideoRewardCb != NULL) {
                admobAutoRewardedVideoRewardCb(reward.type, [reward.amount intValue]);
            }
        }];
    }
}

-(void) IsPlayable:(NSMutableDictionary*)result
{
    NSNumber *boolNumber = [NSNumber numberWithBool:self.rewardedVideoSingleton != NULL];
    [result setValue:boolNumber forKey:@"RetValue"];
}


-(void)SetTagForChildDirectedTreatment:(bool) tagForChild
{
    if(tagForChild) {
        [GADMobileAds.sharedInstance.requestConfiguration tagForChildDirectedTreatment:YES];
    } else {
        [GADMobileAds.sharedInstance.requestConfiguration tagForChildDirectedTreatment:NO];
    }
}

-(void)SetTagForUnderAgeOfConsent:(bool)underAgeOfConsent
{
    if(underAgeOfConsent) {
        [GADMobileAds.sharedInstance.requestConfiguration tagForUnderAgeOfConsent:YES];
    } else {
        [GADMobileAds.sharedInstance.requestConfiguration tagForUnderAgeOfConsent:NO];
    }
}

-(void)SetMaxAdContentRating:(int)rating
{
    if(_MAX_AD_CONTENT_RATING_G == rating) {
        GADMobileAds.sharedInstance.requestConfiguration.maxAdContentRating = GADMaxAdContentRatingGeneral;
    } else if(_MAX_AD_CONTENT_RATING_PG == rating){
        GADMobileAds.sharedInstance.requestConfiguration.maxAdContentRating = GADMaxAdContentRatingParentalGuidance;
    } else if(_MAX_AD_CONTENT_RATING_T == rating) {
        GADMobileAds.sharedInstance.requestConfiguration.maxAdContentRating = GADMaxAdContentRatingTeen;
    } else if(_MAX_AD_CONTENT_RATING_MA == rating) {
        GADMobileAds.sharedInstance.requestConfiguration.maxAdContentRating = GADMaxAdContentRatingMatureAudience;
    } else {
        NSLog(@"invalid maxadContentRating:%d", rating);
    }
}

@end


