// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "TimerManager.h"
#include "VashCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TURNROLL_API AVashCharacter : public AMainCharacter
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	virtual void Action() override;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	//	bool AttackBool;

	UFUNCTION()
	void OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	FTimerHandle PunchTimer;

	void Punch();


};
