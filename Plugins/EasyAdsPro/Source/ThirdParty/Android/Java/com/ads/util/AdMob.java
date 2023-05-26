/*
* EasyAdsPro - unreal engine 4 ads plugin
*
* Copyright (C) 2020 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

package com.ads.util;

//import android.os.Bundle;
import static com.google.android.gms.ads.RequestConfiguration.MAX_AD_CONTENT_RATING_G;
import static com.google.android.gms.ads.RequestConfiguration.MAX_AD_CONTENT_RATING_MA;
import static com.google.android.gms.ads.RequestConfiguration.MAX_AD_CONTENT_RATING_PG;
import static com.google.android.gms.ads.RequestConfiguration.MAX_AD_CONTENT_RATING_T;
import static com.google.android.gms.ads.RequestConfiguration.TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE;
import static com.google.android.gms.ads.RequestConfiguration.TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE;
import static com.google.android.gms.ads.RequestConfiguration.TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED;
import static com.google.android.gms.ads.RequestConfiguration.TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE;
import static com.google.android.gms.ads.RequestConfiguration.TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE;
import static com.google.android.gms.ads.RequestConfiguration.TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED;

import android.app.Activity;
import android.os.Bundle;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.Display;
import android.view.Gravity;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.PopupWindow;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;


import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import java.net.MalformedURLException;
import java.net.URL;
import java.text.Normalizer;
import java.text.Normalizer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Timer;
import java.util.TimerTask;
import java.util.concurrent.Callable;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;
import java.util.logging.Logger;
import java.util.Random;

import java.util.Timer;
import java.util.TimerTask;

import com.facebook.ads.Ad;
import com.google.ads.mediation.admob.AdMobAdapter;
import com.google.android.gms.ads.AdError;
import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.AdRequest;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.ads.AdView;
import com.google.android.gms.ads.FullScreenContentCallback;
import com.google.android.gms.ads.LoadAdError;
import com.google.android.gms.ads.MobileAds;
import com.google.android.gms.ads.OnUserEarnedRewardListener;
import com.google.android.gms.ads.RequestConfiguration;
import com.google.android.gms.ads.initialization.AdapterStatus;
import com.google.android.gms.ads.interstitial.InterstitialAd;
import com.google.android.gms.ads.interstitial.InterstitialAdLoadCallback;
import com.google.android.gms.ads.initialization.InitializationStatus;
import com.google.android.gms.ads.initialization.OnInitializationCompleteListener;
import com.google.android.gms.ads.rewarded.RewardItem;
import com.google.android.gms.ads.rewarded.RewardedAd;
import com.google.android.gms.ads.rewarded.RewardedAdLoadCallback;
import com.google.android.ump.ConsentDebugSettings;
import com.google.android.ump.ConsentRequestParameters;
import com.google.android.ump.FormError;
import com.google.android.ump.UserMessagingPlatform;

//import static com.google.android.gms.internal.zzs.TAG;
import java.util.Set;

public class AdMob {
    public  static  final String TAG = "EasyAds:AdMob";
    public static final int ANDROID_BUILD_VERSION = android.os.Build.VERSION.SDK_INT;
    private PopupWindow adPopupWindow;
    private AdView adView;
    private boolean adInit = false;
    private LinearLayout adLayout;
    private int adGravity = Gravity.TOP;
    private Activity _activity;

    // custom banner
    private AdView customBannerView;
    private PopupWindow customPopupWindow;
    private LinearLayout customAdLayout;

    private LinearLayout activityLayout;
    private boolean mInitlizedAdunit = false;

    /** true when the application has requested that an ad be displayed */
    private boolean adWantsToBeShown = false;

    /** true when an ad is available to be displayed */
    private boolean adIsAvailable = false;

    /** true when an ad request is in flight */
    private boolean adIsRequested = false;

    private InterstitialAd mInterstitialAd;

    private RewardedAd mRewardAd;

    private  String mAppId;
    private  String mBannerUnit;
    private  String mInterstitialUnit;
    private  String mRewardedUnit;

	private String mSharedAppId = "ca-app-pub-7921597124175429~5864144593";
	private String mSharedBannerUnit = "ca-app-pub-7921597124175429/7340877793";
	private String mSharedInterstitialUnit = "ca-app-pub-7921597124175429/1970924970";
	private String mSharedRewardedUnit = "ca-app-pub-7921597124175429/8153189945";

    private  boolean mIsForUnity;
    public static final String mUnityAdsObjectName = "EZAds";

    private Timer mCountdownTimer;
    private int mReloadTimer = 5000;
    private Random mRand = new Random(System.currentTimeMillis() );

    private boolean mIsConsentUpdated = false;

    private static final int _TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED = 0;
    private static final int _TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE = 1;
    private static final int _TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE = 2;


    private static final int _TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE = 0;
    private static final int _TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE = 1;
    private static final int _TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED = 2;


    private static final int _MAX_AD_CONTENT_RATING_G = 0;
    private static final int _MAX_AD_CONTENT_RATING_PG = 1;
    private static final int _MAX_AD_CONTENT_RATING_T = 2;
    private static final int _MAX_AD_CONTENT_RATING_MA = 3;


    private com.google.android.ump.ConsentInformation mConsentInformation;
    private com.google.android.ump.ConsentForm mUMPConsentForm;
    private List<String> mTestDevices;

    private ConcurrentHashMap<String, InterstitialAd> mCustomInterstitial = new ConcurrentHashMap<>();
    private ConcurrentHashMap<String, RewardedAd> mCustomRewardedVideo = new ConcurrentHashMap<>();

    public AdMob(Activity activity, LinearLayout mainLayout, boolean isForUnity)
    {
        _activity = activity;
        activityLayout = mainLayout;
        mIsForUnity = isForUnity;

        Log.d(TAG, "Admob:Init");
    }

    public boolean IsBannerReady()
    {
        return adIsAvailable;
    }

    public  boolean IsInterstitialReady() {
        return mInterstitialAd != null;
    }

    public  boolean IsRewardedVideoReady() {
        return mRewardAd != null;
    }

    public void InitAdMob(String AppId, String adBannerUnit, String interstitialUnit, String rewardUnit, final List<String> testDeviceIds)
    {
        mAppId = AppId;
        mBannerUnit = adBannerUnit;
        mInterstitialUnit = interstitialUnit;
        mRewardedUnit = rewardUnit;
        mTestDevices = testDeviceIds;

        MobileAds.initialize(_activity, new OnInitializationCompleteListener() {
            @Override
            public void onInitializationComplete(InitializationStatus initializationStatus) {
                int readyAdNetwotk = 0;
                Map<String, AdapterStatus> statusMap = initializationStatus.getAdapterStatusMap();
                for (Map.Entry<String, AdapterStatus> entry : statusMap.entrySet()) {
                    Log.d(TAG, "Init Mediation Status:" + entry.getKey() + " satus:" + entry.getValue().getInitializationState() );
                    if(entry.getValue().getInitializationState() == AdapterStatus.State.READY){
                        readyAdNetwotk++;
                    }
                }


                MobileAds.setRequestConfiguration(
                        new RequestConfiguration.Builder().setTestDeviceIds(testDeviceIds)
                                .build());

                if( (readyAdNetwotk > 0) && (readyAdNetwotk == statusMap.size() ) && !mInitlizedAdunit){
                    mInitlizedAdunit = true;
                    Log.d(TAG, "Init Mediation Status all mediation adapter init success!!!");
                    initAllAdunits();
                }

                if(mCountdownTimer == null){
                    mCountdownTimer = new Timer();
                    mCountdownTimer.scheduleAtFixedRate(new TimerTask() {
                        @Override
                        public void run() {
                            if(mInitlizedAdunit){
                                mCountdownTimer.cancel();
                                return;
                            }

                            _activity.runOnUiThread(new Runnable() {
                                @Override
                                public void run() {
                                    if(!mInitlizedAdunit){
                                        mInitlizedAdunit = true;
                                        Log.d(TAG, "Init Mediation Status: TimeOut Start init add ad units!!!");
                                        initAllAdunits();
                                    }
                                }
                            });
                        }
                    }, 10000, 5000);
                }
            }
        });
    }

    public void umpRequestCOnsentInfoUpdate(boolean underAgeofConsent, boolean debug, boolean simulateEEA){

        ConsentDebugSettings debugSettings = null;
        ConsentDebugSettings.Builder builder = new ConsentDebugSettings.Builder(_activity);
        if(debug) {
            if(simulateEEA) {
                builder.setDebugGeography(ConsentDebugSettings
                        .DebugGeography
                        .DEBUG_GEOGRAPHY_EEA);
            } else {
                builder.setDebugGeography(ConsentDebugSettings
                        .DebugGeography
                        .DEBUG_GEOGRAPHY_NOT_EEA);
            }

            if(mTestDevices != null){
                for(String testid:mTestDevices){
                    builder.addTestDeviceHashedId(testid);
                }
            }
            debugSettings = builder.build();
        }

        ConsentRequestParameters params = new ConsentRequestParameters
                .Builder()
                .setConsentDebugSettings(debugSettings)
                .setTagForUnderAgeOfConsent(underAgeofConsent)
                .build();

        mConsentInformation = UserMessagingPlatform.getConsentInformation(_activity);
        mConsentInformation.requestConsentInfoUpdate(
                _activity,
                params,
                new com.google.android.ump.ConsentInformation.OnConsentInfoUpdateSuccessListener() {
                    @Override
                    public void onConsentInfoUpdateSuccess() {
                        // The consent information state was updated.
                        // You are now ready to check if a form is available.
                        Log.d(TAG, "consent status:"+mConsentInformation.getConsentStatus() );
                        if (mConsentInformation.isConsentFormAvailable()) {
                            loadForm();
                        }else {
							nativeOnUMPConsentResult(true, "");
						}
                    }
                },
                new com.google.android.ump.ConsentInformation.OnConsentInfoUpdateFailureListener() {
                    @Override
                    public void onConsentInfoUpdateFailure(FormError formError) {
                        // Handle the error.
                        Log.d(TAG, "error:"+formError.getMessage() );
                        nativeOnUMPConsentResult(false, "UpdateFailure:" + formError.getMessage() );
                    }
                });
    }


    public void umpResetConsent(){
        if(mConsentInformation != null){
            mConsentInformation.reset();
        }
    }

    public void loadForm() {
        UserMessagingPlatform.loadConsentForm(
                _activity,
                new UserMessagingPlatform.OnConsentFormLoadSuccessListener() {
                    @Override
                    public void onConsentFormLoadSuccess(com.google.android.ump.ConsentForm consentForm) {

                        mUMPConsentForm = consentForm;
                        if(mConsentInformation.getConsentStatus() == com.google.android.ump.ConsentInformation.ConsentStatus.REQUIRED) {
                            consentForm.show(
                                    _activity,
                                    new com.google.android.ump.ConsentForm.OnConsentFormDismissedListener() {
                                        @Override
                                        public void onConsentFormDismissed(@Nullable FormError formError) {
                                            // Handle dismissal by reloading form.
                                            loadForm();
                                        }
                                    });

                        } else {
                            Log.d(TAG, "consent status:"+mConsentInformation.getConsentStatus() );
                            nativeOnUMPConsentResult(true, "");
                        }

                    }
                },
                new UserMessagingPlatform.OnConsentFormLoadFailureListener() {
                    @Override
                    public void onConsentFormLoadFailure(FormError formError) {
                        String error = "Unknow error";
                        if(formError != null)  error = formError.getMessage();
                        Log.d(TAG, "onConsentFormLoadFailure:"+error );
                        nativeOnUMPConsentResult(false, "onConsentFormLoadFailure:" + error );
                    }
                }
        );
    }





    public void initAllAdunits(){
        if(mBannerUnit != null && mBannerUnit.length() > 1)
        {
            InitBanner();
        }

        if(mInterstitialUnit != null && mInterstitialUnit.length() > 1)
        {
            InitInterstitialAd();
        }

        if(mRewardedUnit != null && mRewardedUnit.length() > 1)
        {
            InitRewardAds();
        }
    }



    private void reloadRewardedVideo(){
		if(mRewardAd != null){
            return;
        }

        new Timer().schedule(new TimerTask() {
            @Override
            public void run() {
                _activity.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        loadRewardAdsImp(mRewardedUnit, false);
                    }
                });
            }
        }, mReloadTimer);
    }

    public void loadRewardAdsImp(String adUnit, boolean isCustom) {
        AdRequest adRequest = new AdRequest.Builder().build();
        final String adType = isCustom?" custom ":" auto ";
        RewardedAd.load(_activity, adUnit, adRequest, new RewardedAdLoadCallback() {
            @Override
            public void onAdLoaded(@NonNull RewardedAd rewardedAd) {
                AdmobMessageLog("AdMob:ReeardedVideo"+adType+"Load Success:" + adUnit + " ad network:"+rewardedAd.getResponseInfo().getMediationAdapterClassName());
                if(!isCustom) {
                    mRewardAd = rewardedAd;
                } else {
                    mCustomRewardedVideo.put(adUnit, rewardedAd);
                    nativeCustomRewardedVideoLoadSuccess(adUnit);
                }

                rewardedAd.setFullScreenContentCallback(new FullScreenContentCallback() {
                    @Override
                    public void onAdFailedToShowFullScreenContent(@NonNull AdError adError) {
                        AdmobMessageLog("AdMob:ReeardedVideo"+adType+"Show Fail:" + adUnit + " reason:" + adError);
                        if(isCustom){
                            nativeCustomPlayRewardedVideoFail(adUnit, adError.toString() );
                        }
                    }

                    @Override
                    public void onAdShowedFullScreenContent() {
                        AdmobMessageLog("AdMob:ReeardedVideo"+adType+"Show display:" + adUnit);
                    }

                    @Override
                    public void onAdDismissedFullScreenContent() {
                        AdmobMessageLog("AdMob:ReeardedVideo"+adType+"Show dismiss:" + adUnit);
                        if(!isCustom) {
							nativePlayRewardedClose();
                            mRewardAd = null;
                            reloadRewardedVideo();
                        } else {
                            mCustomRewardedVideo.remove(adUnit);
                            nativeCustomPlayRewardedVideoClose(adUnit);
                        }
                    }

                    @Override
                    public void onAdImpression() {
                        AdmobMessageLog("AdMob:ReeardedVideo"+adType+"Show record:" + adUnit);
                    }
                });
            }

            @Override
            public void onAdFailedToLoad(@NonNull LoadAdError loadAdError) {
                AdmobMessageLog("AdMob:ReeardedVideo"+adType+"Load fail:" + adUnit + " reason:" + loadAdError);
                if(!isCustom) {
                    reloadRewardedVideo();
                } else {
                    nativeCustomRewardedVideoLoadFail(adUnit, loadAdError.toString() );
                }
            }
        });
    }

    public  void InitRewardAds() {
        loadRewardAdsImp(mRewardedUnit, false);
    }

    public void LoadCustomRewardedVideoImp(final String adUnit){
        loadRewardAdsImp(adUnit, true);
    }

    public void LoadCustomRewardedVideo(final String adUnit){
        _activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                LoadCustomRewardedVideoImp(adUnit);
            }
        });
    }

    public boolean IsCustomRewardedVideoLoaded(final String adUnit){

        FutureTask<Boolean> futureResult = new FutureTask<Boolean>(new Callable<Boolean>() {
            @Override
            public Boolean call() throws Exception {
                if(!mCustomRewardedVideo.containsKey(adUnit)){
                    return false;
                }
                return true;
            }
        });

        _activity.runOnUiThread(futureResult);

        try{
            boolean ret = futureResult.get();
            return ret;
        }catch (InterruptedException e){
            return false;
        }
        catch (ExecutionException e){
            return false;
        }
    }

    public void PlayCustomRewardedVideo(final String adUnit){
        _activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if(!mCustomRewardedVideo.containsKey(adUnit) ){
                    return;
                }

                mCustomRewardedVideo.get(adUnit).show(_activity, new OnUserEarnedRewardListener() {
                    @Override
                    public void onUserEarnedReward(@NonNull RewardItem rewardItem) {
                        AdmobMessageLog("AdMob:ReeardedVideo Custom Ads Complete:" + adUnit);
                        nativeCustomPlayRewardedVideoComplete(adUnit, rewardItem.getType(), rewardItem.getAmount() );
                    }
                });
            }
        });
    }

    public void playRewardAds()
    {
        if(mRewardAd == null)
        {
            return;
        }

        _activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if(mRewardAd != null) {
                    Log.d(TAG, "AdMob:play rewardedvideo");
                    mRewardAd.show(_activity, new OnUserEarnedRewardListener() {
                        @Override
                        public void onUserEarnedReward(@NonNull RewardItem rewardItem) {
                            AdmobMessageLog("AdMob:ReeardedVideo Auto Ads Complete:" + mRewardedUnit);
                            nativePlayRewardedComplete(rewardItem.getType(), rewardItem.getAmount() );
                        }
                    });
                }
            }
        });
    }

    public  void OnPause() {
    }

    public  void OnResume()
    {
    }

    public  void OnDestroy()
    {
        mRewardAd = null;
    }

    private void updateAdVisibility(boolean loadIfNeeded)
    {
        if (!adInit || (adPopupWindow == null))
        {
            return;
        }

        // request an ad if we don't have one available or requested, but would like one
        if (adWantsToBeShown && !adIsAvailable && !adIsRequested && loadIfNeeded)
        {
            Bundle extras = new Bundle();


            AdRequest adRequest = new AdRequest.Builder()
                    .addNetworkExtrasBundle(AdMobAdapter.class, extras)
                    .build();		// add test devices here
            adView.loadAd(adRequest);

            adIsRequested = true;
        }

        if (adIsAvailable && adWantsToBeShown)
        {
            if (adPopupWindow.isShowing())
            {
                return;
            }

            adPopupWindow.showAtLocation(activityLayout, adGravity, 0, 0);
            // don't call update on 7.0 to work around this issue: https://code.google.com/p/android/issues/detail?id=221001
            if (ANDROID_BUILD_VERSION != 24)
            {
                adPopupWindow.update();
            }
        }
        else
        {
            if (!adPopupWindow.isShowing())
            {
                return;
            }

            adPopupWindow.dismiss();
            adPopupWindow.update();
        }
    }

    public void HideAdBanner()
    {
        Log.d(TAG, "In AndroidThunkJava_HideAdBanner");

        if (!adInit)
        {
            return;
        }

        _activity.runOnUiThread(new Runnable()
        {
            @Override
            public void run()
            {
                adWantsToBeShown = false;
                updateAdVisibility(true);
            }
        });
    }

    private void reloadInterstitial(){
		if(mInterstitialAd != null){
            return;
        }

        new Timer().schedule(new TimerTask() {
            @Override
            public void run() {
                _activity.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        LoadInterstitialImp(mInterstitialUnit, false);
                    }
                });
            }
        }, mReloadTimer);
    }

    private void AdmobMessageLog(String message) {
        Log.d(TAG, message);
        nativeDebugMessage(message);
    }

    public void LoadInterstitialImp(String adUnit, boolean isCustomAds){
        AdRequest adRequest = new AdRequest.Builder().build();
        final String adsType = isCustomAds? " custom ":" auto ";
        InterstitialAd.load(_activity, adUnit, adRequest, new InterstitialAdLoadCallback() {
            @Override
            public void onAdLoaded(@NonNull InterstitialAd interstitialAd) {
                AdmobMessageLog("AdMob:Interstitial"+adsType+"ads Load Success:" + adUnit + " ad network:" + interstitialAd.getResponseInfo().getMediationAdapterClassName());
                if(!isCustomAds){
                    mInterstitialAd = interstitialAd;
                } else {
                    mCustomInterstitial.put(adUnit, interstitialAd);
                    nativeCustomInterstitialLoadSuccess(adUnit);
                }

                interstitialAd.setFullScreenContentCallback(new FullScreenContentCallback() {
                    @Override
                    public void onAdFailedToShowFullScreenContent(@NonNull AdError adError) {
                        AdmobMessageLog("AdMob:Interstitial "+adsType+" ads Show fail:" + adUnit);
                    }

                    @Override
                    public void onAdShowedFullScreenContent() {
                        AdmobMessageLog("AdMob:Interstitial "+adsType+" ads Show display:" + adUnit);
                    }

                    @Override
                    public void onAdDismissedFullScreenContent() {
                        AdmobMessageLog("AdMob:Interstitial "+adsType+" ads Show dismiss:" + adUnit);
                        nativeInterstitialClose();
                        if(!isCustomAds) {
                            nativeInterstitialClose();
                            mInterstitialAd = null;
                            reloadInterstitial();
                        } else {
                            nativeCustomInterstitialClose(adUnit);
                            mCustomInterstitial.remove(adUnit);
                        }
                    }

                    @Override
                    public void onAdImpression() {
                        AdmobMessageLog("AdMob:Interstitial "+adsType+" ads Show record:" + adUnit);
                        if(!isCustomAds){
                            nativeInterstitialShow();
                        } else {
                            nativeCustomInterstitialShow(adUnit);
                        }
                    }
                });
            }

            @Override
            public void onAdFailedToLoad(@NonNull LoadAdError loadAdError) {
                AdmobMessageLog("AdMob:Interstitial "+adsType+" ads Load Fail:" + adUnit + " error:" + loadAdError);
                if(!isCustomAds) {
                    reloadInterstitial();
                } else {
                    nativeCustomInterstitialLoadFail(adUnit, loadAdError.toString() );
                }
            }
        });
    }

    public void InitInterstitialAd() {
        LoadInterstitialImp(mInterstitialUnit, false);
    }


    private void LoadCustomInterstitialImp(final String adUnit){
        if(mCustomInterstitial.containsKey(adUnit) ){
            mCustomInterstitial.remove(adUnit);
        }
        LoadInterstitialImp(adUnit, true);
    }

    public void LoadCustomInterstitial(final String adUnit){
        _activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                LoadCustomInterstitialImp(adUnit);
            }
        });
    }

    public boolean IsCustomInterstitialLoaded(final String adUnit){
        FutureTask<Boolean> futureResult = new FutureTask<Boolean>(new Callable<Boolean>() {
            @Override
            public Boolean call() throws Exception {
                if(!mCustomInterstitial.containsKey(adUnit) ){
                    return false;
                }
                return true;
            }
        });

        _activity.runOnUiThread(futureResult);

        try{
            boolean ret = futureResult.get();
            return ret;
        }catch (InterruptedException e){
            return false;
        }
        catch (ExecutionException e){
            return false;
        }
    }

    public void ShowCustomInterstitialAd(final String adUnit){
        _activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if(!IsCustomInterstitialLoaded(adUnit) ){
                    return;
                }
                mCustomInterstitial.get(adUnit).show(_activity);
            }
        });
    }

    public  void ShowInterstitialAd()
    {
        Log.d(TAG, "Admob:ShowInterstitialAd AdUnit");

        if(mInterstitialAd != null) {
            _activity.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (mInterstitialAd != null) {
                        mInterstitialAd.show(_activity);
                    }
                }
            });
        }
    }

    private void reloadBanner(){
        new Timer().schedule(new TimerTask() {
            @Override
            public void run() {
                _activity.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        Bundle extras = new Bundle();

                        AdRequest adRequest = new AdRequest.Builder()
                                .addNetworkExtrasBundle(AdMobAdapter.class, extras)
                                .build();		// add test devices here
                        adView.loadAd(adRequest);
                    }
                });
            }
        }, mReloadTimer);
    }

    private AdSize getAdSize() {
        // Step 2 - Determine the screen width (less decorations) to use for the ad width.
        Display display = _activity.getWindowManager().getDefaultDisplay();
        DisplayMetrics outMetrics = new DisplayMetrics();
        display.getMetrics(outMetrics);

        float widthPixels = outMetrics.widthPixels;
        float density = outMetrics.density;

        int adWidth = (int) (widthPixels / density);

        // Step 3 - Get adaptive ad size and return for setting on the ad view.
        return AdSize.getCurrentOrientationAnchoredAdaptiveBannerAdSize(_activity, adWidth);
    }

    public void createCustomBannerView() {
        customBannerView = new AdView(_activity);
        customBannerView.setAdSize(AdSize.BANNER);

        final DisplayMetrics dm = _activity.getResources().getDisplayMetrics();
        final float scale = dm.density;
        customPopupWindow = new PopupWindow(_activity);
        customPopupWindow.setWidth((int)(320*scale));
        customPopupWindow.setHeight((int)(50*scale));
        customPopupWindow.setWindowLayoutMode(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        customPopupWindow.setClippingEnabled(false);

        customAdLayout = new LinearLayout(_activity);

        final int padding = (int)(1*scale);
        customAdLayout.setPadding(padding,padding,padding,padding);

        ViewGroup.MarginLayoutParams params = new ViewGroup.MarginLayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);;

        params.setMargins(0,0,0,0);

        customAdLayout.setOrientation(LinearLayout.VERTICAL);
        customAdLayout.addView(customBannerView, params);
        customPopupWindow.setContentView(customAdLayout);
    }

    public void LoadCustomBanner(String bannerId) {
        _activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if(!mInitlizedAdunit) {
                    return;
                }
                createCustomBannerView();

                customBannerView.setAdUnitId(bannerId);

                customBannerView.setAdListener(new AdListener() {
                    @Override
                    public void onAdFailedToLoad(@NonNull LoadAdError loadAdError) {
                        nativeCustomBannerLoad(false, loadAdError.toString() );
                    }

                    @Override
                    public void onAdLoaded() {
                        nativeCustomBannerLoad(true, "");
                    }
                });


                Bundle extras = new Bundle();
                AdRequest adRequest = new AdRequest.Builder()
                        .addNetworkExtrasBundle(AdMobAdapter.class, extras)
                        .build();		// add test devices here
                customBannerView.loadAd(adRequest);
            }
        });


    }

    public void ShowCustomBanner(boolean bottom) {
        _activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if(!mInitlizedAdunit) {
                    return;
                }

                if(customBannerView == null) {
                    return;
                }

                customPopupWindow.showAtLocation(activityLayout, bottom?Gravity.BOTTOM:Gravity.TOP, 0, 0);
                // don't call update on 7.0 to work around this issue: https://code.google.com/p/android/issues/detail?id=221001
                if (ANDROID_BUILD_VERSION != 24)
                {
                    customPopupWindow.update();
                }
            }
        });
    }

    public void HideCustomBanner() {
        _activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if(!mInitlizedAdunit) {
                    return;
                }
                if(customBannerView == null) {
                    return;
                }
                customPopupWindow.dismiss();
                customPopupWindow.update();
            }
        });
    }

    public void InitBanner()
    {
        adView = new AdView(_activity);
        adView.setAdUnitId(mBannerUnit);
        adView.setAdSize(AdSize.BANNER);

        adInit = true;

        final DisplayMetrics dm = _activity.getResources().getDisplayMetrics();
        final float scale = dm.density;
        adPopupWindow = new PopupWindow(_activity);
        adPopupWindow.setWidth((int)(320*scale));
        adPopupWindow.setHeight((int)(50*scale));
        adPopupWindow.setWindowLayoutMode(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        adPopupWindow.setClippingEnabled(false);

        adLayout = new LinearLayout(_activity);

        final int padding = (int)(1*scale);
        adLayout.setPadding(padding,padding,padding,padding);

        ViewGroup.MarginLayoutParams params = new ViewGroup.MarginLayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);;

        params.setMargins(0,0,0,0);

        adLayout.setOrientation(LinearLayout.VERTICAL);
        adLayout.addView(adView, params);
        adPopupWindow.setContentView(adLayout);

        Bundle extras = new Bundle();
        AdRequest adRequest = new AdRequest.Builder()
                .addNetworkExtrasBundle(AdMobAdapter.class, extras)
                .build();		// add test devices here
        adView.loadAd(adRequest);

        // set up our ad callbacks
        adView.setAdListener(new AdListener()
        {
            @Override
            public void onAdLoaded()
            {
                adIsAvailable = true;
                adIsRequested = false;
                AdmobMessageLog("AdMob:" + "AdMob Banner Loaded ");
                updateAdVisibility(true);
            }

            @Override
            public void onAdFailedToLoad(LoadAdError var1) {
                adIsAvailable = false;
                adIsRequested = false;
                AdmobMessageLog("AdMob:" + "AdMob Banner Load Fail:" + var1);
                updateAdVisibility(false);
                reloadBanner();
            }
        });

        //adWantsToBeShown = true;
        updateAdVisibility(true);
    }

    public void setTagForChildDirectedTreatment(int setting){

        if(_TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED == setting) {
            RequestConfiguration requestConfiguration = MobileAds.getRequestConfiguration()
                    .toBuilder()
                    .setTagForChildDirectedTreatment(TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED)
                    .build();
            MobileAds.setRequestConfiguration(requestConfiguration);
        } else if(_TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE == setting) {
            RequestConfiguration requestConfiguration = MobileAds.getRequestConfiguration()
                    .toBuilder()
                    .setTagForChildDirectedTreatment(TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE)
                    .build();
            MobileAds.setRequestConfiguration(requestConfiguration);
        } else if(_TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE == setting){
            RequestConfiguration requestConfiguration = MobileAds.getRequestConfiguration()
                    .toBuilder()
                    .setTagForChildDirectedTreatment(TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE)
                    .build();
            MobileAds.setRequestConfiguration(requestConfiguration);
        } else {
            Log.d(TAG, "unsupport setting for setTagForChildDirectedTreatment:" + setting);
        }
    }

    public void setTagForUnderAgeOfConsent(int setting) {

        if(_TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE == setting) {
            RequestConfiguration requestConfiguration = MobileAds.getRequestConfiguration()
                    .toBuilder()
                    .setTagForUnderAgeOfConsent(TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE)
                    .build();
            MobileAds.setRequestConfiguration(requestConfiguration);
        } else if(_TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE == setting){
            RequestConfiguration requestConfiguration = MobileAds.getRequestConfiguration()
                    .toBuilder()
                    .setTagForUnderAgeOfConsent(TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE)
                    .build();
            MobileAds.setRequestConfiguration(requestConfiguration);
        } else if(_TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED == setting){
            RequestConfiguration requestConfiguration = MobileAds.getRequestConfiguration()
                    .toBuilder()
                    .setTagForUnderAgeOfConsent(TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED)
                    .build();
            MobileAds.setRequestConfiguration(requestConfiguration);
        } else {
            Log.d(TAG, "unsupport setting for setTagForUnderAgeOfConsent:" + setting);
        }
    }


    public void setMaxAdContentRating(int setting) {
        if(_MAX_AD_CONTENT_RATING_G == setting) {
            RequestConfiguration requestConfiguration = MobileAds.getRequestConfiguration()
                    .toBuilder()
                    .setMaxAdContentRating(MAX_AD_CONTENT_RATING_G)
                    .build();
            MobileAds.setRequestConfiguration(requestConfiguration);
        } else if(_MAX_AD_CONTENT_RATING_PG == setting){
            RequestConfiguration requestConfiguration = MobileAds.getRequestConfiguration()
                    .toBuilder()
                    .setMaxAdContentRating(MAX_AD_CONTENT_RATING_PG)
                    .build();
            MobileAds.setRequestConfiguration(requestConfiguration);
        } else if(_MAX_AD_CONTENT_RATING_T == setting){
            RequestConfiguration requestConfiguration = MobileAds.getRequestConfiguration()
                    .toBuilder()
                    .setMaxAdContentRating(MAX_AD_CONTENT_RATING_T)
                    .build();
            MobileAds.setRequestConfiguration(requestConfiguration);
        } else if(_MAX_AD_CONTENT_RATING_MA == setting){
            RequestConfiguration requestConfiguration = MobileAds.getRequestConfiguration()
                    .toBuilder()
                    .setMaxAdContentRating(MAX_AD_CONTENT_RATING_MA)
                    .build();
            MobileAds.setRequestConfiguration(requestConfiguration);
        } else {
            Log.d(TAG, "unsupport setting for setMaxAdContentRating:" + setting);
        }
    }

    public  void ShowBanner(boolean bShowOnBottonOfScreen)
    {
        adGravity = bShowOnBottonOfScreen ? Gravity.BOTTOM : Gravity.TOP;

        if (adInit)
        {
            // already created, make it visible
            _activity.runOnUiThread(new Runnable()
            {
                @Override
                public void run()
                {
                    if ((adPopupWindow == null) || adPopupWindow.isShowing())
                    {
                        return;
                    }

                    adWantsToBeShown = true;
                    updateAdVisibility(true);
                }
            });

            return;
        }
    }

    public native void nativeInterstitialClick();
    public native void nativeInterstitialShow();
    public native void nativeInterstitialClose();

    public native void nativePlayRewardedComplete(String strType, int amount);
    public native void nativePlayRewardedClose();
    public native void nativeDebugMessage(String debugMessage);

    public native void nativeCustomInterstitialLoadSuccess(String adUnit);
    public native void nativeCustomInterstitialLoadFail(String adUnit, String errmsg);

    public native void nativeCustomRewardedVideoLoadSuccess(String adUnit);
    public native void nativeCustomRewardedVideoLoadFail(String adUnit, String errmsg);

    public native void nativeCustomBannerLoad(boolean success, String errmsg);

    public native void nativeCustomInterstitialClick(String adUnit);
    public native void nativeCustomInterstitialShow(String adUnit);
    public native void nativeCustomInterstitialClose(String adUnit);

    public native void nativeCustomPlayRewardedVideoComplete(String adUnit, String strType, int amount);
    public native void nativeCustomPlayRewardedVideoClose(String adUnit);
    public native void nativeCustomPlayRewardedVideoFail(String adUnit, String errmsg);

    public native void nativeOnConsentInfoUpdated(String publisherId, boolean success, int status);
    public native void nativeOnUserConfirmConsent(int status, boolean preferAdsFree);
    public native void nativeOnUMPConsentResult(boolean isSuccess, String err);
}
