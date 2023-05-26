// Fill out your copyright notice in the Description page of Project Settings.


#include "UMPRequestConsentInfoUpdate.h"

static UUMPRequestConsentInfoUpdate* s_currentUMPRequestConsentUpdate = nullptr;



#if PLATFORM_ANDROID
void AndroidUMPRequestConsentInfoUpdate(bool underAgeOfConsent);
#endif

#if PLATFORM_IOS
extern "C" void IOS_UMPRequestConsentInfoUpdate(bool underAgeOfConsent);
#endif


UUMPRequestConsentInfoUpdate::UUMPRequestConsentInfoUpdate():mUnderAgeOfConsent(false)
{

}

UUMPRequestConsentInfoUpdate::~UUMPRequestConsentInfoUpdate()
{
	if (s_currentUMPRequestConsentUpdate == this) 
	{
		s_currentUMPRequestConsentUpdate = nullptr;
	}
}

UUMPRequestConsentInfoUpdate* UUMPRequestConsentInfoUpdate::UMPRequestConsentInfoUpdate(bool underAgeOfConsent)
{
	UUMPRequestConsentInfoUpdate* pRet = NewObject<UUMPRequestConsentInfoUpdate>();
	pRet->mUnderAgeOfConsent = underAgeOfConsent;

	return pRet;
}

void UUMPRequestConsentInfoUpdate::Activate()
{
	if (s_currentUMPRequestConsentUpdate)
	{
		UE_LOG(EasyAds, Error, TEXT("UUMPRequestConsentInfoUpdate should only one UUMPRequestConsentInfoUpdate exist"));
		s_currentUMPRequestConsentUpdate->RemoveFromRoot();
	}
	s_currentUMPRequestConsentUpdate = this;
	s_currentUMPRequestConsentUpdate->AddToRoot();
	
#if PLATFORM_ANDROID
	AndroidUMPRequestConsentInfoUpdate(mUnderAgeOfConsent);
#endif
    
#if PLATFORM_IOS
    IOS_UMPRequestConsentInfoUpdate(mUnderAgeOfConsent);
#endif
}

void UUMPRequestConsentInfoUpdate::OnConsentUpdateCallback(bool isSuccess, const FString& err)
{
	if (s_currentUMPRequestConsentUpdate) 
	{
		s_currentUMPRequestConsentUpdate->OnConsentUpdate.Broadcast(isSuccess, err);
		s_currentUMPRequestConsentUpdate = nullptr;
	}
	
}
