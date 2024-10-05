// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownProject/TopDownAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_UTopDownAttributeSet();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_UTopDownAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDownProject();
// End Cross Module References

// Begin Class UTopDownAttributeSet
void UTopDownAttributeSet::StaticRegisterNativesUTopDownAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTopDownAttributeSet);
UClass* Z_Construct_UClass_UTopDownAttributeSet_NoRegister()
{
	return UTopDownAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UTopDownAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TopDownAttributeSet.h" },
		{ "ModuleRelativePath", "TopDownAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTopDownAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTopDownAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTopDownAttributeSet_Statics::ClassParams = {
	&UTopDownAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UTopDownAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTopDownAttributeSet()
{
	if (!Z_Registration_Info_UClass_UTopDownAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTopDownAttributeSet.OuterSingleton, Z_Construct_UClass_UTopDownAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTopDownAttributeSet.OuterSingleton;
}
template<> TOPDOWNPROJECT_API UClass* StaticClass<UTopDownAttributeSet>()
{
	return UTopDownAttributeSet::StaticClass();
}
UTopDownAttributeSet::UTopDownAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTopDownAttributeSet);
UTopDownAttributeSet::~UTopDownAttributeSet() {}
// End Class UTopDownAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTopDownAttributeSet, UTopDownAttributeSet::StaticClass, TEXT("UTopDownAttributeSet"), &Z_Registration_Info_UClass_UTopDownAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTopDownAttributeSet), 1707241944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownAttributeSet_h_1506533963(TEXT("/Script/TopDownProject"),
	Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
