// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatamoshBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDatamoshParameters;
#ifdef DATAMOSHEFFECT_DatamoshBlueprintLibrary_generated_h
#error "DatamoshBlueprintLibrary.generated.h already included, missing '#pragma once' in DatamoshBlueprintLibrary.h"
#endif
#define DATAMOSHEFFECT_DatamoshBlueprintLibrary_generated_h

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetToDefaultParameters); \
	DECLARE_FUNCTION(execGetDatamoshParameters); \
	DECLARE_FUNCTION(execGetDatamoshActive); \
	DECLARE_FUNCTION(execGetDatamoshMode); \
	DECLARE_FUNCTION(execSetDatamoshParameters); \
	DECLARE_FUNCTION(execResetRenderTarget); \
	DECLARE_FUNCTION(execSetDatamoshActive); \
	DECLARE_FUNCTION(execSetDatamoshMode);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatamoshBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDatamoshBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDatamoshBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatamoshEffect"), NO_API) \
	DECLARE_SERIALIZER(UDatamoshBlueprintLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatamoshBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDatamoshBlueprintLibrary(UDatamoshBlueprintLibrary&&); \
	UDatamoshBlueprintLibrary(const UDatamoshBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatamoshBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatamoshBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatamoshBlueprintLibrary) \
	NO_API virtual ~UDatamoshBlueprintLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAMOSHEFFECT_API UClass* StaticClass<class UDatamoshBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Public_DatamoshBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
