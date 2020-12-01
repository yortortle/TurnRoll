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
	virtual void ActionReleased() override;

protected:

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool CanTeleport = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool Teleporting = false;

	FVector TeleportLocation;
	bool IsActive = false;

	virtual void Tick(float DeltaTime) override;

	//reference for destroying previous actor and getting teleport location
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* TargetPointRef;

	//Read BP of particles for teleport
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> TeleportPoint;

};
