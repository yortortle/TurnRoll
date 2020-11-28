// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNROLL_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define TURNROLL_MainCharacter_generated_h

#define TurnRoll_Source_TurnRoll_MainCharacter_h_13_RPC_WRAPPERS
#define TurnRoll_Source_TurnRoll_MainCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TurnRoll_Source_TurnRoll_MainCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define TurnRoll_Source_TurnRoll_MainCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define TurnRoll_Source_TurnRoll_MainCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define TurnRoll_Source_TurnRoll_MainCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define TurnRoll_Source_TurnRoll_MainCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMainCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMainCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__NPCWidget() { return STRUCT_OFFSET(AMainCharacter, NPCWidget); }


#define TurnRoll_Source_TurnRoll_MainCharacter_h_10_PROLOG
#define TurnRoll_Source_TurnRoll_MainCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_MainCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_MainCharacter_h_13_RPC_WRAPPERS \
	TurnRoll_Source_TurnRoll_MainCharacter_h_13_INCLASS \
	TurnRoll_Source_TurnRoll_MainCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnRoll_Source_TurnRoll_MainCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_MainCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_MainCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_MainCharacter_h_13_INCLASS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_MainCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNROLL_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnRoll_Source_TurnRoll_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
