// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Delegates/DelegateCombinations.h"
#include "UMPRequestConsentInfoUpdate.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUMPConsentDelegate, bool, isSuccess, const FString&, err);

/**
 * 
 */
UCLASS()
class EASYADS_API UUMPRequestConsentInfoUpdate : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()


public:

	UUMPRequestConsentInfoUpdate();
	~UUMPRequestConsentInfoUpdate();

	UPROPERTY(BlueprintAssignable)
	FUMPConsentDelegate OnConsentUpdate;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "UMPRequestConsentInfoUpdate", BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "EasyAds|GDPR|UMP")
	static UUMPRequestConsentInfoUpdate* UMPRequestConsentInfoUpdate(bool underAgeOfConsent);

	virtual void Activate() override;

	static void OnConsentUpdateCallback(bool isSuccess, const FString& err);

private:
	bool mUnderAgeOfConsent;
};
