// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterState.h"
#include "Engine/GameInstance.h"

#include "MyGameInstance.generated.h"

UCLASS()
class TURNROLL_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UMyGameInstance(const class FObjectInitializer& ObjectInitializer);

public:
	//array to store the party members loaded
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Instance Data")
	TArray<UCharacterState*> PartyMembers;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Instance Data")
	TArray<UCharacterState*> FullParty;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Instance Data")
	bool InteractNPC;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Instance Data")
	float Gold = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APawn> CharacterRosterOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APawn> CharacterRosterTwo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APawn> CharacterRosterThree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APawn> CharacterRosterFour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APawn> CharacterRosterFive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APawn> CharacterRosterSix;


protected:
	bool isInitialized;

public:
	void Init();

	UFUNCTION(BluePrintCallable)
	void SetCharacters(int f1, int f2);

	//void SetCharacters(int f1, int f2);
};
