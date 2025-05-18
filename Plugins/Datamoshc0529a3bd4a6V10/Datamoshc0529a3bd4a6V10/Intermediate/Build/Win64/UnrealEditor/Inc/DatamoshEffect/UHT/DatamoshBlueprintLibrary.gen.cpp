// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatamoshEffect/Public/DatamoshBlueprintLibrary.h"
#include "DatamoshEffect/Public/DatamoshParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatamoshBlueprintLibrary() {}

// Begin Cross Module References
DATAMOSHEFFECT_API UClass* Z_Construct_UClass_UDatamoshBlueprintLibrary();
DATAMOSHEFFECT_API UClass* Z_Construct_UClass_UDatamoshBlueprintLibrary_NoRegister();
DATAMOSHEFFECT_API UEnum* Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting();
DATAMOSHEFFECT_API UScriptStruct* Z_Construct_UScriptStruct_FDatamoshParameters();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DatamoshEffect();
// End Cross Module References

// Begin Class UDatamoshBlueprintLibrary Function GetDatamoshActive
struct Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics
{
	struct DatamoshBlueprintLibrary_eventGetDatamoshActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datamosh" },
		{ "DisplayName", "Get Datamosh Active (Screen Rendering only)" },
		{ "ModuleRelativePath", "Public/DatamoshBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DatamoshBlueprintLibrary_eventGetDatamoshActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DatamoshBlueprintLibrary_eventGetDatamoshActive_Parms), &Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatamoshBlueprintLibrary, nullptr, "GetDatamoshActive", nullptr, nullptr, Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::DatamoshBlueprintLibrary_eventGetDatamoshActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::DatamoshBlueprintLibrary_eventGetDatamoshActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatamoshBlueprintLibrary::execGetDatamoshActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDatamoshBlueprintLibrary::GetDatamoshActive();
	P_NATIVE_END;
}
// End Class UDatamoshBlueprintLibrary Function GetDatamoshActive

// Begin Class UDatamoshBlueprintLibrary Function GetDatamoshMode
struct Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics
{
	struct DatamoshBlueprintLibrary_eventGetDatamoshMode_Parms
	{
		TEnumAsByte<EDatamoshModeSetting::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datamosh" },
		{ "Comment", "// Getters\n" },
		{ "ModuleRelativePath", "Public/DatamoshBlueprintLibrary.h" },
		{ "ToolTip", "Getters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatamoshBlueprintLibrary_eventGetDatamoshMode_Parms, ReturnValue), Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting, METADATA_PARAMS(0, nullptr) }; // 839388740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatamoshBlueprintLibrary, nullptr, "GetDatamoshMode", nullptr, nullptr, Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::DatamoshBlueprintLibrary_eventGetDatamoshMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::DatamoshBlueprintLibrary_eventGetDatamoshMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatamoshBlueprintLibrary::execGetDatamoshMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EDatamoshModeSetting::Type>*)Z_Param__Result=UDatamoshBlueprintLibrary::GetDatamoshMode();
	P_NATIVE_END;
}
// End Class UDatamoshBlueprintLibrary Function GetDatamoshMode

// Begin Class UDatamoshBlueprintLibrary Function GetDatamoshParameters
struct Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics
{
	struct DatamoshBlueprintLibrary_eventGetDatamoshParameters_Parms
	{
		FDatamoshParameters ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datamosh" },
		{ "DisplayName", "Get Datamosh Parameters" },
		{ "ModuleRelativePath", "Public/DatamoshBlueprintLibrary.h" },
		{ "ToolTip", "Retrieve the current Datamosh shader parameters." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatamoshBlueprintLibrary_eventGetDatamoshParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FDatamoshParameters, METADATA_PARAMS(0, nullptr) }; // 1031819529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatamoshBlueprintLibrary, nullptr, "GetDatamoshParameters", nullptr, nullptr, Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::DatamoshBlueprintLibrary_eventGetDatamoshParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::DatamoshBlueprintLibrary_eventGetDatamoshParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatamoshBlueprintLibrary::execGetDatamoshParameters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDatamoshParameters*)Z_Param__Result=UDatamoshBlueprintLibrary::GetDatamoshParameters();
	P_NATIVE_END;
}
// End Class UDatamoshBlueprintLibrary Function GetDatamoshParameters

// Begin Class UDatamoshBlueprintLibrary Function ResetRenderTarget
struct Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetRenderTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datamosh" },
		{ "DisplayName", "Reset Datamosh Render Target" },
		{ "ModuleRelativePath", "Public/DatamoshBlueprintLibrary.h" },
		{ "ToolTip", "Resets the render targets and calls CreatePooledRenderTarget_RenderThread" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatamoshBlueprintLibrary, nullptr, "ResetRenderTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetRenderTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatamoshBlueprintLibrary::execResetRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UDatamoshBlueprintLibrary::ResetRenderTarget();
	P_NATIVE_END;
}
// End Class UDatamoshBlueprintLibrary Function ResetRenderTarget

// Begin Class UDatamoshBlueprintLibrary Function ResetToDefaultParameters
struct Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetToDefaultParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datamosh" },
		{ "DisplayName", "Reset Datamosh Parameters" },
		{ "ModuleRelativePath", "Public/DatamoshBlueprintLibrary.h" },
		{ "ToolTip", "Resets the current effect parameters to default values" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetToDefaultParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatamoshBlueprintLibrary, nullptr, "ResetToDefaultParameters", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetToDefaultParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetToDefaultParameters_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetToDefaultParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetToDefaultParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatamoshBlueprintLibrary::execResetToDefaultParameters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UDatamoshBlueprintLibrary::ResetToDefaultParameters();
	P_NATIVE_END;
}
// End Class UDatamoshBlueprintLibrary Function ResetToDefaultParameters

// Begin Class UDatamoshBlueprintLibrary Function SetDatamoshActive
struct Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics
{
	struct DatamoshBlueprintLibrary_eventSetDatamoshActive_Parms
	{
		bool bEnabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datamosh" },
		{ "DisplayName", "Enable Datamosh Effect (Screen Rendering only)" },
		{ "ModuleRelativePath", "Public/DatamoshBlueprintLibrary.h" },
		{ "ToolTip", "Enable Datamosh Effect. Only when using Screen Rendering Mode." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((DatamoshBlueprintLibrary_eventSetDatamoshActive_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DatamoshBlueprintLibrary_eventSetDatamoshActive_Parms), &Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DatamoshBlueprintLibrary_eventSetDatamoshActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DatamoshBlueprintLibrary_eventSetDatamoshActive_Parms), &Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatamoshBlueprintLibrary, nullptr, "SetDatamoshActive", nullptr, nullptr, Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::DatamoshBlueprintLibrary_eventSetDatamoshActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::DatamoshBlueprintLibrary_eventSetDatamoshActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatamoshBlueprintLibrary::execSetDatamoshActive)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDatamoshBlueprintLibrary::SetDatamoshActive(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UDatamoshBlueprintLibrary Function SetDatamoshActive

// Begin Class UDatamoshBlueprintLibrary Function SetDatamoshMode
struct Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics
{
	struct DatamoshBlueprintLibrary_eventSetDatamoshMode_Parms
	{
		TEnumAsByte<EDatamoshModeSetting::Type> Mode;
		TEnumAsByte<EDatamoshModeSetting::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datamosh" },
		{ "DisplayName", "Set Datamosh Mode" },
		{ "ModuleRelativePath", "Public/DatamoshBlueprintLibrary.h" },
		{ "ToolTip", "Datamosh Effect Render Mode. 0 - Disabled, 1 - Render Target mode, 2 - Screen Rendering mode. See documentation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatamoshBlueprintLibrary_eventSetDatamoshMode_Parms, Mode), Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting, METADATA_PARAMS(0, nullptr) }; // 839388740
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatamoshBlueprintLibrary_eventSetDatamoshMode_Parms, ReturnValue), Z_Construct_UEnum_DatamoshEffect_EDatamoshModeSetting, METADATA_PARAMS(0, nullptr) }; // 839388740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatamoshBlueprintLibrary, nullptr, "SetDatamoshMode", nullptr, nullptr, Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::DatamoshBlueprintLibrary_eventSetDatamoshMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::DatamoshBlueprintLibrary_eventSetDatamoshMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatamoshBlueprintLibrary::execSetDatamoshMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EDatamoshModeSetting::Type>*)Z_Param__Result=UDatamoshBlueprintLibrary::SetDatamoshMode(EDatamoshModeSetting::Type(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class UDatamoshBlueprintLibrary Function SetDatamoshMode

// Begin Class UDatamoshBlueprintLibrary Function SetDatamoshParameters
struct Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics
{
	struct DatamoshBlueprintLibrary_eventSetDatamoshParameters_Parms
	{
		FDatamoshParameters Parameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Datamosh" },
		{ "DisplayName", "Set Datamosh Parameters" },
		{ "ModuleRelativePath", "Public/DatamoshBlueprintLibrary.h" },
		{ "ToolTip", "Apply custom Datamosh parameters." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatamoshBlueprintLibrary_eventSetDatamoshParameters_Parms, Parameters), Z_Construct_UScriptStruct_FDatamoshParameters, METADATA_PARAMS(0, nullptr) }; // 1031819529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatamoshBlueprintLibrary, nullptr, "SetDatamoshParameters", nullptr, nullptr, Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::DatamoshBlueprintLibrary_eventSetDatamoshParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::DatamoshBlueprintLibrary_eventSetDatamoshParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatamoshBlueprintLibrary::execSetDatamoshParameters)
{
	P_GET_STRUCT(FDatamoshParameters,Z_Param_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDatamoshBlueprintLibrary::SetDatamoshParameters(Z_Param_Parameters);
	P_NATIVE_END;
}
// End Class UDatamoshBlueprintLibrary Function SetDatamoshParameters

// Begin Class UDatamoshBlueprintLibrary
void UDatamoshBlueprintLibrary::StaticRegisterNativesUDatamoshBlueprintLibrary()
{
	UClass* Class = UDatamoshBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDatamoshActive", &UDatamoshBlueprintLibrary::execGetDatamoshActive },
		{ "GetDatamoshMode", &UDatamoshBlueprintLibrary::execGetDatamoshMode },
		{ "GetDatamoshParameters", &UDatamoshBlueprintLibrary::execGetDatamoshParameters },
		{ "ResetRenderTarget", &UDatamoshBlueprintLibrary::execResetRenderTarget },
		{ "ResetToDefaultParameters", &UDatamoshBlueprintLibrary::execResetToDefaultParameters },
		{ "SetDatamoshActive", &UDatamoshBlueprintLibrary::execSetDatamoshActive },
		{ "SetDatamoshMode", &UDatamoshBlueprintLibrary::execSetDatamoshMode },
		{ "SetDatamoshParameters", &UDatamoshBlueprintLibrary::execSetDatamoshParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatamoshBlueprintLibrary);
UClass* Z_Construct_UClass_UDatamoshBlueprintLibrary_NoRegister()
{
	return UDatamoshBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UDatamoshBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint library for managing Datamosh effects and parameters.\n */" },
		{ "IncludePath", "DatamoshBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DatamoshBlueprintLibrary.h" },
		{ "ToolTip", "Blueprint library for managing Datamosh effects and parameters." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshActive, "GetDatamoshActive" }, // 2059509382
		{ &Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshMode, "GetDatamoshMode" }, // 2841509078
		{ &Z_Construct_UFunction_UDatamoshBlueprintLibrary_GetDatamoshParameters, "GetDatamoshParameters" }, // 657167375
		{ &Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetRenderTarget, "ResetRenderTarget" }, // 1247992622
		{ &Z_Construct_UFunction_UDatamoshBlueprintLibrary_ResetToDefaultParameters, "ResetToDefaultParameters" }, // 971966460
		{ &Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshActive, "SetDatamoshActive" }, // 4289740760
		{ &Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshMode, "SetDatamoshMode" }, // 165518050
		{ &Z_Construct_UFunction_UDatamoshBlueprintLibrary_SetDatamoshParameters, "SetDatamoshParameters" }, // 1218129324
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatamoshBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatamoshBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DatamoshEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatamoshBlueprintLibrary_Statics::ClassParams = {
	&UDatamoshBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatamoshBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatamoshBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UDatamoshBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatamoshBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDatamoshBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatamoshBlueprintLibrary.OuterSingleton;
}
template<> DATAMOSHEFFECT_API UClass* StaticClass<UDatamoshBlueprintLibrary>()
{
	return UDatamoshBlueprintLibrary::StaticClass();
}
UDatamoshBlueprintLibrary::UDatamoshBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatamoshBlueprintLibrary);
UDatamoshBlueprintLibrary::~UDatamoshBlueprintLibrary() {}
// End Class UDatamoshBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatamoshBlueprintLibrary, UDatamoshBlueprintLibrary::StaticClass, TEXT("UDatamoshBlueprintLibrary"), &Z_Registration_Info_UClass_UDatamoshBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatamoshBlueprintLibrary), 3805464397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_1550125732(TEXT("/Script/DatamoshEffect"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
