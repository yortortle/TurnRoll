// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"


AMainCharacter::AMainCharacter()
{
    // Set collision capsule
    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

    // set our turn rates for input
    BaseTurnRate = 45.f;

    // Don't rotate when the controller rotates.
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

   // Character moves in the direction of input...
    GetCharacterMovement()->bOrientRotationToMovement = true;

    // ...at this rotation rate
    GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);

    // Create a camera boom
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);

    // The camera follows at this distance behind the character
    CameraBoom->TargetArmLength = 300.0f;
    CameraBoom->RelativeLocation = FVector(0, 0, 0);

    // Rotate the arm based on the controller
    CameraBoom->bUsePawnControlRotation = true;

    // Create a follow camera
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

    // Camera does not rotate relative to arm
    FollowCamera->bUsePawnControlRotation = false;

    //orienting follow camera
    FollowCamera->RelativeLocation = FVector(-450, 0, 430);
    FollowCamera->RelativeRotation = FRotator(-30, 0, 0);
}

void AMainCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
    // Set up gameplay key bindings
    check(InputComponent);
    InputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);

    //mouse vs joystick / touch
    InputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
    InputComponent->BindAxis("TurnRate", this, &AMainCharacter::TurnAtRate);

    InputComponent->BindTouch(IE_Pressed, this, &AMainCharacter::TouchStarted);
    InputComponent->BindTouch(IE_Released, this, &AMainCharacter::TouchStopped);

    //action mappings
    InputComponent->BindAction("Interact", IE_Pressed, this, &AMainCharacter::Interact);
    InputComponent->BindAction("SwitchCharacter1", IE_Pressed, this, &AMainCharacter::Interact);
    InputComponent->BindAction("SwitchCharacter2", IE_Pressed, this, &AMainCharacter::Interact);

}

void AMainCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
    UE_LOG(LogTemp, Warning, TEXT("touch input"));
}

void AMainCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
    UE_LOG(LogTemp, Warning, TEXT("touch input released"));
}

void AMainCharacter::TurnAtRate(float Rate)
{
    // calculate delta for this frame from the rate information
    AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMainCharacter::MoveForward(float Value)
{
    //checks for controller and if there is an actual input passed to it
    if ((Controller != NULL) && (Value != 0.0f))
    {
        // find out which way is forward
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        // get forward vector
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direction, Value);
    }
}
void AMainCharacter::MoveRight(float Value)
{
    if ((Controller != NULL) && (Value != 0.0f))
    {
        // find out which way is right
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        // get right vector
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        // move in that direction
        AddMovementInput(Direction, Value);
    }
}

void AMainCharacter::Interact()
{
    //grabbing location of this actor for spawning new character later
    FVector SpawnLocation = this->GetActorLocation();
    FActorSpawnParameters SpawnParams;
    
    //setting a reference to the current controller
    AController* controller = GetController();

    //spawning a new actor casted to APawn for us to be able to grab later during our possesss actor
    APawn* actor =  GetWorld()->SpawnActor<APawn>(targetActor, SpawnLocation, this->GetActorRotation(), SpawnParams);
    SpawnDefaultController();

    //checks to see if the spawned actor is null, if it is, return
    if (!(actor))
    {
        return;
    }

    //possess the new actor for use (character successfully switched)
    Controller->Possess(actor);
    
    //destroys current actor
    this->Destroy();
    UE_LOG(LogTemp, Warning, TEXT("interact"));
}

void AMainCharacter::SwitchCharacter1()
{
    UE_LOG(LogTemp, Warning, TEXT("1"));
}

void AMainCharacter::SwitchCharacter2()
{
    UE_LOG(LogTemp, Warning, TEXT("2"));
}
