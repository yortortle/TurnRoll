// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnRoll/WenliCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWenliCharacter() {}
// Cross Module References
	TURNROLL_API UClass* Z_Construct_UClass_AWenliCharacter_NoRegister();
	TURNROLL_API UClass* Z_Construct_UClass_AWenliCharacter();
	TURNROLL_API UClass* Z_Construct_UClass_AMainCharacter();
	UPackage* Z_Construct_UPackage__Script_TurnRoll();
// End Cross Module References
	void AWenliCharacter::StaticRegisterNativesAWenliCharacter()
	{
	}
	UClass* Z_Construct_UClass_AWenliCharacter_NoRegister()
	{
		return AWenliCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AWenliCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWenliCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMainCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWenliCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WenliCharacter.h" },
		{ "ModuleRelativePath", "WenliCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWenliCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWenliCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWenliCharacter_Statics::ClassParams = {
		&AWenliCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWenliCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWenliCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWenliCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWenliCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWenliCharacter, 293582456);
	template<> TURNROLL_API UClass* StaticClass<AWenliCharacter>()
	{
		return AWenliCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWenliCharacter(Z_Construct_UClass_AWenliCharacter, &AWenliCharacter::StaticClass, TEXT("/Script/TurnRoll"), TEXT("AWenliCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWenliCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
