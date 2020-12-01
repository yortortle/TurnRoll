// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnRoll/HaydenCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHaydenCharacter() {}
// Cross Module References
	TURNROLL_API UClass* Z_Construct_UClass_AHaydenCharacter_NoRegister();
	TURNROLL_API UClass* Z_Construct_UClass_AHaydenCharacter();
	TURNROLL_API UClass* Z_Construct_UClass_AMainCharacter();
	UPackage* Z_Construct_UPackage__Script_TurnRoll();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AHaydenCharacter::StaticRegisterNativesAHaydenCharacter()
	{
	}
	UClass* Z_Construct_UClass_AHaydenCharacter_NoRegister()
	{
		return AHaydenCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHaydenCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TeleportPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Teleporting_MetaData[];
#endif
		static void NewProp_Teleporting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Teleporting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanTeleport_MetaData[];
#endif
		static void NewProp_CanTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHaydenCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMainCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHaydenCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HaydenCharacter.h" },
		{ "ModuleRelativePath", "HaydenCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_TeleportPoint_MetaData[] = {
		{ "Category", "HaydenCharacter" },
		{ "ModuleRelativePath", "HaydenCharacter.h" },
		{ "ToolTip", "Read BP of particles for teleport" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_TeleportPoint = { "TeleportPoint", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHaydenCharacter, TeleportPoint), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_TeleportPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_TeleportPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_Teleporting_MetaData[] = {
		{ "Category", "HaydenCharacter" },
		{ "ModuleRelativePath", "HaydenCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_Teleporting_SetBit(void* Obj)
	{
		((AHaydenCharacter*)Obj)->Teleporting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_Teleporting = { "Teleporting", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHaydenCharacter), &Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_Teleporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_Teleporting_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_Teleporting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_CanTeleport_MetaData[] = {
		{ "Category", "HaydenCharacter" },
		{ "ModuleRelativePath", "HaydenCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_CanTeleport_SetBit(void* Obj)
	{
		((AHaydenCharacter*)Obj)->CanTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_CanTeleport = { "CanTeleport", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHaydenCharacter), &Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_CanTeleport_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_CanTeleport_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_CanTeleport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHaydenCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_TeleportPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_Teleporting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHaydenCharacter_Statics::NewProp_CanTeleport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHaydenCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHaydenCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHaydenCharacter_Statics::ClassParams = {
		&AHaydenCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHaydenCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHaydenCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHaydenCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHaydenCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHaydenCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHaydenCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHaydenCharacter, 1245453362);
	template<> TURNROLL_API UClass* StaticClass<AHaydenCharacter>()
	{
		return AHaydenCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHaydenCharacter(Z_Construct_UClass_AHaydenCharacter, &AHaydenCharacter::StaticClass, TEXT("/Script/TurnRoll"), TEXT("AHaydenCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHaydenCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
