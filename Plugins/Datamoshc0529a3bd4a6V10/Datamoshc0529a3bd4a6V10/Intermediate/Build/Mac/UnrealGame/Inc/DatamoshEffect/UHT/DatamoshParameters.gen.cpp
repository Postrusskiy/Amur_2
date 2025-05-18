// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatamoshEffect/Public/DatamoshParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatamoshParameters() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
DATAMOSHEFFECT_API UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting();
DATAMOSHEFFECT_API UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise();
DATAMOSHEFFECT_API UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle();
DATAMOSHEFFECT_API UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail();
DATAMOSHEFFECT_API UScriptStruct* Z_Construct_UScriptStruct_FDatamoshParameters();
UPackage* Z_Construct_UPackage__Script_DatamoshEffect();
// End Cross Module References

// Begin Enum EDatamoshModeSetting
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatamoshModeSetting;
static UEnum* EDatamoshModeSetting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatamoshModeSetting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatamoshModeSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting, (UObject*)Z_Construct_UPackage__Script_DatamoshEffect(), TEXT("EDatamoshModeSetting"));
	}
	return Z_Registration_Info_UEnum_EDatamoshModeSetting.OuterSingleton;
}
template<> DATAMOSHEFFECT_API UEnum* StaticEnum<EDatamoshModeSetting::Type>()
{
	return EDatamoshModeSetting_StaticEnum();
}
struct Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum for selecting Datamosh mode */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EDatamoshModeSetting::Off" },
		{ "RenderTarget.DisplayName", "Render Target" },
		{ "RenderTarget.Name", "EDatamoshModeSetting::RenderTarget" },
		{ "ScreenRendering.DisplayName", "Screen Rendering" },
		{ "ScreenRendering.Name", "EDatamoshModeSetting::ScreenRendering" },
		{ "ToolTip", "Enum for selecting Datamosh mode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatamoshModeSetting::Off", (int64)EDatamoshModeSetting::Off },
		{ "EDatamoshModeSetting::RenderTarget", (int64)EDatamoshModeSetting::RenderTarget },
		{ "EDatamoshModeSetting::ScreenRendering", (int64)EDatamoshModeSetting::ScreenRendering },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatamoshEffect,
	nullptr,
	"EDatamoshModeSetting",
	"EDatamoshModeSetting::Type",
	Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting()
{
	if (!Z_Registration_Info_UEnum_EDatamoshModeSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatamoshModeSetting.InnerSingleton, Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatamoshModeSetting.InnerSingleton;
}
// End Enum EDatamoshModeSetting

// Begin Enum EDatamoshNoise
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatamoshNoise;
static UEnum* EDatamoshNoise_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatamoshNoise.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatamoshNoise.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise, (UObject*)Z_Construct_UPackage__Script_DatamoshEffect(), TEXT("EDatamoshNoise"));
	}
	return Z_Registration_Info_UEnum_EDatamoshNoise.OuterSingleton;
}
template<> DATAMOSHEFFECT_API UEnum* StaticEnum<EDatamoshNoise>()
{
	return EDatamoshNoise_StaticEnum();
}
struct Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum to define datamosh noise patterns.\n */" },
		{ "Cubic.DisplayName", "Pseudo Random Cubic" },
		{ "Cubic.Name", "EDatamoshNoise::Cubic" },
		{ "Jitter.DisplayName", "Jittering" },
		{ "Jitter.Name", "EDatamoshNoise::Jitter" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "None.DisplayName", "Disabled" },
		{ "None.Name", "EDatamoshNoise::None" },
		{ "Simplex2D.DisplayName", "Simplex 2D" },
		{ "Simplex2D.Name", "EDatamoshNoise::Simplex2D" },
		{ "Simplex2DCubic.DisplayName", "Simplex 2D Cubic" },
		{ "Simplex2DCubic.Name", "EDatamoshNoise::Simplex2DCubic" },
		{ "Strip.DisplayName", "Horizontal Strip" },
		{ "Strip.Name", "EDatamoshNoise::Strip" },
		{ "ToolTip", "Enum to define datamosh noise patterns." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatamoshNoise::None", (int64)EDatamoshNoise::None },
		{ "EDatamoshNoise::Cubic", (int64)EDatamoshNoise::Cubic },
		{ "EDatamoshNoise::Strip", (int64)EDatamoshNoise::Strip },
		{ "EDatamoshNoise::Jitter", (int64)EDatamoshNoise::Jitter },
		{ "EDatamoshNoise::Simplex2D", (int64)EDatamoshNoise::Simplex2D },
		{ "EDatamoshNoise::Simplex2DCubic", (int64)EDatamoshNoise::Simplex2DCubic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatamoshEffect,
	nullptr,
	"EDatamoshNoise",
	"EDatamoshNoise",
	Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise()
{
	if (!Z_Registration_Info_UEnum_EDatamoshNoise.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatamoshNoise.InnerSingleton, Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatamoshNoise.InnerSingleton;
}
// End Enum EDatamoshNoise

// Begin Enum EDatamoshStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatamoshStyle;
static UEnum* EDatamoshStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatamoshStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatamoshStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle, (UObject*)Z_Construct_UPackage__Script_DatamoshEffect(), TEXT("EDatamoshStyle"));
	}
	return Z_Registration_Info_UEnum_EDatamoshStyle.OuterSingleton;
}
template<> DATAMOSHEFFECT_API UEnum* StaticEnum<EDatamoshStyle>()
{
	return EDatamoshStyle_StaticEnum();
}
struct Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum to define datamosh styles.\n */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EDatamoshStyle::Off" },
		{ "ProcessedVelocityAlpha.DisplayName", "Frame Regeneration" },
		{ "ProcessedVelocityAlpha.Name", "EDatamoshStyle::ProcessedVelocityAlpha" },
		{ "ToolTip", "Enum to define datamosh styles." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatamoshStyle::Off", (int64)EDatamoshStyle::Off },
		{ "EDatamoshStyle::ProcessedVelocityAlpha", (int64)EDatamoshStyle::ProcessedVelocityAlpha },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatamoshEffect,
	nullptr,
	"EDatamoshStyle",
	"EDatamoshStyle",
	Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle()
{
	if (!Z_Registration_Info_UEnum_EDatamoshStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatamoshStyle.InnerSingleton, Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatamoshStyle.InnerSingleton;
}
// End Enum EDatamoshStyle

// Begin Enum EDatamoshTrail
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatamoshTrail;
static UEnum* EDatamoshTrail_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatamoshTrail.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatamoshTrail.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail, (UObject*)Z_Construct_UPackage__Script_DatamoshEffect(), TEXT("EDatamoshTrail"));
	}
	return Z_Registration_Info_UEnum_EDatamoshTrail.OuterSingleton;
}
template<> DATAMOSHEFFECT_API UEnum* StaticEnum<EDatamoshTrail>()
{
	return EDatamoshTrail_StaticEnum();
}
struct Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum to define datamosh trail effects.\n */" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EDatamoshTrail::Disabled" },
		{ "EnabledWithMask.DisplayName", "Exclude the object itself" },
		{ "EnabledWithMask.Name", "EDatamoshTrail::EnabledWithMask" },
		{ "EnabledWithoutMask.DisplayName", "Include the object" },
		{ "EnabledWithoutMask.Name", "EDatamoshTrail::EnabledWithoutMask" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Enum to define datamosh trail effects." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatamoshTrail::Disabled", (int64)EDatamoshTrail::Disabled },
		{ "EDatamoshTrail::EnabledWithoutMask", (int64)EDatamoshTrail::EnabledWithoutMask },
		{ "EDatamoshTrail::EnabledWithMask", (int64)EDatamoshTrail::EnabledWithMask },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatamoshEffect,
	nullptr,
	"EDatamoshTrail",
	"EDatamoshTrail",
	Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail()
{
	if (!Z_Registration_Info_UEnum_EDatamoshTrail.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatamoshTrail.InnerSingleton, Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatamoshTrail.InnerSingleton;
}
// End Enum EDatamoshTrail

// Begin ScriptStruct FDatamoshParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatamoshParameters;
class UScriptStruct* FDatamoshParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatamoshParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatamoshParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatamoshParameters, (UObject*)Z_Construct_UPackage__Script_DatamoshEffect(), TEXT("DatamoshParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DatamoshParameters.OuterSingleton;
}
template<> DATAMOSHEFFECT_API UScriptStruct* StaticStruct<FDatamoshParameters>()
{
	return FDatamoshParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatamoshParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct to hold datamosh parameters for blueprint usage and shader integration.\n */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Struct to hold datamosh parameters for blueprint usage and shader integration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshFactor_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** Lerping value between current and previous texture. Default is 0.99 */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Lerping value between current and previous texture. Default is 0.99" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshTrailFactor_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** Trail factor for the datamosh effect. Default is 0.8 */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Trail factor for the datamosh effect. Default is 0.8" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshNoise_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** Select built-in distortion pattern for the UV. Default is None */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Select built-in distortion pattern for the UV. Default is None" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshNoiseIntensity_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** Intensity of datamosh noise. Default is 1.0 */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Intensity of datamosh noise. Default is 1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshNoiseSize_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** Size of datamosh noise. Default is 32.0 */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Size of datamosh noise. Default is 32.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshMotion_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** Motion (stretching) of the datamosh effect. */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Motion (stretching) of the datamosh effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshStyle_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** Select built-in style preset of the datamosh effect. Default is Off */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Select built-in style preset of the datamosh effect. Default is Off" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshStyleIntensity_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** Intensity of the datamosh style effect. Default is 0.9 */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Intensity of the datamosh style effect. Default is 0.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshTrail_MetaData[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "/** Trail effect for datamosh. Default is Disabled */" },
		{ "ModuleRelativePath", "Public/DatamoshParameters.h" },
		{ "ToolTip", "Trail effect for datamosh. Default is Disabled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DatamoshFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DatamoshTrailFactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DatamoshNoise_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DatamoshNoise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DatamoshNoiseIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DatamoshNoiseSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DatamoshMotion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DatamoshStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DatamoshStyle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DatamoshStyleIntensity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DatamoshTrail_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DatamoshTrail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatamoshParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshFactor = { "DatamoshFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatamoshParameters, DatamoshFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshFactor_MetaData), NewProp_DatamoshFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshTrailFactor = { "DatamoshTrailFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatamoshParameters, DatamoshTrailFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshTrailFactor_MetaData), NewProp_DatamoshTrailFactor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshNoise_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshNoise = { "DatamoshNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatamoshParameters, DatamoshNoise), Z_Construct_UEnum_DatamoshEffect_EDatamoshNoise, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshNoise_MetaData), NewProp_DatamoshNoise_MetaData) }; // 3035810020
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshNoiseIntensity = { "DatamoshNoiseIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatamoshParameters, DatamoshNoiseIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshNoiseIntensity_MetaData), NewProp_DatamoshNoiseIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshNoiseSize = { "DatamoshNoiseSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatamoshParameters, DatamoshNoiseSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshNoiseSize_MetaData), NewProp_DatamoshNoiseSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshMotion = { "DatamoshMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatamoshParameters, DatamoshMotion), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshMotion_MetaData), NewProp_DatamoshMotion_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshStyle = { "DatamoshStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatamoshParameters, DatamoshStyle), Z_Construct_UEnum_DatamoshEffect_EDatamoshStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshStyle_MetaData), NewProp_DatamoshStyle_MetaData) }; // 1934494474
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshStyleIntensity = { "DatamoshStyleIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatamoshParameters, DatamoshStyleIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshStyleIntensity_MetaData), NewProp_DatamoshStyleIntensity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshTrail_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshTrail = { "DatamoshTrail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatamoshParameters, DatamoshTrail), Z_Construct_UEnum_DatamoshEffect_EDatamoshTrail, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshTrail_MetaData), NewProp_DatamoshTrail_MetaData) }; // 1365609776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatamoshParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshTrailFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshNoise_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshNoiseIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshNoiseSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshStyleIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshTrail_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewProp_DatamoshTrail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatamoshParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatamoshParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatamoshEffect,
	nullptr,
	&NewStructOps,
	"DatamoshParameters",
	Z_Construct_UScriptStruct_FDatamoshParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatamoshParameters_Statics::PropPointers),
	sizeof(FDatamoshParameters),
	alignof(FDatamoshParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatamoshParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatamoshParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatamoshParameters()
{
	if (!Z_Registration_Info_UScriptStruct_DatamoshParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatamoshParameters.InnerSingleton, Z_Construct_UScriptStruct_FDatamoshParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatamoshParameters.InnerSingleton;
}
// End ScriptStruct FDatamoshParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshParameters_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDatamoshModeSetting_StaticEnum, TEXT("EDatamoshModeSetting"), &Z_Registration_Info_UEnum_EDatamoshModeSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 839388740U) },
		{ EDatamoshNoise_StaticEnum, TEXT("EDatamoshNoise"), &Z_Registration_Info_UEnum_EDatamoshNoise, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3035810020U) },
		{ EDatamoshStyle_StaticEnum, TEXT("EDatamoshStyle"), &Z_Registration_Info_UEnum_EDatamoshStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1934494474U) },
		{ EDatamoshTrail_StaticEnum, TEXT("EDatamoshTrail"), &Z_Registration_Info_UEnum_EDatamoshTrail, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1365609776U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDatamoshParameters::StaticStruct, Z_Construct_UScriptStruct_FDatamoshParameters_Statics::NewStructOps, TEXT("DatamoshParameters"), &Z_Registration_Info_UScriptStruct_DatamoshParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatamoshParameters), 1031819529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshParameters_h_1059594785(TEXT("/Script/DatamoshEffect"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshParameters_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshParameters_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshParameters_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
