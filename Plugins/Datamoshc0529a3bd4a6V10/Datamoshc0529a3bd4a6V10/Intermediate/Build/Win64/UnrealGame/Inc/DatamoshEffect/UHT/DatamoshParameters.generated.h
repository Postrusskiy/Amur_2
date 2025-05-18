// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatamoshParameters.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAMOSHEFFECT_DatamoshParameters_generated_h
#error "DatamoshParameters.generated.h already included, missing '#pragma once' in DatamoshParameters.h"
#endif
#define DATAMOSHEFFECT_DatamoshParameters_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshParameters_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatamoshParameters_Statics; \
	DATAMOSHEFFECT_API static class UScriptStruct* StaticStruct();


template<> DATAMOSHEFFECT_API UScriptStruct* StaticStruct<struct FDatamoshParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshParameters_h


#define FOREACH_ENUM_EDATAMOSHMODESETTING(op) \
	op(EDatamoshModeSetting::Off) \
	op(EDatamoshModeSetting::RenderTarget) \
	op(EDatamoshModeSetting::ScreenRendering) 
#define FOREACH_ENUM_EDATAMOSHNOISE(op) \
	op(EDatamoshNoise::None) \
	op(EDatamoshNoise::Cubic) \
	op(EDatamoshNoise::Strip) \
	op(EDatamoshNoise::Jitter) \
	op(EDatamoshNoise::Simplex2D) \
	op(EDatamoshNoise::Simplex2DCubic) 

enum class EDatamoshNoise : uint8;
template<> struct TIsUEnumClass<EDatamoshNoise> { enum { Value = true }; };
template<> DATAMOSHEFFECT_API UEnum* StaticEnum<EDatamoshNoise>();

#define FOREACH_ENUM_EDATAMOSHSTYLE(op) \
	op(EDatamoshStyle::Off) \
	op(EDatamoshStyle::ProcessedVelocityAlpha) 

enum class EDatamoshStyle : uint8;
template<> struct TIsUEnumClass<EDatamoshStyle> { enum { Value = true }; };
template<> DATAMOSHEFFECT_API UEnum* StaticEnum<EDatamoshStyle>();

#define FOREACH_ENUM_EDATAMOSHTRAIL(op) \
	op(EDatamoshTrail::Disabled) \
	op(EDatamoshTrail::EnabledWithoutMask) \
	op(EDatamoshTrail::EnabledWithMask) 

enum class EDatamoshTrail : uint8;
template<> struct TIsUEnumClass<EDatamoshTrail> { enum { Value = true }; };
template<> DATAMOSHEFFECT_API UEnum* StaticEnum<EDatamoshTrail>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
