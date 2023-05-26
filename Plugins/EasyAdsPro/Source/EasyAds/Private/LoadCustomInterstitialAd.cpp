/*
* EasyAds Pro - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

#include "LoadCustomInterstitialAd.h"

TMap<FString, ULoadCustomInterstitialAd*> ULoadCustomInterstitialAd::mLoadCustomInterstitialMap;


#if PLATFORM_ANDROID
void AndroidLoadCustomInterstial(const FString& adUnit);
#endif

#if PLATFORM_IOS
extern "C" void IOS_LoadCustomInterstitial(FString adUnit);
#endif

ULoadCustomInterstitialAd::ULoadCustomInterstitialAd()
{

}

ULoadCustomInterstitialAd::~ULoadCustomInterstitialAd()
{
	if (mLoadCustomInterstitialMap.Contains(mAdUnit) && mLoadCustomInterstitialMap[mAdUnit] == this)
	{
		mLoadCustomInterstitialMap.Remove(mAdUnit);
	}
}

ULoadCustomInterstitialAd* ULoadCustomInterstitialAd::LoadCustomInterstitialAd(const FString& adUnit)
{
	ULoadCustomInterstitialAd* pRet = NewObject<ULoadCustomInterstitialAd>();
	pRet->mAdUnit = adUnit;

	if (mLoadCustomInterstitialMap.Contains(adUnit)) 
	{
		mLoadCustomInterstitialMap[adUnit]->RemoveFromRoot();
		mLoadCustomInterstitialMap.Remove(adUnit);
	}
	
	mLoadCustomInterstitialMap.Add(adUnit, pRet);
	pRet->AddToRoot();

	return pRet;
}

void ULoadCustomInterstitialAd::OnLoadCompleteCallback(const FString& adUnit)
{
	if (!mLoadCustomInterstitialMap.Contains(adUnit))
	{
		return;
	}

	mLoadCustomInterstitialMap[adUnit]->OnLoadSuccess.Broadcast();
	mLoadCustomInterstitialMap[adUnit]->RemoveFromRoot();
}

void ULoadCustomInterstitialAd::OnLoadFailCallback(const FString& adUnit, const FString& errmsg)
{
	if (!mLoadCustomInterstitialMap.Contains(adUnit))
	{
		return;
	}

	mLoadCustomInterstitialMap[adUnit]->OnLoadFail.Broadcast(errmsg);
	mLoadCustomInterstitialMap[adUnit]->RemoveFromRoot();
}

void ULoadCustomInterstitialAd::Activate()
{
	// do custom load
#if PLATFORM_ANDROID
	AndroidLoadCustomInterstial(mAdUnit);
#endif

#if PLATFORM_IOS
	IOS_LoadCustomInterstitial(mAdUnit);
#endif
}
