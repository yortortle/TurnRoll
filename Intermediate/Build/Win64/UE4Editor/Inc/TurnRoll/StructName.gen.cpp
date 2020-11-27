// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnRoll/StructName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructName() {}
// Cross Module References
	TURNROLL_API UScriptStruct* Z_Construct_UScriptStruct_FStructTest();
	UPackage* Z_Construct_UPackage__Script_TurnRoll();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FStructTest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TURNROLL_API uint32 Get_Z_Construct_UScriptStruct_FStructTest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructTest, Z_Construct_UPackage__Script_TurnRoll(), TEXT("StructTest"), sizeof(FStructTest), Get_Z_Construct_UScriptStruct_FStructTest_Hash());
	}
	return Singleton;
}
template<> TURNROLL_API UScriptStruct* StaticStruct<FStructTest>()
{
	return FStructTest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructTest(FStructTest::StaticStruct, TEXT("/Script/TurnRoll"), TEXT("StructTest"), false, nullptr, nullptr);
static struct FScriptStruct_TurnRoll_StaticRegisterNativesFStructTest
{
	FScriptStruct_TurnRoll_StaticRegisterNativesFStructTest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructTest")),new UScriptStruct::TCppStructOps<FStructTest>);
	}
} ScriptStruct_TurnRoll_StaticRegisterNativesFStructTest;
	struct Z_Construct_UScriptStruct_FStructTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SomeString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SomeString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SomeNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SomeNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructTest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "StructName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructTest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructTest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_SomeString_MetaData[] = {
		{ "Category", "TestCustomData" },
		{ "ModuleRelativePath", "StructName.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_SomeString = { "SomeString", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructTest, SomeString), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_SomeString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_SomeString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_SomeNumber_MetaData[] = {
		{ "Category", "TestCustomData" },
		{ "ModuleRelativePath", "StructName.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_SomeNumber = { "SomeNumber", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructTest, SomeNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_SomeNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_SomeNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_SomeString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructTest_Statics::NewProp_SomeNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructTest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TurnRoll,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StructTest",
		sizeof(FStructTest),
		alignof(FStructTest),
		Z_Construct_UScriptStruct_FStructTest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStructTest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructTest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructTest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructTest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructTest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TurnRoll();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructTest"), sizeof(FStructTest), Get_Z_Construct_UScriptStruct_FStructTest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructTest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructTest_Hash() { return 2209613277U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
