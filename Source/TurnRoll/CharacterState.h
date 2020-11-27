// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FCharInfo.h"
#include "CharacterStats.h"

#include "CharacterState.generated.h"

/**
 * 
 */
UCLASS()
class TURNROLL_API UCharacterState : public UObject
{
	GENERATED_BODY()

public:

    FCharInfo* CharInfo;
    FCharacterStats* CharacterStats;

    //properties that are written to after being read from the data tables in game instance and run through character state
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Stats")
        FString Character_Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Stats")
        int Attack;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Stats")
        int Defense;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Stats")
        int CritChance;

public:
    //creates game character with information taken from character info struct
    static UCharacterState* CreateGameCharacter(FCharInfo* CharacterInfo, UObject* outer);

public:
    void BeginDestroy() override;
};
