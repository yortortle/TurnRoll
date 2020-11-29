// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnRoll/JeffCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJeffCharacter() {}
// Cross Module References
	TURNROLL_API UClass* Z_Construct_UClass_AJeffCharacter_NoRegister();
	TURNROLL_API UClass* Z_Construct_UClass_AJeffCharacter();
	TURNROLL_API UClass* Z_Construct_UClass_AMainCharacter();
	UPackage* Z_Construct_UPackage__Script_TurnRoll();
// End Cross Module References
	void AJeffCharacter::StaticRegisterNativesAJeffCharacter()
	{
	}
	UClass* Z_Construct_UClass_AJeffCharacter_NoRegister()
	{
		return AJeffCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AJeffCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJeffCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMainCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJeffCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JeffCharacter.h" },
		{ "ModuleRelativePath", "JeffCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJeffCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJeffCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJeffCharacter_Statics::ClassParams = {
		&AJeffCharacter::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AJeffCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AJeffCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJeffCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJeffCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJeffCharacter, 61747507);
	template<> TURNROLL_API UClass* StaticClass<AJeffCharacter>()
	{
		return AJeffCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJeffCharacter(Z_Construct_UClass_AJeffCharacter, &AJeffCharacter::StaticClass, TEXT("/Script/TurnRoll"), TEXT("AJeffCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJeffCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
