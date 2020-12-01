// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework//Actor.h"
#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"
#include "Components/BoxComponent.h"
#include "TimerManager.h"
#include "MyGameInstance.h"
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

    virtual void BeginPlay() override;
    // Called for forwards/backward input 

    virtual void MoveForward(float Value);

    // Called for side to side input 
    virtual void MoveRight(float Value);

    //rate chracter is turned
    void TurnAtRate(float Rate);

    /** Handler for when a touch input begins. */
    void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

    /** Handler for when a touch input stops. */
    void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

    UFUNCTION(BlueprintCallable)
    void SwitchCharacter1();

    UFUNCTION(BlueprintCallable)
    void SwitchCharacter2();

    //set up player component inputs to override
    virtual void SetupPlayerInputComponent (class UInputComponent* InputComponent) override;

public:

    virtual void Action();
    virtual void ActionReleased();
    virtual void Interact();

    //void OnOverLapBegin2(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    //the initial turn rate
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
        float BaseTurnRate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        float FloatTest;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        TSubclassOf<UUserWidget> pauseWidget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TSubclassOf<APawn> targetActor;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
        AMainCharacter* CharacterSwap1;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float axisValue;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float TestFloat;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float axisValue2;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool AttackBool;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool IsJumping;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool IsFallingCurrently;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    FTimerHandle AttackTimer;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    FTimerHandle JumpTimer;

    UPROPERTY(VisibleAnywhere)
    UBoxComponent* HitBox;

    UMyGameInstance* GameInstance;

    TSubclassOf<APawn> DetermineCharacter(int f1);

    int WhichCharacter = 0;

    void AttackTimerExecute();

    void JumpTimerExecute();



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