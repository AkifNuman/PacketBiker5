// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LoadCustomBannerAd.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomBannerLoadFailDelegate, FString, errmsg);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCustomBannerLoadSuccessDelegate);

/**
 * 
 */
UCLASS()
class EASYADS_API ULoadCustomBannerAd : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	ULoadCustomBannerAd();
	~ULoadCustomBannerAd();

	UPROPERTY(BlueprintAssignable)
		FCustomBannerLoadFailDelegate OnLoadFail;


	UPROPERTY(BlueprintAssignable)
		FCustomBannerLoadSuccessDelegate OnLoadSuccess;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "LoadCustomBannerAd", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "EasyAds")
		static ULoadCustomBannerAd* LoadCustomBannerAd(const FString& adUnit);

	virtual void Activate() override;

	void OnLoadCompleteCallback();
	void OnLoadFailCallback(const FString& errmsg);

private:
	FString mBannerUnit;
};
