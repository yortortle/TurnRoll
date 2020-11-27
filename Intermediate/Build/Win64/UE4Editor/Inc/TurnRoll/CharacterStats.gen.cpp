// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnRoll/CharacterStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterStats() {}
// Cross Module References
	TURNROLL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats();
	UPackage* Z_Construct_UPackage__Script_TurnRoll();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FCharacterStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TURNROLL_API uint32 Get_Z_Construct_UScriptStruct_FCharacterStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterStats, Z_Construct_UPackage__Script_TurnRoll(), TEXT("CharacterStats"), sizeof(FCharacterStats), Get_Z_Construct_UScriptStruct_FCharacterStats_Hash());
	}
	return Singleton;
}
template<> TURNROLL_API UScriptStruct* StaticStruct<FCharacterStats>()
{
	return FCharacterStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterStats(FCharacterStats::StaticStruct, TEXT("/Script/TurnRoll"), TEXT("CharacterStats"), false, nullptr, nullptr);
static struct FScriptStruct_TurnRoll_StaticRegisterNativesFCharacterStats
{
	FScriptStruct_TurnRoll_StaticRegisterNativesFCharacterStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterStats")),new UScriptStruct::TCppStructOps<FCharacterStats>);
	}
} ScriptStruct_TurnRoll_StaticRegisterNativesFCharacterStats;
	struct Z_Construct_UScriptStruct_FCharacterStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoveSet;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoveSet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MainMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CritChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CritChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Defense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Character_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CharacterStats.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MoveSet_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterStats.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MoveSet = { "MoveSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStats, MoveSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MoveSet_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MoveSet_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MoveSet_Inner = { "MoveSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MainMove_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MainMove = { "MainMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStats, MainMove), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MainMove_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MainMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CritChance_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CritChance = { "CritChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStats, CritChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CritChance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CritChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Defense_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Defense = { "Defense", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStats, Defense), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Defense_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Defense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStats, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Attack_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Character_Name_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Character_Name = { "Character_Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterStats, Character_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Character_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Character_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MoveSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MoveSet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MainMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CritChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Defense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Character_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TurnRoll,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CharacterStats",
		sizeof(FCharacterStats),
		alignof(FCharacterStats),
		Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TurnRoll();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterStats"), sizeof(FCharacterStats), Get_Z_Construct_UScriptStruct_FCharacterStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterStats_Hash() { return 3885221528U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
