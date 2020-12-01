// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "JeffCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TURNROLL_API AJeffCharacter : public AMainCharacter
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void Interact() override;
	virtual void Action() override;

	UFUNCTION()
	void OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	FTimerHandle PunchTimer;

	void Punch();
};
