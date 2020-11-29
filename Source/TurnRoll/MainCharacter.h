// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework//Actor.h"
#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"
#include "MainCharacter.generated.h"

UCLASS(config = Game)
class AMainCharacter : public ACharacter
{
    GENERATED_BODY()
      
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true")) 
    class USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true")) 
    class UCameraComponent* FollowCamera;

public:
    AMainCharacter();

protected:
    // Called for forwards/backward input 
    void MoveForward(float Value);

    // Called for side to side input 
    void MoveRight(float Value);

    //rate chracter is turned
    void TurnAtRate(float Rate);

    /** Handler for when a touch input begins. */
    void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

    /** Handler for when a touch input stops. */
    void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

    void Interact();


    //set up player component inputs to override
    virtual void SetupPlayerInputComponent (class UInputComponent* InputComponent) override;

public:

    //the initial turn rate
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
        float BaseTurnRate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float FloatTest;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        UUserWidget* NPCWidget;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        ACharacter* CharacterSwap;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TSubclassOf<APawn> targetActor;


    //gets camera boom object
    FORCEINLINE class USpringArmComponent* GetCameraBoom() const 
    {
        return CameraBoom;
    }

    //gets follow camera object
    FORCEINLINE class UCameraComponent* GetFollowCamera() const 
    {
        return FollowCamera;
    }
};