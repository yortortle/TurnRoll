// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnRoll/CharacterState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterState() {}
// Cross Module References
	TURNROLL_API UClass* Z_Construct_UClass_UCharacterState_NoRegister();
	TURNROLL_API UClass* Z_Construct_UClass_UCharacterState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TurnRoll();
// End Cross Module References
	void UCharacterState::StaticRegisterNativesUCharacterState()
	{
	}
	UClass* Z_Construct_UClass_UCharacterState_NoRegister()
	{
		return UCharacterState::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Main_Move_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Main_Move;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Character_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CharacterState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterState_Statics::NewProp_CritChance_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCharacterState_Statics::NewProp_CritChance = { "CritChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterState, CritChance), METADATA_PARAMS(Z_Construct_UClass_UCharacterState_Statics::NewProp_CritChance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::NewProp_CritChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterState_Statics::NewProp_Defense_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCharacterState_Statics::NewProp_Defense = { "Defense", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterState, Defense), METADATA_PARAMS(Z_Construct_UClass_UCharacterState_Statics::NewProp_Defense_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::NewProp_Defense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterState_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCharacterState_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterState, Attack), METADATA_PARAMS(Z_Construct_UClass_UCharacterState_Statics::NewProp_Attack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterState_Statics::NewProp_Main_Move_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterState_Statics::NewProp_Main_Move = { "Main_Move", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterState, Main_Move), METADATA_PARAMS(Z_Construct_UClass_UCharacterState_Statics::NewProp_Main_Move_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::NewProp_Main_Move_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterState_Statics::NewProp_Character_Name_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "CharacterState.h" },
		{ "ToolTip", "properties that are written to after being read from the data tables in game instance and run through character state" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterState_Statics::NewProp_Character_Name = { "Character_Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterState, Character_Name), METADATA_PARAMS(Z_Construct_UClass_UCharacterState_Statics::NewProp_Character_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::NewProp_Character_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterState_Statics::NewProp_CritChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterState_Statics::NewProp_Defense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterState_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterState_Statics::NewProp_Main_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterState_Statics::NewProp_Character_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterState_Statics::ClassParams = {
		&UCharacterState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCharacterState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterState, 2316250443);
	template<> TURNROLL_API UClass* StaticClass<UCharacterState>()
	{
		return UCharacterState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterState(Z_Construct_UClass_UCharacterState, &UCharacterState::StaticClass, TEXT("/Script/TurnRoll"), TEXT("UCharacterState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
