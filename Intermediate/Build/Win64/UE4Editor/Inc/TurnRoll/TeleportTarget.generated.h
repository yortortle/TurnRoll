// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNROLL_TeleportTarget_generated_h
#error "TeleportTarget.generated.h already included, missing '#pragma once' in TeleportTarget.h"
#endif
#define TURNROLL_TeleportTarget_generated_h

#define TurnRoll_Source_TurnRoll_TeleportTarget_h_15_RPC_WRAPPERS
#define TurnRoll_Source_TurnRoll_TeleportTarget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TurnRoll_Source_TurnRoll_TeleportTarget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeleportTarget(); \
	friend struct Z_Construct_UClass_ATeleportTarget_Statics; \
public: \
	DECLARE_CLASS(ATeleportTarget, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(ATeleportTarget)


#define TurnRoll_Source_TurnRoll_TeleportTarget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATeleportTarget(); \
	friend struct Z_Construct_UClass_ATeleportTarget_Statics; \
public: \
	DECLARE_CLASS(ATeleportTarget, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(ATeleportTarget)


#define TurnRoll_Source_TurnRoll_TeleportTarget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeleportTarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeleportTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleportTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleportTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleportTarget(ATeleportTarget&&); \
	NO_API ATeleportTarget(const ATeleportTarget&); \
public:


#define TurnRoll_Source_TurnRoll_TeleportTarget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleportTarget(ATeleportTarget&&); \
	NO_API ATeleportTarget(const ATeleportTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleportTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleportTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeleportTarget)


#define TurnRoll_Source_TurnRoll_TeleportTarget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultSceneRoot() { return STRUCT_OFFSET(ATeleportTarget, DefaultSceneRoot); } \
	FORCEINLINE static uint32 __PPO__TeleportParticles() { return STRUCT_OFFSET(ATeleportTarget, TeleportParticles); }


#define TurnRoll_Source_TurnRoll_TeleportTarget_h_12_PROLOG
#define TurnRoll_Source_TurnRoll_TeleportTarget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_TeleportTarget_h_15_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_TeleportTarget_h_15_RPC_WRAPPERS \
	TurnRoll_Source_TurnRoll_TeleportTarget_h_15_INCLASS \
	TurnRoll_Source_TurnRoll_TeleportTarget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnRoll_Source_TurnRoll_TeleportTarget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_TeleportTarget_h_15_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_TeleportTarget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_TeleportTarget_h_15_INCLASS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_TeleportTarget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNROLL_API UClass* StaticClass<class ATeleportTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnRoll_Source_TurnRoll_TeleportTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
