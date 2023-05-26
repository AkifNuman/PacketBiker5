// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/ShowInterstitialProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowInterstitialProxy() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_UShowInterstitialProxy();
	EASYADS_API UClass* Z_Construct_UClass_UShowInterstitialProxy_NoRegister();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
// End Cross Module References
	DEFINE_FUNCTION(UShowInterstitialProxy::execShowInterstitial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UShowInterstitialProxy**)Z_Param__Result=UShowInterstitialProxy::ShowInterstitial();
		P_NATIVE_END;
	}
	void UShowInterstitialProxy::StaticRegisterNativesUShowInterstitialProxy()
	{
		UClass* Class = UShowInterstitialProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowInterstitial", &UShowInterstitialProxy::execShowInterstitial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics
	{
		struct ShowInterstitialProxy_eventShowInterstitial_Parms
		{
			UShowInterstitialProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShowInterstitialProxy_eventShowInterstitial_Parms, ReturnValue), Z_Construct_UClass_UShowInterstitialProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyAds" },
		{ "DisplayName", "ShowInterstitial" },
		{ "ModuleRelativePath", "Public/ShowInterstitialProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShowInterstitialProxy, nullptr, "ShowInterstitial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::ShowInterstitialProxy_eventShowInterstitial_Parms), Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShowInterstitialProxy);
	UClass* Z_Construct_UClass_UShowInterstitialProxy_NoRegister()
	{
		return UShowInterstitialProxy::StaticClass();
	}
	struct Z_Construct_UClass_UShowInterstitialProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnShow_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClose_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShowInterstitialProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShowInterstitialProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial, "ShowInterstitial" }, // 2439561101
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowInterstitialProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ShowInterstitialProxy.h" },
		{ "ModuleRelativePath", "Public/ShowInterstitialProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnShow_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowInterstitialProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnShow = { "OnShow", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowInterstitialProxy, OnShow), Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnShow_MetaData)) }; // 436980078
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClick_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowInterstitialProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClick = { "OnClick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowInterstitialProxy, OnClick), Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClick_MetaData)) }; // 1180389836
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClose_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowInterstitialProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClose = { "OnClose", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowInterstitialProxy, OnClose), Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClose_MetaData)) }; // 2303554216
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShowInterstitialProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShowInterstitialProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShowInterstitialProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShowInterstitialProxy_Statics::ClassParams = {
		&UShowInterstitialProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShowInterstitialProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShowInterstitialProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShowInterstitialProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShowInterstitialProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShowInterstitialProxy()
	{
		if (!Z_Registration_Info_UClass_UShowInterstitialProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShowInterstitialProxy.OuterSingleton, Z_Construct_UClass_UShowInterstitialProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShowInterstitialProxy.OuterSingleton;
	}
	template<> EASYADS_API UClass* StaticClass<UShowInterstitialProxy>()
	{
		return UShowInterstitialProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShowInterstitialProxy);
	UShowInterstitialProxy::~UShowInterstitialProxy() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_ShowInterstitialProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_ShowInterstitialProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShowInterstitialProxy, UShowInterstitialProxy::StaticClass, TEXT("UShowInterstitialProxy"), &Z_Registration_Info_UClass_UShowInterstitialProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShowInterstitialProxy), 1508115310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_ShowInterstitialProxy_h_1857021757(TEXT("/Script/EasyAds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_ShowInterstitialProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_ShowInterstitialProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
