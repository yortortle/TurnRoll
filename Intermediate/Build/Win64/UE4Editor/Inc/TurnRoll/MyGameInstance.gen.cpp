// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnRoll/MyGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	TURNROLL_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	TURNROLL_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_TurnRoll();
	TURNROLL_API UFunction* Z_Construct_UFunction_UMyGameInstance_SetCharacters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	TURNROLL_API UClass* Z_Construct_UClass_UCharacterState_NoRegister();
// End Cross Module References
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
		UClass* Class = UMyGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCharacters", &UMyGameInstance::execSetCharacters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics
	{
		struct MyGameInstance_eventSetCharacters_Parms
		{
			int32 f1;
			int32 f2;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_f2;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_f1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::NewProp_f2 = { "f2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetCharacters_Parms, f2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::NewProp_f1 = { "f1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetCharacters_Parms, f1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::NewProp_f2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::NewProp_f1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SetCharacters", sizeof(MyGameInstance_eventSetCharacters_Parms), Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_SetCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SetCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRosterTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterRosterTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRosterOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterRosterOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractNPC_MetaData[];
#endif
		static void NewProp_InteractNPC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InteractNPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullParty_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FullParty;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FullParty_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartyMembers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyMembers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnRoll,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_SetCharacters, "SetCharacters" }, // 3465326162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CharacterRosterTwo_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CharacterRosterTwo = { "CharacterRosterTwo", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, CharacterRosterTwo), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CharacterRosterTwo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CharacterRosterTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CharacterRosterOne_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CharacterRosterOne = { "CharacterRosterOne", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, CharacterRosterOne), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CharacterRosterOne_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CharacterRosterOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Gold_MetaData[] = {
		{ "Category", "Instance Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, Gold), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Gold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Gold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractNPC_MetaData[] = {
		{ "Category", "Instance Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractNPC_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->InteractNPC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractNPC = { "InteractNPC", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractNPC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractNPC_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractNPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_FullParty_MetaData[] = {
		{ "Category", "Instance Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_FullParty = { "FullParty", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, FullParty), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_FullParty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_FullParty_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_FullParty_Inner = { "FullParty", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCharacterState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PartyMembers_MetaData[] = {
		{ "Category", "Instance Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "array to store the party members loaded" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PartyMembers = { "PartyMembers", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, PartyMembers), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PartyMembers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PartyMembers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PartyMembers_Inner = { "PartyMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCharacterState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CharacterRosterTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CharacterRosterOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Gold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_InteractNPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_FullParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_FullParty_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PartyMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PartyMembers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
		&UMyGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyGameInstance, 1368070791);
	template<> TURNROLL_API UClass* StaticClass<UMyGameInstance>()
	{
		return UMyGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/TurnRoll"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
