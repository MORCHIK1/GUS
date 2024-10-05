// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownProject/TopDownProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_ATopDownProjectGameMode();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_ATopDownProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDownProject();
// End Cross Module References

// Begin Class ATopDownProjectGameMode
void ATopDownProjectGameMode::StaticRegisterNativesATopDownProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownProjectGameMode);
UClass* Z_Construct_UClass_ATopDownProjectGameMode_NoRegister()
{
	return ATopDownProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ATopDownProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TopDownProjectGameMode.h" },
		{ "ModuleRelativePath", "TopDownProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATopDownProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownProjectGameMode_Statics::ClassParams = {
	&ATopDownProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATopDownProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ATopDownProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownProjectGameMode.OuterSingleton, Z_Construct_UClass_ATopDownProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATopDownProjectGameMode.OuterSingleton;
}
template<> TOPDOWNPROJECT_API UClass* StaticClass<ATopDownProjectGameMode>()
{
	return ATopDownProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownProjectGameMode);
ATopDownProjectGameMode::~ATopDownProjectGameMode() {}
// End Class ATopDownProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownProjectGameMode, ATopDownProjectGameMode::StaticClass, TEXT("ATopDownProjectGameMode"), &Z_Registration_Info_UClass_ATopDownProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownProjectGameMode), 1007961393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownProjectGameMode_h_1197193525(TEXT("/Script/TopDownProject"),
	Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
