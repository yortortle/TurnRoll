// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCharacter.h"
#include "YortCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TURNROLL_API AYortCharacter : public AMainCharacter
{
	GENERATED_BODY()

public:
    virtual void BeginPlay() override;

    virtual void Action() override;
    
    FTimerHandle TreeCut;

    UFUNCTION()
    void OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    void CutTree();
};
