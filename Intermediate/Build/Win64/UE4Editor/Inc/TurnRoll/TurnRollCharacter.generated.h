// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNROLL_TurnRollCharacter_generated_h
#error "TurnRollCharacter.generated.h already included, missing '#pragma once' in TurnRollCharacter.h"
#endif
#define TURNROLL_TurnRollCharacter_generated_h

#define TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_RPC_WRAPPERS
#define TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnRollCharacter(); \
	friend struct Z_Construct_UClass_ATurnRollCharacter_Statics; \
public: \
	DECLARE_CLASS(ATurnRollCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(ATurnRollCharacter)


#define TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATurnRollCharacter(); \
	friend struct Z_Construct_UClass_ATurnRollCharacter_Statics; \
public: \
	DECLARE_CLASS(ATurnRollCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(ATurnRollCharacter)


#define TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurnRollCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurnRollCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnRollCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnRollCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurnRollCharacter(ATurnRollCharacter&&); \
	NO_API ATurnRollCharacter(const ATurnRollCharacter&); \
public:


#define TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurnRollCharacter(ATurnRollCharacter&&); \
	NO_API ATurnRollCharacter(const ATurnRollCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnRollCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnRollCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurnRollCharacter)


#define TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATurnRollCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATurnRollCharacter, FollowCamera); }


#define TurnRoll_Source_TurnRoll_TurnRollCharacter_h_9_PROLOG
#define TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_RPC_WRAPPERS \
	TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_INCLASS \
	TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_TurnRollCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNROLL_API UClass* StaticClass<class ATurnRollCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnRoll_Source_TurnRoll_TurnRollCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
