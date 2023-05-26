//
//  AdMobHelper.h
//  AdsUtil
//
//  Created by Xufei Wu on 2017/6/28.
//  Copyright © 2017年 Xufei Wu. All rights reserved.
//

#ifndef AdMobHelper_h
#define AdMobHelper_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <GoogleMobileAds/GoogleMobileAds.h>

#ifdef WITH_IOS14_SUPPORT
#import <AppTrackingTransparency/AppTrackingTransparency.h>
#endif

@interface AdMobHelper : NSObject

+ (AdMobHelper*) GetDelegate;
- (void) InitSDK:(UIViewController*) viewController AppID:(NSString*)AppID
   testDevice:(NSArray<NSString *> *)testDevice
   simulateLocation:(NSString *) simulateLocation
   BannerUnit:(NSString*)BannerUnit InterstitalUnit:(NSString*)InterstitalUnit RewardedUnit:(NSString*)RewardedUnit callback:(void(*)(NSString* strType, int aomount)) callback rewardClose:(void(*)(void)) rewardClose interstitialShow:(void(*)(void)) interstitialShow  interstitialClick:(void(*)(void)) interstitialClick interstitialClose:(void(*)(void)) interstitialClose rcvDebugMessage: (void(*)(NSString* debugMessage)) rcvDebugMessage
    customBannerLoadResult:(void(*)(bool isSuccess, NSString* errmsg)) customBannerLoadResult
    customInterstitialLoadResult:(void(*)(NSString* adUnit, bool isSuccess, NSString* errmsg)) customInterstitialLoadResult
    customRewardedVideoLoadResult:(void(*)(NSString* adUnit, bool isSuccess, NSString* errmsg)) customRewardedVideoLoadResult
    customInterstitialClick:(void(*)(NSString* adUnit)) customInterstitialClick
    customInterstitialShow:(void(*)(NSString* adUnit)) customInterstitialShow
    customInterstitialClose:(void(*)(NSString* adUnit)) customInterstitialClose
    customRewardedComplete:(void(*)(NSString* adUnit, NSString* type, int amount)) customRewardedComplete
    customRewardedClos:(void(*)(NSString* adUnit)) customRewardedClos
    customRewardedFail:(void(*)(NSString* adUnit, NSString* errmsg)) customRewardedFail
    userConfirmConsent:(void(*)(int status, bool preferAdsFree)) userConfirmConsent
    consentInfoUpdate:(void(*)(NSString* publisherId, bool success, int status)) consentInfoUpdate
    umpConsentInfoResult:(void(*)(bool isSuccess, NSString* err)) umpConsentInfoResult;

-(void) ShowBanner:(UIViewController*) viewController isBottom:(BOOL)isBottom;
-(void) HideBanner;

-(void) LoadCustomBanner:(NSString*) adUnit;
-(void) ShowCustomBanner:(UIViewController*) viewController isBottom:(BOOL)isBottom;
-(void) HideCustomBanner;

-(void) IsBannerReady:(NSMutableDictionary*)result;
-(void) ShowInterstitialAds:(UIViewController*) viewController;
-(void) IsInterstitalReady:(NSMutableDictionary*)result;
-(void) Play:(UIViewController*) viewController;
-(void) IsPlayable:(NSMutableDictionary*)result;

-(void) LoadCustomInterstitial:(UIViewController*) viewController adUnit:(NSString*) adUnit;
-(void) IsCustomInterstitialReady:(NSMutableDictionary*) result;
-(void) ShowCustomInterstitialAd:(UIViewController*) viewController adUnit:(NSString*) adUnit;
-(void) LoadInterstitialImp:(NSString*) adUnit isCustomLoad:(bool)isCustomLoad;
-(void) reloadInterstitial;
-(void) LoadRewardedVideoImp:(NSString*) adUnit isCustomLoad:(bool)isCustomLoad;
-(void) reloadRewardedVideo;

-(void) AdmobLogMessage:(NSString*) content;

-(void) LoadCustomRewardedVideo:(UIViewController*) viewController adUnit:(NSString*) adUnit;
-(void) IsCustomRewardReady:(NSMutableDictionary*) result;
-(void) PlayCustomRewardAd:(UIViewController*)viewController adUnit:(NSString*) adUnit;


-(void)IsSdkInitlized:(NSMutableDictionary*)result;
-(void)UMPRequestConsentInfoUpdate:(UIViewController*) viewController  underAgeOfConsent:(bool) underAgeOfConsent;
-(void)LoadForm:(UIViewController*) viewController;
-(void)ResetUMPConsent;
-(void)SetAutoInterstitialAd:(GADInterstitialAd*)interstitialAd;
-(void)SetAutoRewardedAd:(GADRewardedAd*)rewardedAd;
-(void)SetTagForChildDirectedTreatment:(bool) tagForChild;
-(void)SetTagForUnderAgeOfConsent:(bool)underAgeOfConsent;
-(void)SetMaxAdContentRating:(int)rating;
#ifdef WITH_IOS14_SUPPORT
-(void)SetAppTrackingStatus:(ATTrackingManagerAuthorizationStatus) stats;
#endif
@property(nonatomic, retain, nullable) GADInterstitialAd* instertitialViewSingleton;
@property(nonatomic, retain, nullable) GADRewardedAd* rewardedVideoSingleton;
@property(nonatomic, retain, nullable) NSString* adMobReawrdedVideoUnit;
@property(nonatomic, retain, nullable) NSString* adMobInterstitialUnit;
@property(nonatomic, retain, nullable) NSArray<NSString *> *admobTestDevices;
@property(nonatomic, retain, nullable) NSString* admobSimulateLocation;
@property(nonatomic, retain, nullable) NSMutableDictionary *admobCustomInterstitialDic;
@property(nonatomic, retain, nullable) NSMutableDictionary *admobCustomRewardedVideoDic;
#ifdef WITH_IOS14_SUPPORT
@property(nonatomic) ATTrackingManagerAuthorizationStatus trackingStatus;
#endif
@end

#endif /* AdMobHelper_h */
