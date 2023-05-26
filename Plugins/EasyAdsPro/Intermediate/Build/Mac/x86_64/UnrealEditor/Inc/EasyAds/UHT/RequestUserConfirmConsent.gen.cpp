// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/RequestUserConfirmConsent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRequestUserConfirmConsent() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_URequestUserConfirmConsent();
	EASYADS_API UClass* Z_Construct_UClass_URequestUserConfirmConsent_NoRegister();
	EASYADS_API UEnum* Z_Construct_UEnum_EasyAds_ConsentStatus();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics
	{
		struct _Script_EasyAds_eventUserConfirmConsentDelegate_Parms
		{
			ConsentStatus status;
			bool preferAdFree;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_status_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_status;
		static void NewProp_preferAdFree_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_preferAdFree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::NewProp_status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EasyAds_eventUserConfirmConsentDelegate_Parms, status), Z_Construct_UEnum_EasyAds_ConsentStatus, METADATA_PARAMS(nullptr, 0) }; // 1474213218
	void Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::NewProp_preferAdFree_SetBit(void* Obj)
	{
		((_Script_EasyAds_eventUserConfirmConsentDelegate_Parms*)Obj)->preferAdFree = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::NewProp_preferAdFree = { "preferAdFree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_EasyAds_eventUserConfirmConsentDelegate_Parms), &Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::NewProp_preferAdFree_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::NewProp_status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::NewProp_preferAdFree,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RequestUserConfirmConsent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "UserConfirmConsentDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::_Script_EasyAds_eventUserConfirmConsentDelegate_Parms), Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URequestUserConfirmConsent::execRequestUserConfirmConsent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_privacyUrl);
		P_GET_UBOOL(Z_Param_withAdFreeOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URequestUserConfirmConsent**)Z_Param__Result=URequestUserConfirmConsent::RequestUserConfirmConsent(Z_Param_privacyUrl,Z_Param_withAdFreeOption);
		P_NATIVE_END;
	}
	void URequestUserConfirmConsent::StaticRegisterNativesURequestUserConfirmConsent()
	{
		UClass* Class = URequestUserConfirmConsent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestUserConfirmConsent", &URequestUserConfirmConsent::execRequestUserConfirmConsent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics
	{
		struct RequestUserConfirmConsent_eventRequestUserConfirmConsent_Parms
		{
			FString privacyUrl;
			bool withAdFreeOption;
			URequestUserConfirmConsent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_privacyUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_privacyUrl;
		static void NewProp_withAdFreeOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_withAdFreeOption;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_privacyUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_privacyUrl = { "privacyUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RequestUserConfirmConsent_eventRequestUserConfirmConsent_Parms, privacyUrl), METADATA_PARAMS(Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_privacyUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_privacyUrl_MetaData)) };
	void Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_withAdFreeOption_SetBit(void* Obj)
	{
		((RequestUserConfirmConsent_eventRequestUserConfirmConsent_Parms*)Obj)->withAdFreeOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_withAdFreeOption = { "withAdFreeOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RequestUserConfirmConsent_eventRequestUserConfirmConsent_Parms), &Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_withAdFreeOption_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RequestUserConfirmConsent_eventRequestUserConfirmConsent_Parms, ReturnValue), Z_Construct_UClass_URequestUserConfirmConsent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_privacyUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_withAdFreeOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyAds|GDPR" },
		{ "DisplayName", "RequestUserConfirmConsent" },
		{ "ModuleRelativePath", "Public/RequestUserConfirmConsent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URequestUserConfirmConsent, nullptr, "RequestUserConfirmConsent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::RequestUserConfirmConsent_eventRequestUserConfirmConsent_Parms), Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URequestUserConfirmConsent);
	UClass* Z_Construct_UClass_URequestUserConfirmConsent_NoRegister()
	{
		return URequestUserConfirmConsent::StaticClass();
	}
	struct Z_Construct_UClass_URequestUserConfirmConsent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConfirmDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConfirmDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URequestUserConfirmConsent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URequestUserConfirmConsent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URequestUserConfirmConsent_RequestUserConfirmConsent, "RequestUserConfirmConsent" }, // 740232341
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestUserConfirmConsent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RequestUserConfirmConsent.h" },
		{ "ModuleRelativePath", "Public/RequestUserConfirmConsent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestUserConfirmConsent_Statics::NewProp_OnConfirmDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/RequestUserConfirmConsent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URequestUserConfirmConsent_Statics::NewProp_OnConfirmDelegate = { "OnConfirmDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URequestUserConfirmConsent, OnConfirmDelegate), Z_Construct_UDelegateFunction_EasyAds_UserConfirmConsentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URequestUserConfirmConsent_Statics::NewProp_OnConfirmDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URequestUserConfirmConsent_Statics::NewProp_OnConfirmDelegate_MetaData)) }; // 3289019758
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URequestUserConfirmConsent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequestUserConfirmConsent_Statics::NewProp_OnConfirmDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URequestUserConfirmConsent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URequestUserConfirmConsent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URequestUserConfirmConsent_Statics::ClassParams = {
		&URequestUserConfirmConsent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URequestUserConfirmConsent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URequestUserConfirmConsent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URequestUserConfirmConsent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URequestUserConfirmConsent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URequestUserConfirmConsent()
	{
		if (!Z_Registration_Info_UClass_URequestUserConfirmConsent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URequestUserConfirmConsent.OuterSingleton, Z_Construct_UClass_URequestUserConfirmConsent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URequestUserConfirmConsent.OuterSingleton;
	}
	template<> EASYADS_API UClass* StaticClass<URequestUserConfirmConsent>()
	{
		return URequestUserConfirmConsent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URequestUserConfirmConsent);
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URequestUserConfirmConsent, URequestUserConfirmConsent::StaticClass, TEXT("URequestUserConfirmConsent"), &Z_Registration_Info_UClass_URequestUserConfirmConsent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URequestUserConfirmConsent), 3475015527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_3892335563(TEXT("/Script/EasyAds"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestUserConfirmConsent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
