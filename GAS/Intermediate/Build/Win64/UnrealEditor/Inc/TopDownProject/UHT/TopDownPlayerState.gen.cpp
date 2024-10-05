// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownProject/TopDownPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_ATopDownPlayerState();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_ATopDownPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDownProject();
// End Cross Module References

// Begin Class ATopDownPlayerState
void ATopDownPlayerState::StaticRegisterNativesATopDownPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownPlayerState);
UClass* Z_Construct_UClass_ATopDownPlayerState_NoRegister()
{
	return ATopDownPlayerState::StaticClass();
}
struct Z_Construct_UClass_ATopDownPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TopDownPlayerState.h" },
		{ "ModuleRelativePath", "TopDownPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "TopDownPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerState_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATopDownPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATopDownPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ATopDownPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownPlayerState_Statics::ClassParams = {
	&ATopDownPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATopDownPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATopDownPlayerState()
{
	if (!Z_Registration_Info_UClass_ATopDownPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownPlayerState.OuterSingleton, Z_Construct_UClass_ATopDownPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATopDownPlayerState.OuterSingleton;
}
template<> TOPDOWNPROJECT_API UClass* StaticClass<ATopDownPlayerState>()
{
	return ATopDownPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownPlayerState);
ATopDownPlayerState::~ATopDownPlayerState() {}
// End Class ATopDownPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownPlayerState, ATopDownPlayerState::StaticClass, TEXT("ATopDownPlayerState"), &Z_Registration_Info_UClass_ATopDownPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownPlayerState), 1561433550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h_3549159520(TEXT("/Script/TopDownProject"),
	Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
