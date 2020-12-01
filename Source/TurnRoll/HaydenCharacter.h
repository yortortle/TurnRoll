// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"

#include "HaydenCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TURNROLL_API AHaydenCharacter : public AMainCharacter
{
	GENERATED_BODY()
	
public:
	virtual void Action() override;

protected:

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool CanTeleport = true;

	//Read BP of particles for teleport
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> TeleportPoint;

};
