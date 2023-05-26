// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/LoadCustomInterstitialAd.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadCustomInterstitialAd() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_ULoadCustomInterstitialAd();
	EASYADS_API UClass* Z_Construct_UClass_ULoadCustomInterstitialAd_NoRegister();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadSuccessDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics
	{
		struct _Script_EasyAds_eventCustomInterstitialLoadFailDelegate_Parms
		{
			FString errmsg;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_errmsg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::NewProp_errmsg = { "errmsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EasyAds_eventCustomInterstitialLoadFailDelegate_Parms, errmsg), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::NewProp_errmsg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadCustomInterstitialAd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "CustomInterstitialLoadFailDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::_Script_EasyAds_eventCustomInterstitialLoadFailDelegate_Parms), Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadSuccessDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadCustomInterstitialAd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "CustomInterstitialLoadSuccessDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULoadCustomInterstitialAd::execLoadCustomInterstitialAd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_adUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULoadCustomInterstitialAd**)Z_Param__Result=ULoadCustomInterstitialAd::LoadCustomInterstitialAd(Z_Param_adUnit);
		P_NATIVE_END;
	}
	void ULoadCustomInterstitialAd::StaticRegisterNativesULoadCustomInterstitialAd()
	{
		UClass* Class = ULoadCustomInterstitialAd::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadCustomInterstitialAd", &ULoadCustomInterstitialAd::execLoadCustomInterstitialAd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics
	{
		struct LoadCustomInterstitialAd_eventLoadCustomInterstitialAd_Parms
		{
			FString adUnit;
			ULoadCustomInterstitialAd* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_adUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_adUnit;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::NewProp_adUnit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::NewProp_adUnit = { "adUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoadCustomInterstitialAd_eventLoadCustomInterstitialAd_Parms, adUnit), METADATA_PARAMS(Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::NewProp_adUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::NewProp_adUnit_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoadCustomInterstitialAd_eventLoadCustomInterstitialAd_Parms, ReturnValue), Z_Construct_UClass_ULoadCustomInterstitialAd_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::NewProp_adUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyAds" },
		{ "DisplayName", "LoadCustomInterstitialAd" },
		{ "ModuleRelativePath", "Public/LoadCustomInterstitialAd.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadCustomInterstitialAd, nullptr, "LoadCustomInterstitialAd", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::LoadCustomInterstitialAd_eventLoadCustomInterstitialAd_Parms), Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadCustomInterstitialAd);
	UClass* Z_Construct_UClass_ULoadCustomInterstitialAd_NoRegister()
	{
		return ULoadCustomInterstitialAd::StaticClass();
	}
	struct Z_Construct_UClass_ULoadCustomInterstitialAd_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadCustomInterstitialAd_LoadCustomInterstitialAd, "LoadCustomInterstitialAd" }, // 660954979
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LoadCustomInterstitialAd.h" },
		{ "ModuleRelativePath", "Public/LoadCustomInterstitialAd.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::NewProp_OnLoadFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadCustomInterstitialAd.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::NewProp_OnLoadFail = { "OnLoadFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoadCustomInterstitialAd, OnLoadFail), Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadFailDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::NewProp_OnLoadFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::NewProp_OnLoadFail_MetaData)) }; // 2028983024
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::NewProp_OnLoadSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadCustomInterstitialAd.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::NewProp_OnLoadSuccess = { "OnLoadSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoadCustomInterstitialAd, OnLoadSuccess), Z_Construct_UDelegateFunction_EasyAds_CustomInterstitialLoadSuccessDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::NewProp_OnLoadSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::NewProp_OnLoadSuccess_MetaData)) }; // 2974719177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::NewProp_OnLoadFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::NewProp_OnLoadSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadCustomInterstitialAd>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::ClassParams = {
		&ULoadCustomInterstitialAd::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadCustomInterstitialAd()
	{
		if (!Z_Registration_Info_UClass_ULoadCustomInterstitialAd.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadCustomInterstitialAd.OuterSingleton, Z_Construct_UClass_ULoadCustomInterstitialAd_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoadCustomInterstitialAd.OuterSingleton;
	}
	template<> EASYADS_API UClass* StaticClass<ULoadCustomInterstitialAd>()
	{
		return ULoadCustomInterstitialAd::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadCustomInterstitialAd);
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoadCustomInterstitialAd, ULoadCustomInterstitialAd::StaticClass, TEXT("ULoadCustomInterstitialAd"), &Z_Registration_Info_UClass_ULoadCustomInterstitialAd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadCustomInterstitialAd), 1168964005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_4086643782(TEXT("/Script/EasyAds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomInterstitialAd_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
