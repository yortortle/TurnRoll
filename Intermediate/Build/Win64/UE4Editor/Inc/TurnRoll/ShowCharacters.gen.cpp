// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnRoll/ShowCharacters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowCharacters() {}
// Cross Module References
	TURNROLL_API UClass* Z_Construct_UClass_UShowCharacters_NoRegister();
	TURNROLL_API UClass* Z_Construct_UClass_UShowCharacters();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TurnRoll();
// End Cross Module References
	void UShowCharacters::StaticRegisterNativesUShowCharacters()
	{
	}
	UClass* Z_Construct_UClass_UShowCharacters_NoRegister()
	{
		return UShowCharacters::StaticClass();
	}
	struct Z_Construct_UClass_UShowCharacters_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShowCharacters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowCharacters_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShowCharacters.h" },
		{ "ModuleRelativePath", "ShowCharacters.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShowCharacters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShowCharacters>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShowCharacters_Statics::ClassParams = {
		&UShowCharacters::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShowCharacters_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UShowCharacters_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShowCharacters()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShowCharacters_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShowCharacters, 4077213140);
	template<> TURNROLL_API UClass* StaticClass<UShowCharacters>()
	{
		return UShowCharacters::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShowCharacters(Z_Construct_UClass_UShowCharacters, &UShowCharacters::StaticClass, TEXT("/Script/TurnRoll"), TEXT("UShowCharacters"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShowCharacters);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
