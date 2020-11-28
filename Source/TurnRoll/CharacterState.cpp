#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, FString::Printf(TEXT(text), fstring)

// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterState.h"
#include "TurnRoll.h"

//takes in a pointer to my FCharInfo struct, which is returned from a data table
UCharacterState* UCharacterState::CreateGameCharacter(FCharInfo* CharacterInfo, UObject* outer)
{
	//creating a new main character state
	UCharacterState* MainCharacter = NewObject<UCharacterState>(outer);

	//locate assets of characters, looks through DataTables in my DataTables folder for the one containing important character stats and assigns it to characterAssets - RIGHT CLICK Data Table copy reference for path
	UDataTable* characterAssets = Cast<UDataTable>((StaticLoadObject)(UDataTable::StaticClass(), NULL, TEXT(
		"DataTable'/Game/DataTable/CharacterStats.CharacterStats'")));

	//if there are no character assets, log the error.
	if (characterAssets == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("no DB found"));
	}

	//if character assets were returned, run this.
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("db found"));
		//grabs the characters name from the CharacterInfo datatable which contains only the name and the ID
		MainCharacter->Character_Name = CharacterInfo->Character_Name;

		//Assigns a new FCharacterStats object (my struct containing most core character information to a row we find using the character info input's class id. Main use of the CharacterInfo Struct, to manage ID's.
		FCharacterStats* row = characterAssets->FindRow<FCharacterStats>(*(CharacterInfo->Class_ID), TEXT(
			"LookupCharacterClass"));

		MainCharacter->CharacterStats = row;

		//assigns the values from the data table accessed using the ID from charinfo above to the various attributes associated with characterstats
		MainCharacter->Attack = MainCharacter->CharacterStats->Attack;
		MainCharacter->Defense = MainCharacter->CharacterStats->Defense;
		MainCharacter->CritChance = MainCharacter->CharacterStats->CritChance;
		MainCharacter->Main_Move = MainCharacter->CharacterStats->MainMove;
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Loaded: %s"), *MainCharacter->Character_Name));
	return MainCharacter;
}

void UCharacterState::BeginDestroy()
{
	Super::BeginDestroy();
}

void UCharacterState::GetStats()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("My Location is: %s"), *Character_Name));
}
