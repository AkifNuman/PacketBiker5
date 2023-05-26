// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/RequestConsentInfoUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRequestConsentInfoUpdate() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_URequestConsentInfoUpdate();
	EASYADS_API UClass* Z_Construct_UClass_URequestConsentInfoUpdate_NoRegister();
	EASYADS_API UEnum* Z_Construct_UEnum_EasyAds_ConsentStatus();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_EasyAds_eventConsentInfoUpdateDelegate_Parms
		{
			bool IsSuccess;
			ConsentStatus status;
		};
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UECodeGen_Private::FBytePropertyParams NewProp_status_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((_Script_EasyAds_eventConsentInfoUpdateDelegate_Parms*)Obj)->IsSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_EasyAds_eventConsentInfoUpdateDelegate_Parms), &Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::NewProp_status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EasyAds_eventConsentInfoUpdateDelegate_Parms, status), Z_Construct_UEnum_EasyAds_ConsentStatus, METADATA_PARAMS(nullptr, 0) }; // 1474213218
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::NewProp_IsSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::NewProp_status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::NewProp_status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RequestConsentInfoUpdate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyAds, nullptr, "ConsentInfoUpdateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::_Script_EasyAds_eventConsentInfoUpdateDelegate_Parms), Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URequestConsentInfoUpdate::execRequestConsentInfoUpdate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_publisherId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URequestConsentInfoUpdate**)Z_Param__Result=URequestConsentInfoUpdate::RequestConsentInfoUpdate(Z_Param_publisherId);
		P_NATIVE_END;
	}
	void URequestConsentInfoUpdate::StaticRegisterNativesURequestConsentInfoUpdate()
	{
		UClass* Class = URequestConsentInfoUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestConsentInfoUpdate", &URequestConsentInfoUpdate::execRequestConsentInfoUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics
	{
		struct RequestConsentInfoUpdate_eventRequestConsentInfoUpdate_Parms
		{
			FString publisherId;
			URequestConsentInfoUpdate* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_publisherId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_publisherId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::NewProp_publisherId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::NewProp_publisherId = { "publisherId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RequestConsentInfoUpdate_eventRequestConsentInfoUpdate_Parms, publisherId), METADATA_PARAMS(Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::NewProp_publisherId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::NewProp_publisherId_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RequestConsentInfoUpdate_eventRequestConsentInfoUpdate_Parms, ReturnValue), Z_Construct_UClass_URequestConsentInfoUpdate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::NewProp_publisherId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyAds|GDPR" },
		{ "DisplayName", "RequestConsentInfoUpdate" },
		{ "ModuleRelativePath", "Public/RequestConsentInfoUpdate.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URequestConsentInfoUpdate, nullptr, "RequestConsentInfoUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::RequestConsentInfoUpdate_eventRequestConsentInfoUpdate_Parms), Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URequestConsentInfoUpdate);
	UClass* Z_Construct_UClass_URequestConsentInfoUpdate_NoRegister()
	{
		return URequestConsentInfoUpdate::StaticClass();
	}
	struct Z_Construct_UClass_URequestConsentInfoUpdate_Statics
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
	UObject* (*const Z_Construct_UClass_URequestConsentInfoUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URequestConsentInfoUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URequestConsentInfoUpdate_RequestConsentInfoUpdate, "RequestConsentInfoUpdate" }, // 2687989010
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestConsentInfoUpdate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RequestConsentInfoUpdate.h" },
		{ "ModuleRelativePath", "Public/RequestConsentInfoUpdate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestConsentInfoUpdate_Statics::NewProp_OnConsentUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/RequestConsentInfoUpdate.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URequestConsentInfoUpdate_Statics::NewProp_OnConsentUpdate = { "OnConsentUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URequestConsentInfoUpdate, OnConsentUpdate), Z_Construct_UDelegateFunction_EasyAds_ConsentInfoUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URequestConsentInfoUpdate_Statics::NewProp_OnConsentUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URequestConsentInfoUpdate_Statics::NewProp_OnConsentUpdate_MetaData)) }; // 144336882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URequestConsentInfoUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequestConsentInfoUpdate_Statics::NewProp_OnConsentUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URequestConsentInfoUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URequestConsentInfoUpdate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URequestConsentInfoUpdate_Statics::ClassParams = {
		&URequestConsentInfoUpdate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URequestConsentInfoUpdate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URequestConsentInfoUpdate_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URequestConsentInfoUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URequestConsentInfoUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URequestConsentInfoUpdate()
	{
		if (!Z_Registration_Info_UClass_URequestConsentInfoUpdate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URequestConsentInfoUpdate.OuterSingleton, Z_Construct_UClass_URequestConsentInfoUpdate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URequestConsentInfoUpdate.OuterSingleton;
	}
	template<> EASYADS_API UClass* StaticClass<URequestConsentInfoUpdate>()
	{
		return URequestConsentInfoUpdate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URequestConsentInfoUpdate);
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URequestConsentInfoUpdate, URequestConsentInfoUpdate::StaticClass, TEXT("URequestConsentInfoUpdate"), &Z_Registration_Info_UClass_URequestConsentInfoUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URequestConsentInfoUpdate), 4016184599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_572696451(TEXT("/Script/EasyAds"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RequestConsentInfoUpdate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
