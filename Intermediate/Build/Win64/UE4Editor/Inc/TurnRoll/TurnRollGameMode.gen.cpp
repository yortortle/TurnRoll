// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnRoll/TurnRollGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnRollGameMode() {}
// Cross Module References
	TURNROLL_API UClass* Z_Construct_UClass_ATurnRollGameMode_NoRegister();
	TURNROLL_API UClass* Z_Construct_UClass_ATurnRollGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TurnRoll();
// End Cross Module References
	void ATurnRollGameMode::StaticRegisterNativesATurnRollGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATurnRollGameMode_NoRegister()
	{
		return ATurnRollGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATurnRollGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurnRollGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnRollGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TurnRollGameMode.h" },
		{ "ModuleRelativePath", "TurnRollGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurnRollGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnRollGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurnRollGameMode_Statics::ClassParams = {
		&ATurnRollGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATurnRollGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATurnRollGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurnRollGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurnRollGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurnRollGameMode, 1462733330);
	template<> TURNROLL_API UClass* StaticClass<ATurnRollGameMode>()
	{
		return ATurnRollGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurnRollGameMode(Z_Construct_UClass_ATurnRollGameMode, &ATurnRollGameMode::StaticClass, TEXT("/Script/TurnRoll"), TEXT("ATurnRollGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnRollGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
