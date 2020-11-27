// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNROLL_CharacterState_generated_h
#error "CharacterState.generated.h already included, missing '#pragma once' in CharacterState.h"
#endif
#define TURNROLL_CharacterState_generated_h

#define TurnRoll_Source_TurnRoll_CharacterState_h_18_RPC_WRAPPERS
#define TurnRoll_Source_TurnRoll_CharacterState_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define TurnRoll_Source_TurnRoll_CharacterState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterState(); \
	friend struct Z_Construct_UClass_UCharacterState_Statics; \
public: \
	DECLARE_CLASS(UCharacterState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(UCharacterState)


#define TurnRoll_Source_TurnRoll_CharacterState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterState(); \
	friend struct Z_Construct_UClass_UCharacterState_Statics; \
public: \
	DECLARE_CLASS(UCharacterState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(UCharacterState)


#define TurnRoll_Source_TurnRoll_CharacterState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterState(UCharacterState&&); \
	NO_API UCharacterState(const UCharacterState&); \
public:


#define TurnRoll_Source_TurnRoll_CharacterState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterState(UCharacterState&&); \
	NO_API UCharacterState(const UCharacterState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterState)


#define TurnRoll_Source_TurnRoll_CharacterState_h_18_PRIVATE_PROPERTY_OFFSET
#define TurnRoll_Source_TurnRoll_CharacterState_h_15_PROLOG
#define TurnRoll_Source_TurnRoll_CharacterState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_CharacterState_h_18_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_CharacterState_h_18_RPC_WRAPPERS \
	TurnRoll_Source_TurnRoll_CharacterState_h_18_INCLASS \
	TurnRoll_Source_TurnRoll_CharacterState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnRoll_Source_TurnRoll_CharacterState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_CharacterState_h_18_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_CharacterState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_CharacterState_h_18_INCLASS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_CharacterState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNROLL_API UClass* StaticClass<class UCharacterState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnRoll_Source_TurnRoll_CharacterState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
