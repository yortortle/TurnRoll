// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TURNROLL_JeffCharacter_generated_h
#error "JeffCharacter.generated.h already included, missing '#pragma once' in JeffCharacter.h"
#endif
#define TURNROLL_JeffCharacter_generated_h

#define TurnRoll_Source_TurnRoll_JeffCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverLapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverLapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TurnRoll_Source_TurnRoll_JeffCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverLapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverLapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TurnRoll_Source_TurnRoll_JeffCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJeffCharacter(); \
	friend struct Z_Construct_UClass_AJeffCharacter_Statics; \
public: \
	DECLARE_CLASS(AJeffCharacter, AMainCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(AJeffCharacter)


#define TurnRoll_Source_TurnRoll_JeffCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAJeffCharacter(); \
	friend struct Z_Construct_UClass_AJeffCharacter_Statics; \
public: \
	DECLARE_CLASS(AJeffCharacter, AMainCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(AJeffCharacter)


#define TurnRoll_Source_TurnRoll_JeffCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJeffCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJeffCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJeffCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJeffCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJeffCharacter(AJeffCharacter&&); \
	NO_API AJeffCharacter(const AJeffCharacter&); \
public:


#define TurnRoll_Source_TurnRoll_JeffCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJeffCharacter() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJeffCharacter(AJeffCharacter&&); \
	NO_API AJeffCharacter(const AJeffCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJeffCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJeffCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJeffCharacter)


#define TurnRoll_Source_TurnRoll_JeffCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define TurnRoll_Source_TurnRoll_JeffCharacter_h_12_PROLOG
#define TurnRoll_Source_TurnRoll_JeffCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_JeffCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_JeffCharacter_h_15_RPC_WRAPPERS \
	TurnRoll_Source_TurnRoll_JeffCharacter_h_15_INCLASS \
	TurnRoll_Source_TurnRoll_JeffCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnRoll_Source_TurnRoll_JeffCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_JeffCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_JeffCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_JeffCharacter_h_15_INCLASS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_JeffCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNROLL_API UClass* StaticClass<class AJeffCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnRoll_Source_TurnRoll_JeffCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
