// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/LoadCustomRewardedVideoAd.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadCustomRewardedVideoAd() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_ULoadCustomRewardedVideoAd();
	EASYADS_API UClass* Z_Construct_UClass_ULoadCustomRewardedVideoAd_NoRegister();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadSuccessDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics
	{
		struct _Script_EasyAds_eventCustomRewardedVideoLoadFailDelegate_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::NewProp_errmsg = { "errmsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EasyAds_eventCustomRewardedVideoLoadFailDelegate_Parms, errmsg), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::NewProp_errmsg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadCustomRewardedVideoAd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "CustomRewardedVideoLoadFailDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::_Script_EasyAds_eventCustomRewardedVideoLoadFailDelegate_Parms), Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadSuccessDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadCustomRewardedVideoAd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "CustomRewardedVideoLoadSuccessDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULoadCustomRewardedVideoAd::execLoadCustomRewardedVideoAd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_adUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULoadCustomRewardedVideoAd**)Z_Param__Result=ULoadCustomRewardedVideoAd::LoadCustomRewardedVideoAd(Z_Param_adUnit);
		P_NATIVE_END;
	}
	void ULoadCustomRewardedVideoAd::StaticRegisterNativesULoadCustomRewardedVideoAd()
	{
		UClass* Class = ULoadCustomRewardedVideoAd::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadCustomRewardedVideoAd", &ULoadCustomRewardedVideoAd::execLoadCustomRewardedVideoAd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics
	{
		struct LoadCustomRewardedVideoAd_eventLoadCustomRewardedVideoAd_Parms
		{
			FString adUnit;
			ULoadCustomRewardedVideoAd* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::NewProp_adUnit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::NewProp_adUnit = { "adUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoadCustomRewardedVideoAd_eventLoadCustomRewardedVideoAd_Parms, adUnit), METADATA_PARAMS(Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::NewProp_adUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::NewProp_adUnit_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoadCustomRewardedVideoAd_eventLoadCustomRewardedVideoAd_Parms, ReturnValue), Z_Construct_UClass_ULoadCustomRewardedVideoAd_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::NewProp_adUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyAds" },
		{ "DisplayName", "LoadCustomRewardedVideoAd" },
		{ "ModuleRelativePath", "Public/LoadCustomRewardedVideoAd.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadCustomRewardedVideoAd, nullptr, "LoadCustomRewardedVideoAd", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::LoadCustomRewardedVideoAd_eventLoadCustomRewardedVideoAd_Parms), Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadCustomRewardedVideoAd);
	UClass* Z_Construct_UClass_ULoadCustomRewardedVideoAd_NoRegister()
	{
		return ULoadCustomRewardedVideoAd::StaticClass();
	}
	struct Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics
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
	UObject* (*const Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadCustomRewardedVideoAd_LoadCustomRewardedVideoAd, "LoadCustomRewardedVideoAd" }, // 801387637
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LoadCustomRewardedVideoAd.h" },
		{ "ModuleRelativePath", "Public/LoadCustomRewardedVideoAd.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::NewProp_OnLoadFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadCustomRewardedVideoAd.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::NewProp_OnLoadFail = { "OnLoadFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoadCustomRewardedVideoAd, OnLoadFail), Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadFailDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::NewProp_OnLoadFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::NewProp_OnLoadFail_MetaData)) }; // 3615532962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::NewProp_OnLoadSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadCustomRewardedVideoAd.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::NewProp_OnLoadSuccess = { "OnLoadSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoadCustomRewardedVideoAd, OnLoadSuccess), Z_Construct_UDelegateFunction_EasyAds_CustomRewardedVideoLoadSuccessDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::NewProp_OnLoadSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::NewProp_OnLoadSuccess_MetaData)) }; // 546038245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::NewProp_OnLoadFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::NewProp_OnLoadSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadCustomRewardedVideoAd>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::ClassParams = {
		&ULoadCustomRewardedVideoAd::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadCustomRewardedVideoAd()
	{
		if (!Z_Registration_Info_UClass_ULoadCustomRewardedVideoAd.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadCustomRewardedVideoAd.OuterSingleton, Z_Construct_UClass_ULoadCustomRewardedVideoAd_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoadCustomRewardedVideoAd.OuterSingleton;
	}
	template<> EASYADS_API UClass* StaticClass<ULoadCustomRewardedVideoAd>()
	{
		return ULoadCustomRewardedVideoAd::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadCustomRewardedVideoAd);
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoadCustomRewardedVideoAd, ULoadCustomRewardedVideoAd::StaticClass, TEXT("ULoadCustomRewardedVideoAd"), &Z_Registration_Info_UClass_ULoadCustomRewardedVideoAd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadCustomRewardedVideoAd), 1170081986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_2310246487(TEXT("/Script/EasyAds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_LoadCustomRewardedVideoAd_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
