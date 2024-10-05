// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TopDownPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNPROJECT_TopDownPlayerState_generated_h
#error "TopDownPlayerState.generated.h already included, missing '#pragma once' in TopDownPlayerState.h"
#endif
#define TOPDOWNPROJECT_TopDownPlayerState_generated_h

#define FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownPlayerState(); \
	friend struct Z_Construct_UClass_ATopDownPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATopDownPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownProject"), NO_API) \
	DECLARE_SERIALIZER(ATopDownPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ATopDownPlayerState*>(this); }


#define FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATopDownPlayerState(ATopDownPlayerState&&); \
	ATopDownPlayerState(const ATopDownPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownPlayerState) \
	NO_API virtual ~ATopDownPlayerState();


#define FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h_13_PROLOG
#define FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNPROJECT_API UClass* StaticClass<class ATopDownPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEgus_Myproject_GAS_Source_TopDownProject_TopDownPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
