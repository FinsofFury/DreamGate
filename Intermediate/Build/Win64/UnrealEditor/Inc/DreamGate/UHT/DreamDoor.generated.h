// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DreamDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DREAMGATE_DreamDoor_generated_h
#error "DreamDoor.generated.h already included, missing '#pragma once' in DreamDoor.h"
#endif
#define DREAMGATE_DreamDoor_generated_h

#define FID_DreamGate_Source_DreamGate_DreamDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADreamDoor(); \
	friend struct Z_Construct_UClass_ADreamDoor_Statics; \
public: \
	DECLARE_CLASS(ADreamDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DreamGate"), NO_API) \
	DECLARE_SERIALIZER(ADreamDoor)


#define FID_DreamGate_Source_DreamGate_DreamDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADreamDoor(ADreamDoor&&); \
	ADreamDoor(const ADreamDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADreamDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADreamDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADreamDoor) \
	NO_API virtual ~ADreamDoor();


#define FID_DreamGate_Source_DreamGate_DreamDoor_h_9_PROLOG
#define FID_DreamGate_Source_DreamGate_DreamDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DreamGate_Source_DreamGate_DreamDoor_h_12_INCLASS_NO_PURE_DECLS \
	FID_DreamGate_Source_DreamGate_DreamDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMGATE_API UClass* StaticClass<class ADreamDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DreamGate_Source_DreamGate_DreamDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
