// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatamoshEffect/Private/DatamoshSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatamoshSubsystem() {}

// Begin Cross Module References
DATAMOSHEFFECT_API UClass* Z_Construct_UClass_UDatamoshSubsystem();
DATAMOSHEFFECT_API UClass* Z_Construct_UClass_UDatamoshSubsystem_NoRegister();
DATAMOSHEFFECT_API UClass* Z_Construct_UClass_UDatamoshWorldSubsystem();
DATAMOSHEFFECT_API UClass* Z_Construct_UClass_UDatamoshWorldSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_DatamoshEffect();
// End Cross Module References

// Begin Class UDatamoshSubsystem
void UDatamoshSubsystem::StaticRegisterNativesUDatamoshSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatamoshSubsystem);
UClass* Z_Construct_UClass_UDatamoshSubsystem_NoRegister()
{
	return UDatamoshSubsystem::StaticClass();
}
struct Z_Construct_UClass_UDatamoshSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DatamoshSubsystem.h" },
		{ "ModuleRelativePath", "Private/DatamoshSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatamoshRenderTargetSource_MetaData[] = {
		{ "Comment", "// The source render target texture asset\n" },
		{ "ModuleRelativePath", "Private/DatamoshSubsystem.h" },
		{ "ToolTip", "The source render target texture asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DatamoshRenderTargetSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatamoshSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatamoshSubsystem_Statics::NewProp_DatamoshRenderTargetSource = { "DatamoshRenderTargetSource", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatamoshSubsystem, DatamoshRenderTargetSource), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatamoshRenderTargetSource_MetaData), NewProp_DatamoshRenderTargetSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatamoshSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatamoshSubsystem_Statics::NewProp_DatamoshRenderTargetSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatamoshSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DatamoshEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatamoshSubsystem_Statics::ClassParams = {
	&UDatamoshSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatamoshSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatamoshSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatamoshSubsystem()
{
	if (!Z_Registration_Info_UClass_UDatamoshSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatamoshSubsystem.OuterSingleton, Z_Construct_UClass_UDatamoshSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatamoshSubsystem.OuterSingleton;
}
template<> DATAMOSHEFFECT_API UClass* StaticClass<UDatamoshSubsystem>()
{
	return UDatamoshSubsystem::StaticClass();
}
UDatamoshSubsystem::UDatamoshSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatamoshSubsystem);
UDatamoshSubsystem::~UDatamoshSubsystem() {}
// End Class UDatamoshSubsystem

// Begin Class UDatamoshWorldSubsystem
void UDatamoshWorldSubsystem::StaticRegisterNativesUDatamoshWorldSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatamoshWorldSubsystem);
UClass* Z_Construct_UClass_UDatamoshWorldSubsystem_NoRegister()
{
	return UDatamoshWorldSubsystem::StaticClass();
}
struct Z_Construct_UClass_UDatamoshWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatamoshSubsystem.h" },
		{ "ModuleRelativePath", "Private/DatamoshSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatamoshWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatamoshWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DatamoshEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatamoshWorldSubsystem_Statics::ClassParams = {
	&UDatamoshWorldSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatamoshWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatamoshWorldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatamoshWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_UDatamoshWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatamoshWorldSubsystem.OuterSingleton, Z_Construct_UClass_UDatamoshWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatamoshWorldSubsystem.OuterSingleton;
}
template<> DATAMOSHEFFECT_API UClass* StaticClass<UDatamoshWorldSubsystem>()
{
	return UDatamoshWorldSubsystem::StaticClass();
}
UDatamoshWorldSubsystem::UDatamoshWorldSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatamoshWorldSubsystem);
UDatamoshWorldSubsystem::~UDatamoshWorldSubsystem() {}
// End Class UDatamoshWorldSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Private_DatamoshSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatamoshSubsystem, UDatamoshSubsystem::StaticClass, TEXT("UDatamoshSubsystem"), &Z_Registration_Info_UClass_UDatamoshSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatamoshSubsystem), 1611872349U) },
		{ Z_Construct_UClass_UDatamoshWorldSubsystem, UDatamoshWorldSubsystem::StaticClass, TEXT("UDatamoshWorldSubsystem"), &Z_Registration_Info_UClass_UDatamoshWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatamoshWorldSubsystem), 2319080458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Private_DatamoshSubsystem_h_3452863423(TEXT("/Script/DatamoshEffect"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Private_DatamoshSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DatamoshEffect_Source_DatamoshEffect_Private_DatamoshSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
