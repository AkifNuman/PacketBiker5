// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadCustomBannerAd.h"

ULoadCustomBannerAd* g_CustomBannerAd = nullptr;

#if PLATFORM_ANDROID
void AndroidLoadCustomBanner(const FString& adUnit);
#endif

#if PLATFORM_IOS
extern "C" void IOS_LoadCustomBanner(FString adUnit);
#endif

ULoadCustomBannerAd::ULoadCustomBannerAd()
{

}

ULoadCustomBannerAd::~ULoadCustomBannerAd()
{
	if (g_CustomBannerAd == this)
	{
		g_CustomBannerAd = nullptr;
	}
}

ULoadCustomBannerAd* ULoadCustomBannerAd::LoadCustomBannerAd(const FString& adUnit)
{
	ULoadCustomBannerAd* ret = NewObject<ULoadCustomBannerAd>();
	ret->AddToRoot();

	if (g_CustomBannerAd)
	{
		g_CustomBannerAd->RemoveFromRoot();
	}
	g_CustomBannerAd = ret;
	ret->mBannerUnit = adUnit;

	return ret;
}

void ULoadCustomBannerAd::Activate()
{
#if PLATFORM_ANDROID
	AndroidLoadCustomBanner(mBannerUnit);
#endif

#if PLATFORM_IOS
	IOS_LoadCustomBanner(mBannerUnit);
#endif
}

void ULoadCustomBannerAd::OnLoadCompleteCallback()
{
	OnLoadSuccess.Broadcast();
}

void ULoadCustomBannerAd::OnLoadFailCallback(const FString& errmsg)
{
	OnLoadFail.Broadcast(errmsg);
}