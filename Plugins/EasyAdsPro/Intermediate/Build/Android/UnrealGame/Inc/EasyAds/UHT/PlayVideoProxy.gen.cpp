// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/PlayVideoProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayVideoProxy() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_UPlayVideoProxy();
	EASYADS_API UClass* Z_Construct_UClass_UPlayVideoProxy_NoRegister();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics
	{
		struct _Script_EasyAds_eventDynamicEasyAdsDebugMessageDelegate_Parms
		{
			FString debugMessage;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_debugMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::NewProp_debugMessage = { "debugMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EasyAds_eventDynamicEasyAdsDebugMessageDelegate_Parms, debugMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::NewProp_debugMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayVideoProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "DynamicEasyAdsDebugMessageDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::_Script_EasyAds_eventDynamicEasyAdsDebugMessageDelegate_Parms), Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics
	{
		struct _Script_EasyAds_eventPlayRewardedDelegate_Parms
		{
			FString item;
			int32 amount;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_item;
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EasyAds_eventPlayRewardedDelegate_Parms, item), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EasyAds_eventPlayRewardedDelegate_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::NewProp_item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayVideoProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "PlayRewardedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::_Script_EasyAds_eventPlayRewardedDelegate_Parms), Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayVideoProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "DynamicRewardedClosedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayVideoProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "DynamicInterstitialShowDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayVideoProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "DynamicInterstitialClickDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayVideoProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "DynamicInterstitialCloseDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPlayVideoProxy::execPlayRewardedVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayVideoProxy**)Z_Param__Result=UPlayVideoProxy::PlayRewardedVideo();
		P_NATIVE_END;
	}
	void UPlayVideoProxy::StaticRegisterNativesUPlayVideoProxy()
	{
		UClass* Class = UPlayVideoProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayRewardedVideo", &UPlayVideoProxy::execPlayRewardedVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics
	{
		struct PlayVideoProxy_eventPlayRewardedVideo_Parms
		{
			UPlayVideoProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayVideoProxy_eventPlayRewardedVideo_Parms, ReturnValue), Z_Construct_UClass_UPlayVideoProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyAds" },
		{ "Comment", "/**\n\x09* play rewarded video ads\n\x09* @param\x09""AdType\x09\x09the type of the ads\n\x09*/" },
		{ "DisplayName", "PlayRewardedVideo" },
		{ "ModuleRelativePath", "Public/PlayVideoProxy.h" },
		{ "ToolTip", "play rewarded video ads\n@param        AdType          the type of the ads" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayVideoProxy, nullptr, "PlayRewardedVideo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::PlayVideoProxy_eventPlayRewardedVideo_Parms), Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayVideoProxy);
	UClass* Z_Construct_UClass_UPlayVideoProxy_NoRegister()
	{
		return UPlayVideoProxy::StaticClass();
	}
	struct Z_Construct_UClass_UPlayVideoProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayVideoProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayVideoProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayVideoProxy_PlayRewardedVideo, "PlayRewardedVideo" }, // 2231688927
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayVideoProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayVideoProxy.h" },
		{ "ModuleRelativePath", "Public/PlayVideoProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayVideoProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "/**\n\x09* Called when the Rewarded video ads complete\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayVideoProxy.h" },
		{ "ToolTip", "Called when the Rewarded video ads complete" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayVideoProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayVideoProxy, OnSuccess), Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayVideoProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayVideoProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 3801188316
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayVideoProxy_Statics::NewProp_OnClosed_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayVideoProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayVideoProxy_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayVideoProxy, OnClosed), Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlayVideoProxy_Statics::NewProp_OnClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayVideoProxy_Statics::NewProp_OnClosed_MetaData)) }; // 228737806
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayVideoProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayVideoProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayVideoProxy_Statics::NewProp_OnClosed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayVideoProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayVideoProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayVideoProxy_Statics::ClassParams = {
		&UPlayVideoProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayVideoProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayVideoProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayVideoProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayVideoProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayVideoProxy()
	{
		if (!Z_Registration_Info_UClass_UPlayVideoProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayVideoProxy.OuterSingleton, Z_Construct_UClass_UPlayVideoProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayVideoProxy.OuterSingleton;
	}
	template<> EASYADS_API UClass* StaticClass<UPlayVideoProxy>()
	{
		return UPlayVideoProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayVideoProxy);
	UPlayVideoProxy::~UPlayVideoProxy() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayVideoProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayVideoProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayVideoProxy, UPlayVideoProxy::StaticClass, TEXT("UPlayVideoProxy"), &Z_Registration_Info_UClass_UPlayVideoProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayVideoProxy), 211502578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayVideoProxy_h_3374055404(TEXT("/Script/EasyAds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayVideoProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_PlayVideoProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
