// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/RcvEasyAdsDebugMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRcvEasyAdsDebugMessage() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_URcvEasyAdsDebugMessage();
	EASYADS_API UClass* Z_Construct_UClass_URcvEasyAdsDebugMessage_NoRegister();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
// End Cross Module References
	DEFINE_FUNCTION(URcvEasyAdsDebugMessage::execRcvEasyAdsDebugMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URcvEasyAdsDebugMessage**)Z_Param__Result=URcvEasyAdsDebugMessage::RcvEasyAdsDebugMessage();
		P_NATIVE_END;
	}
	void URcvEasyAdsDebugMessage::StaticRegisterNativesURcvEasyAdsDebugMessage()
	{
		UClass* Class = URcvEasyAdsDebugMessage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RcvEasyAdsDebugMessage", &URcvEasyAdsDebugMessage::execRcvEasyAdsDebugMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics
	{
		struct RcvEasyAdsDebugMessage_eventRcvEasyAdsDebugMessage_Parms
		{
			URcvEasyAdsDebugMessage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RcvEasyAdsDebugMessage_eventRcvEasyAdsDebugMessage_Parms, ReturnValue), Z_Construct_UClass_URcvEasyAdsDebugMessage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyAds" },
		{ "DisplayName", "RcvEasyAdsDebugMessage" },
		{ "ModuleRelativePath", "Public/RcvEasyAdsDebugMessage.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URcvEasyAdsDebugMessage, nullptr, "RcvEasyAdsDebugMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::RcvEasyAdsDebugMessage_eventRcvEasyAdsDebugMessage_Parms), Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URcvEasyAdsDebugMessage);
	UClass* Z_Construct_UClass_URcvEasyAdsDebugMessage_NoRegister()
	{
		return URcvEasyAdsDebugMessage::StaticClass();
	}
	struct Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDebugMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDebugMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage, "RcvEasyAdsDebugMessage" }, // 1069161556
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RcvEasyAdsDebugMessage.h" },
		{ "ModuleRelativePath", "Public/RcvEasyAdsDebugMessage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::NewProp_OnDebugMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/RcvEasyAdsDebugMessage.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::NewProp_OnDebugMessage = { "OnDebugMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URcvEasyAdsDebugMessage, OnDebugMessage), Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::NewProp_OnDebugMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::NewProp_OnDebugMessage_MetaData)) }; // 4102052539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::NewProp_OnDebugMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URcvEasyAdsDebugMessage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::ClassParams = {
		&URcvEasyAdsDebugMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URcvEasyAdsDebugMessage()
	{
		if (!Z_Registration_Info_UClass_URcvEasyAdsDebugMessage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URcvEasyAdsDebugMessage.OuterSingleton, Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URcvEasyAdsDebugMessage.OuterSingleton;
	}
	template<> EASYADS_API UClass* StaticClass<URcvEasyAdsDebugMessage>()
	{
		return URcvEasyAdsDebugMessage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URcvEasyAdsDebugMessage);
	URcvEasyAdsDebugMessage::~URcvEasyAdsDebugMessage() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URcvEasyAdsDebugMessage, URcvEasyAdsDebugMessage::StaticClass, TEXT("URcvEasyAdsDebugMessage"), &Z_Registration_Info_UClass_URcvEasyAdsDebugMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URcvEasyAdsDebugMessage), 329468215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_2613942501(TEXT("/Script/EasyAds"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyAdsPro_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
