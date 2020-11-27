// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNROLL_MyGameMode_generated_h
#error "MyGameMode.generated.h already included, missing '#pragma once' in MyGameMode.h"
#endif
#define TURNROLL_MyGameMode_generated_h

#define TurnRoll_Source_TurnRoll_MyGameMode_h_13_RPC_WRAPPERS
#define TurnRoll_Source_TurnRoll_MyGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TurnRoll_Source_TurnRoll_MyGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define TurnRoll_Source_TurnRoll_MyGameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define TurnRoll_Source_TurnRoll_MyGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public:


#define TurnRoll_Source_TurnRoll_MyGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode)


#define TurnRoll_Source_TurnRoll_MyGameMode_h_13_PRIVATE_PROPERTY_OFFSET
#define TurnRoll_Source_TurnRoll_MyGameMode_h_10_PROLOG
#define TurnRoll_Source_TurnRoll_MyGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_MyGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_MyGameMode_h_13_RPC_WRAPPERS \
	TurnRoll_Source_TurnRoll_MyGameMode_h_13_INCLASS \
	TurnRoll_Source_TurnRoll_MyGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnRoll_Source_TurnRoll_MyGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_MyGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_MyGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_MyGameMode_h_13_INCLASS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_MyGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNROLL_API UClass* StaticClass<class AMyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnRoll_Source_TurnRoll_MyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
