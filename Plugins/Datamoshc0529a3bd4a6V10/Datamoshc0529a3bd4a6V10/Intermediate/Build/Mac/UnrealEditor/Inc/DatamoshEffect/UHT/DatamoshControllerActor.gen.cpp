// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatamoshEffect/Public/DatamoshControllerActor.h"
#include "DatamoshEffect/Public/DatamoshParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatamoshControllerActor() {}

// Begin Cross Module References
DATAMOSHEFFECT_API UClass* Z_Construct_UClass_ADatamoshControllerActor();
DATAMOSHEFFECT_API UClass* Z_Construct_UClass_ADatamoshControllerActor_NoRegister();
DATAMOSHEFFECT_API UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting();
DATAMOSHEFFECT_API UScriptStruct* Z_Construct_UScriptStruct_FDatamoshParameters();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatamoshEffect();
// End Cross Module References

// Begin Class ADatamoshControllerActor Function ResetDatamoshParameters
struct Z_Construct_UFunction_ADatamoshControllerActor_ResetDatamoshParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Datamosh" },
		{ "Comment", "// Reset effect parameters to default settings.\n" },
		{ "ModuleRelativePath", "Public/DatamoshControllerActor.h" },
		{ "ToolTip", "Reset effect parameters to default settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatamoshControllerActor_ResetDatamoshParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatamoshControllerActor, nullptr, "ResetDatamoshParameters", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADatamoshControllerActor_ResetDatamoshParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADatamoshControllerActor_ResetDatamoshParameters_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADatamoshControllerActor_ResetDatamoshParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatamoshControllerActor_ResetDatamoshParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADatamoshControllerActor::execResetDatamoshParameters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDatamoshParameters();
	P_NATIVE_END;
}
// End Class ADatamoshControllerActor Function ResetDatamoshParameters

// Begin Class ADatamoshControllerActor Function UpdateDatamoshParameters
struct Z_Construct_UFunction_ADatamoshControllerActor_UpdateDatamoshParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Datamosh" },
		{ "Comment", "// Event updating the current effect parameters.\n" },
		{ "ModuleRelativePath", "Public/DatamoshControllerActor.h" },
		{ "ToolTip", "Event updating the current effect parameters." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatamoshControllerActor_UpdateDatamoshParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatamoshControllerActor, nullptr, "UpdateDatamoshParameters", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADatamoshControllerActor_UpdateDatamoshParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADatamoshControllerActor_UpdateDatamoshParameters_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADatamoshControllerActor_UpdateDatamoshParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatamoshControllerActor_UpdateDatamoshParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADatamoshControllerActor::execUpdateDatamoshParameters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDatamoshParameters();
	P_NATIVE_END;
}
// End Class ADatamoshControllerActor Function UpdateDatamoshParameters

// Begin Class ADatamoshControllerActor
void ADatamoshControllerActor::StaticRegisterNativesADatamoshControllerActor()
{
	UClass* Class = ADatamoshControllerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetDatamoshParameters", &ADatamoshControllerActor::execResetDatamoshParameters },
		{ "UpdateDatamoshParameters", &ADatamoshControllerActor::execUpdateDatamoshParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADatamoshControllerActor);
UClass* Z_Construct_UClass_ADatamoshControllerActor_NoRegister()
{
	return ADatamoshControllerActor::StaticClass();
}
struct Z_Construct_UClass_ADatamoshControllerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatamoshControllerActor.h" },
		{ "ModuleRelativePath", "Public/DatamoshControllerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "// Current Datamosh mode.\n" },
		{ "ModuleRelativePath", "Public/DatamoshControllerActor.h" },
		{ "ToolTip", "Current Datamosh mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "// Screen Rendering mode only.\n" },
		{ "EditCondition", "Mode == EDatamoshModeSetting::ScreenRendering" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DatamoshControllerActor.h" },
		{ "ToolTip", "Screen Rendering mode only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "// Current Datamosh shader parameters. You can also use these parameters instead of modifying the parameters in the PPM_Datamosh material.\n" },
		{ "EditCondition", "Mode != EDatamoshModeSetting::Off" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DatamoshControllerActor.h" },
		{ "ToolTip", "Current Datamosh shader parameters. You can also use these parameters instead of modifying the parameters in the PPM_Datamosh material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatamoshControllerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshMaterial_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "// The effect material used in Render Target mode.\n" },
		{ "ModuleRelativePath", "Public/DatamoshControllerActor.h" },
		{ "ToolTip", "The effect material used in Render Target mode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DatamoshMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADatamoshControllerActor_ResetDatamoshParameters, "ResetDatamoshParameters" }, // 332071082
		{ &Z_Construct_UFunction_ADatamoshControllerActor_UpdateDatamoshParameters, "UpdateDatamoshParameters" }, // 2944932653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADatamoshControllerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatamoshControllerActor, Mode), Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 839388740
void Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((ADatamoshControllerActor*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADatamoshControllerActor), &Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatamoshControllerActor, Parameters), Z_Construct_UScriptStruct_FDatamoshParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1031819529
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatamoshControllerActor, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessComponent_MetaData), NewProp_PostProcessComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_DatamoshMaterial = { "DatamoshMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatamoshControllerActor, DatamoshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshMaterial_MetaData), NewProp_DatamoshMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADatamoshControllerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_PostProcessComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatamoshControllerActor_Statics::NewProp_DatamoshMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADatamoshControllerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADatamoshControllerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DatamoshEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADatamoshControllerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADatamoshControllerActor_Statics::ClassParams = {
	&ADatamoshControllerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADatamoshControllerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADatamoshControllerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADatamoshControllerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADatamoshControllerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADatamoshControllerActor()
{
	if (!Z_Registration_Info_UClass_ADatamoshControllerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADatamoshControllerActor.OuterSingleton, Z_Construct_UClass_ADatamoshControllerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADatamoshControllerActor.OuterSingleton;
}
template<> DATAMOSHEFFECT_API UClass* StaticClass<ADatamoshControllerActor>()
{
	return ADatamoshControllerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADatamoshControllerActor);
ADatamoshControllerActor::~ADatamoshControllerActor() {}
// End Class ADatamoshControllerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshControllerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADatamoshControllerActor, ADatamoshControllerActor::StaticClass, TEXT("ADatamoshControllerActor"), &Z_Registration_Info_UClass_ADatamoshControllerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADatamoshControllerActor), 2990811407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshControllerActor_h_2466458953(TEXT("/Script/DatamoshEffect"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshControllerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshControllerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
