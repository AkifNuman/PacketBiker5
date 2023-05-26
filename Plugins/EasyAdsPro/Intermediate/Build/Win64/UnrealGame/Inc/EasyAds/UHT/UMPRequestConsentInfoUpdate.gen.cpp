// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/UMPRequestConsentInfoUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMPRequestConsentInfoUpdate() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_UUMPRequestConsentInfoUpdate();
	EASYADS_API UClass* Z_Construct_UClass_UUMPRequestConsentInfoUpdate_NoRegister();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics
	{
		struct _Script_EasyAds_eventUMPConsentDelegate_Parms
		{
			bool isSuccess;
			FString err;
		};
		static void NewProp_isSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_err_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_err;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::NewProp_isSuccess_SetBit(void* Obj)
	{
		((_Script_EasyAds_eventUMPConsentDelegate_Parms*)Obj)->isSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::NewProp_isSuccess = { "isSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_EasyAds_eventUMPConsentDelegate_Parms), &Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::NewProp_isSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::NewProp_err_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::NewProp_err = { "err", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EasyAds_eventUMPConsentDelegate_Parms, err), METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::NewProp_err_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::NewProp_err_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::NewProp_isSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::NewProp_err,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMPRequestConsentInfoUpdate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "UMPConsentDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::_Script_EasyAds_eventUMPConsentDelegate_Parms), Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUMPRequestConsentInfoUpdate::execUMPRequestConsentInfoUpdate)
	{
		P_GET_UBOOL(Z_Param_underAgeOfConsent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUMPRequestConsentInfoUpdate**)Z_Param__Result=UUMPRequestConsentInfoUpdate::UMPRequestConsentInfoUpdate(Z_Param_underAgeOfConsent);
		P_NATIVE_END;
	}
	void UUMPRequestConsentInfoUpdate::StaticRegisterNativesUUMPRequestConsentInfoUpdate()
	{
		UClass* Class = UUMPRequestConsentInfoUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UMPRequestConsentInfoUpdate", &UUMPRequestConsentInfoUpdate::execUMPRequestConsentInfoUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics
	{
		struct UMPRequestConsentInfoUpdate_eventUMPRequestConsentInfoUpdate_Parms
		{
			bool underAgeOfConsent;
			UUMPRequestConsentInfoUpdate* ReturnValue;
		};
		static void NewProp_underAgeOfConsent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_underAgeOfConsent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::NewProp_underAgeOfConsent_SetBit(void* Obj)
	{
		((UMPRequestConsentInfoUpdate_eventUMPRequestConsentInfoUpdate_Parms*)Obj)->underAgeOfConsent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::NewProp_underAgeOfConsent = { "underAgeOfConsent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMPRequestConsentInfoUpdate_eventUMPRequestConsentInfoUpdate_Parms), &Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::NewProp_underAgeOfConsent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMPRequestConsentInfoUpdate_eventUMPRequestConsentInfoUpdate_Parms, ReturnValue), Z_Construct_UClass_UUMPRequestConsentInfoUpdate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::NewProp_underAgeOfConsent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyAds|GDPR|UMP" },
		{ "DisplayName", "UMPRequestConsentInfoUpdate" },
		{ "ModuleRelativePath", "Public/UMPRequestConsentInfoUpdate.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMPRequestConsentInfoUpdate, nullptr, "UMPRequestConsentInfoUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::UMPRequestConsentInfoUpdate_eventUMPRequestConsentInfoUpdate_Parms), Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUMPRequestConsentInfoUpdate);
	UClass* Z_Construct_UClass_UUMPRequestConsentInfoUpdate_NoRegister()
	{
		return UUMPRequestConsentInfoUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConsentUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConsentUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMPRequestConsentInfoUpdate_UMPRequestConsentInfoUpdate, "UMPRequestConsentInfoUpdate" }, // 576061328
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMPRequestConsentInfoUpdate.h" },
		{ "ModuleRelativePath", "Public/UMPRequestConsentInfoUpdate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::NewProp_OnConsentUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMPRequestConsentInfoUpdate.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::NewProp_OnConsentUpdate = { "OnConsentUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMPRequestConsentInfoUpdate, OnConsentUpdate), Z_Construct_UDelegateFunction_EasyAds_UMPConsentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::NewProp_OnConsentUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::NewProp_OnConsentUpdate_MetaData)) }; // 2580879353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::NewProp_OnConsentUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMPRequestConsentInfoUpdate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::ClassParams = {
		&UUMPRequestConsentInfoUpdate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMPRequestConsentInfoUpdate()
	{
		if (!Z_Registration_Info_UClass_UUMPRequestConsentInfoUpdate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUMPRequestConsentInfoUpdate.OuterSingleton, Z_Construct_UClass_UUMPRequestConsentInfoUpdate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUMPRequestConsentInfoUpdate.OuterSingleton;
	}
	template<> EASYADS_API UClass* StaticClass<UUMPRequestConsentInfoUpdate>()
	{
		return UUMPRequestConsentInfoUpdate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMPRequestConsentInfoUpdate);
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUMPRequestConsentInfoUpdate, UUMPRequestConsentInfoUpdate::StaticClass, TEXT("UUMPRequestConsentInfoUpdate"), &Z_Registration_Info_UClass_UUMPRequestConsentInfoUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUMPRequestConsentInfoUpdate), 1467171170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_2424430852(TEXT("/Script/EasyAds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_UMPRequestConsentInfoUpdate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
