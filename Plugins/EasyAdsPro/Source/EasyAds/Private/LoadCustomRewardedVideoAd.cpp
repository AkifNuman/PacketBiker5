/*
* EasyAds Pro - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

#include "LoadCustomRewardedVideoAd.h"

TMap<FString, ULoadCustomRewardedVideoAd*> ULoadCustomRewardedVideoAd::mLoadCustomRewardedVideoMap;

#if PLATFORM_ANDROID
void AndroidLoadCustomRewardedVideo(const FString& adUnit);
#endif

#if PLATFORM_IOS
extern "C" void IOS_LoadCustomRewardedVideo(FString adUnit);
#endif

ULoadCustomRewardedVideoAd::ULoadCustomRewardedVideoAd()
{

}

ULoadCustomRewardedVideoAd::~ULoadCustomRewardedVideoAd()
{
	if (mLoadCustomRewardedVideoMap.Contains(mAdUnit) && mLoadCustomRewardedVideoMap[mAdUnit] == this)
	{
		mLoadCustomRewardedVideoMap.Remove(mAdUnit);
	}
}

ULoadCustomRewardedVideoAd* ULoadCustomRewardedVideoAd::LoadCustomRewardedVideoAd(const FString& adUnit)
{
	ULoadCustomRewardedVideoAd* ret = NewObject<ULoadCustomRewardedVideoAd>();
	ret->mAdUnit = adUnit;

	if (mLoadCustomRewardedVideoMap.Contains(adUnit))
	{
		mLoadCustomRewardedVideoMap[adUnit]->RemoveFromRoot();
		mLoadCustomRewardedVideoMap.Remove(adUnit);
	}
	
	mLoadCustomRewardedVideoMap.Add(adUnit, ret);
	ret->AddToRoot();

	return ret;
}

void ULoadCustomRewardedVideoAd::Activate()
{
#if PLATFORM_ANDROID
	AndroidLoadCustomRewardedVideo(mAdUnit);
#endif

#if PLATFORM_IOS
	IOS_LoadCustomRewardedVideo(mAdUnit);
#endif
}

void ULoadCustomRewardedVideoAd::OnLoadCompleteCallback(const FString& adUnit)
{
	if (!mLoadCustomRewardedVideoMap.Contains(adUnit))
	{
		return;
	}

	mLoadCustomRewardedVideoMap[adUnit]->OnLoadSuccess.Broadcast();
	mLoadCustomRewardedVideoMap[adUnit]->RemoveFromRoot();
}

void ULoadCustomRewardedVideoAd::OnLoadFailCallback(const FString& adUnit, const FString& errmsg)
{
	if (!mLoadCustomRewardedVideoMap.Contains(adUnit))
	{
		return;
	}

	mLoadCustomRewardedVideoMap[adUnit]->OnLoadFail.Broadcast(errmsg);
	mLoadCustomRewardedVideoMap[adUnit]->RemoveFromRoot();
}