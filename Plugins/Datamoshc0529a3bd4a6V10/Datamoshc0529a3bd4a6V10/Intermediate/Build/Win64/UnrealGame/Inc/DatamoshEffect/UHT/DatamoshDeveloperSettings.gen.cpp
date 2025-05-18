// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatamoshEffect/Public/DatamoshDeveloperSettings.h"
#include "DatamoshEffect/Public/DatamoshParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatamoshDeveloperSettings() {}

// Begin Cross Module References
DATAMOSHEFFECT_API UClass* Z_Construct_UClass_UDatamoshDeveloperSettings();
DATAMOSHEFFECT_API UClass* Z_Construct_UClass_UDatamoshDeveloperSettings_NoRegister();
DATAMOSHEFFECT_API UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting();
DATAMOSHEFFECT_API UScriptStruct* Z_Construct_UScriptStruct_FDatamoshParameters();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
UPackage* Z_Construct_UPackage__Script_DatamoshEffect();
// End Cross Module References

// Begin Class UDatamoshDeveloperSettings
void UDatamoshDeveloperSettings::StaticRegisterNativesUDatamoshDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatamoshDeveloperSettings);
UClass* Z_Construct_UClass_UDatamoshDeveloperSettings_NoRegister()
{
	return UDatamoshDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UDatamoshDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Plugins" },
		{ "DisplayName", "Datamosh Effect" },
		{ "IncludePath", "DatamoshDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/DatamoshDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshMode_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** Toggle Effect mode. */" },
		{ "ConsoleVariable", "r.Datamosh" },
		{ "ModuleRelativePath", "Public/DatamoshDeveloperSettings.h" },
		{ "ToolTip", "Toggle Effect mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEffectPreview_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** If true, effect uses preview mode. Editor only.*/" },
		{ "ConsoleVariable", "r.Datamosh.Preview" },
		{ "ModuleRelativePath", "Public/DatamoshDeveloperSettings.h" },
		{ "ToolTip", "If true, effect uses preview mode. Editor only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshVelocityCompensation_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "ClampMax", "0.49" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Compensation value for the Velocity pass. Used to fix the rendering of edge pixels on objects that are constantly rendered for the Velocity pass (e.g., skeletal meshes).*/" },
		{ "ConsoleVariable", "r.Datamosh.VelocityCompensation" },
		{ "ModuleRelativePath", "Public/DatamoshDeveloperSettings.h" },
		{ "ToolTip", "Compensation value for the Velocity pass. Used to fix the rendering of edge pixels on objects that are constantly rendered for the Velocity pass (e.g., skeletal meshes)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EyeAdaptationPreExposureOverride_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/*Pre-exposure override. Use this if you experience brightness issues with the datamosh texture.*/" },
		{ "ConsoleVariable", "r.EyeAdaptation.PreExposureOverride" },
		{ "ModuleRelativePath", "Public/DatamoshDeveloperSettings.h" },
		{ "ToolTip", "Pre-exposure override. Use this if you experience brightness issues with the datamosh texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshStencilValue_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/*Stencil value used to create the mask texture. 0 - applies to any objects rendered in Custom Depth.*/" },
		{ "ConsoleVariable", "r.Datamosh.MaskStencil" },
		{ "ModuleRelativePath", "Public/DatamoshDeveloperSettings.h" },
		{ "ToolTip", "Stencil value used to create the mask texture. 0 - applies to any objects rendered in Custom Depth." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Datamosh Preview" },
		{ "EditCondition", "bEffectPreview" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DatamoshDeveloperSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DatamoshMode;
	static void NewProp_bEffectPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEffectPreview;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DatamoshVelocityCompensation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EyeAdaptationPreExposureOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DatamoshStencilValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatamoshDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_DatamoshMode = { "DatamoshMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatamoshDeveloperSettings, DatamoshMode), Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshMode_MetaData), NewProp_DatamoshMode_MetaData) }; // 839388740
void Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_bEffectPreview_SetBit(void* Obj)
{
	((UDatamoshDeveloperSettings*)Obj)->bEffectPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_bEffectPreview = { "bEffectPreview", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatamoshDeveloperSettings), &Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_bEffectPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEffectPreview_MetaData), NewProp_bEffectPreview_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_DatamoshVelocityCompensation = { "DatamoshVelocityCompensation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatamoshDeveloperSettings, DatamoshVelocityCompensation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshVelocityCompensation_MetaData), NewProp_DatamoshVelocityCompensation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_EyeAdaptationPreExposureOverride = { "EyeAdaptationPreExposureOverride", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatamoshDeveloperSettings, EyeAdaptationPreExposureOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EyeAdaptationPreExposureOverride_MetaData), NewProp_EyeAdaptationPreExposureOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_DatamoshStencilValue = { "DatamoshStencilValue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatamoshDeveloperSettings, DatamoshStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshStencilValue_MetaData), NewProp_DatamoshStencilValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatamoshDeveloperSettings, Parameters), Z_Construct_UScriptStruct_FDatamoshParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 1031819529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_DatamoshMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_bEffectPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_DatamoshVelocityCompensation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_EyeAdaptationPreExposureOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_DatamoshStencilValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_DatamoshEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::ClassParams = {
	&UDatamoshDeveloperSettings::StaticClass,
	"Plugins",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::PropPointers),
	0,
	0x001004A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatamoshDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UDatamoshDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatamoshDeveloperSettings.OuterSingleton, Z_Construct_UClass_UDatamoshDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatamoshDeveloperSettings.OuterSingleton;
}
template<> DATAMOSHEFFECT_API UClass* StaticClass<UDatamoshDeveloperSettings>()
{
	return UDatamoshDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatamoshDeveloperSettings);
UDatamoshDeveloperSettings::~UDatamoshDeveloperSettings() {}
// End Class UDatamoshDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatamoshDeveloperSettings, UDatamoshDeveloperSettings::StaticClass, TEXT("UDatamoshDeveloperSettings"), &Z_Registration_Info_UClass_UDatamoshDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatamoshDeveloperSettings), 606483486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshDeveloperSettings_h_1046566806(TEXT("/Script/DatamoshEffect"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
