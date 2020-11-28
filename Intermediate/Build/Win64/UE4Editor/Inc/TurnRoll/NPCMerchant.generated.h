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
#ifdef TURNROLL_NPCMerchant_generated_h
#error "NPCMerchant.generated.h already included, missing '#pragma once' in NPCMerchant.h"
#endif
#define TURNROLL_NPCMerchant_generated_h

#define TurnRoll_Source_TurnRoll_NPCMerchant_h_13_RPC_WRAPPERS \
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


#define TurnRoll_Source_TurnRoll_NPCMerchant_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define TurnRoll_Source_TurnRoll_NPCMerchant_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCMerchant(); \
	friend struct Z_Construct_UClass_ANPCMerchant_Statics; \
public: \
	DECLARE_CLASS(ANPCMerchant, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(ANPCMerchant)


#define TurnRoll_Source_TurnRoll_NPCMerchant_h_13_INCLASS \
private: \
	static void StaticRegisterNativesANPCMerchant(); \
	friend struct Z_Construct_UClass_ANPCMerchant_Statics; \
public: \
	DECLARE_CLASS(ANPCMerchant, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnRoll"), NO_API) \
	DECLARE_SERIALIZER(ANPCMerchant)


#define TurnRoll_Source_TurnRoll_NPCMerchant_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCMerchant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCMerchant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCMerchant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCMerchant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCMerchant(ANPCMerchant&&); \
	NO_API ANPCMerchant(const ANPCMerchant&); \
public:


#define TurnRoll_Source_TurnRoll_NPCMerchant_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCMerchant(ANPCMerchant&&); \
	NO_API ANPCMerchant(const ANPCMerchant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCMerchant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCMerchant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCMerchant)


#define TurnRoll_Source_TurnRoll_NPCMerchant_h_13_PRIVATE_PROPERTY_OFFSET
#define TurnRoll_Source_TurnRoll_NPCMerchant_h_10_PROLOG
#define TurnRoll_Source_TurnRoll_NPCMerchant_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_NPCMerchant_h_13_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_NPCMerchant_h_13_RPC_WRAPPERS \
	TurnRoll_Source_TurnRoll_NPCMerchant_h_13_INCLASS \
	TurnRoll_Source_TurnRoll_NPCMerchant_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TurnRoll_Source_TurnRoll_NPCMerchant_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TurnRoll_Source_TurnRoll_NPCMerchant_h_13_PRIVATE_PROPERTY_OFFSET \
	TurnRoll_Source_TurnRoll_NPCMerchant_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_NPCMerchant_h_13_INCLASS_NO_PURE_DECLS \
	TurnRoll_Source_TurnRoll_NPCMerchant_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNROLL_API UClass* StaticClass<class ANPCMerchant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TurnRoll_Source_TurnRoll_NPCMerchant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
