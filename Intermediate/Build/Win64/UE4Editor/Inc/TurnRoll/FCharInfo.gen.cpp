// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnRoll/FCharInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCharInfo() {}
// Cross Module References
	TURNROLL_API UScriptStruct* Z_Construct_UScriptStruct_FCharInfo();
	UPackage* Z_Construct_UPackage__Script_TurnRoll();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FCharInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TURNROLL_API uint32 Get_Z_Construct_UScriptStruct_FCharInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharInfo, Z_Construct_UPackage__Script_TurnRoll(), TEXT("CharInfo"), sizeof(FCharInfo), Get_Z_Construct_UScriptStruct_FCharInfo_Hash());
	}
	return Singleton;
}
template<> TURNROLL_API UScriptStruct* StaticStruct<FCharInfo>()
{
	return FCharInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharInfo(FCharInfo::StaticStruct, TEXT("/Script/TurnRoll"), TEXT("CharInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TurnRoll_StaticRegisterNativesFCharInfo
{
	FScriptStruct_TurnRoll_StaticRegisterNativesFCharInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharInfo")),new UScriptStruct::TCppStructOps<FCharInfo>);
	}
} ScriptStruct_TurnRoll_StaticRegisterNativesFCharInfo;
	struct Z_Construct_UScriptStruct_FCharInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Class_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Character_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FCharInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharInfo_Statics::NewProp_Class_ID_MetaData[] = {
		{ "Category", "Character Info" },
		{ "ModuleRelativePath", "FCharInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharInfo_Statics::NewProp_Class_ID = { "Class_ID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharInfo, Class_ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharInfo_Statics::NewProp_Class_ID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharInfo_Statics::NewProp_Class_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharInfo_Statics::NewProp_Character_Name_MetaData[] = {
		{ "Category", "Character Info" },
		{ "ModuleRelativePath", "FCharInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharInfo_Statics::NewProp_Character_Name = { "Character_Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharInfo, Character_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharInfo_Statics::NewProp_Character_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharInfo_Statics::NewProp_Character_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharInfo_Statics::NewProp_Class_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharInfo_Statics::NewProp_Character_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TurnRoll,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CharInfo",
		sizeof(FCharInfo),
		alignof(FCharInfo),
		Z_Construct_UScriptStruct_FCharInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCharInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TurnRoll();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharInfo"), sizeof(FCharInfo), Get_Z_Construct_UScriptStruct_FCharInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharInfo_Hash() { return 3287521731U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
