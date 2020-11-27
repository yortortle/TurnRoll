// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS(config = Game)
class AMainCharacter : public ACharacter
{
    GENERATED_BODY()
      
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta =
        (AllowPrivateAccess = "true")) class USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta =
        (AllowPrivateAccess = "true")) class UCameraComponent* FollowCamera;
public:
    AMainCharacter();

    /**Base turn rate, in deg/sec. Other scaling may affect final turn rate.*/
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
        float BaseTurnRate;

protected:

    /** Called for forwards/backward input */
    void MoveForward(float Value);

    /** Called for side to side input */
    void MoveRight(float Value);

    void TurnAtRate(float Rate);

    // APawn interface
    virtual void SetupPlayerInputComponent (class UInputComponent* InputComponent) override;
    // End of APawn interface
public:
    /** Returns CameraBoom subobject **/
    FORCEINLINE class USpringArmComponent* GetCameraBoom() const {
        return CameraBoom;
    }
    /** Returns FollowCamera subobject **/
    FORCEINLINE class UCameraComponent* GetFollowCamera() const {
        return FollowCamera;
    }
};