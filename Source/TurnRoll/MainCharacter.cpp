// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "NPCMerchant.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Animation/SkeletalMeshActor.h"
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

    //casting to game instance for a game instance object to use later on
    GameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

}

void AMainCharacter::BeginPlay()
{
    Super::BeginPlay();
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetInputMode(FInputModeGameOnly());
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
    InputComponent->BindAction("SwitchCharacter1", IE_Pressed, this, &AMainCharacter::SwitchCharacter1);
    InputComponent->BindAction("SwitchCharacter2", IE_Pressed, this, &AMainCharacter::SwitchCharacter2);
    InputComponent->BindAction("Action", IE_Pressed, this, &AMainCharacter::Action);
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
    axisValue = Value;

    //if timer is active disable movemen
    if (GetWorldTimerManager().IsTimerActive(AttackTimer))
    {
        return;
    }

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
    //axisValue = 0;
}
void AMainCharacter::MoveRight(float Value)
{
    //grabs axis value for movement animation in 3d model for characters
    axisValue2 = Value;

    if (GetWorldTimerManager().IsTimerActive(AttackTimer))
    {
        return;
    }

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
    //axisValue = 0;
}

void AMainCharacter::Interact()
{
    AttackBool = true;

    //GetWorldTimerMananger()->SetTimer(
    //GetWorldTimerManager().IsTimerActive(Clock)
    GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, 1.f, false);
}

void AMainCharacter::Action()
{
    UE_LOG(LogTemp, Warning, TEXT("Action"));
}

void AMainCharacter::SwitchCharacter1()
{
    //setting a reference to the current controller
    AController* controller = GetController();

    //runs the actor tospawn function which takes in the index value of whichever party character we want to determine switch for, compares it to the game instance roster and determines which party member needs to be switched.
    TSubclassOf<APawn> ActorToSpawn = DetermineCharacter(WhichCharacter);
    if (!(ActorToSpawn))
    {
        UE_LOG(LogTemp, Warning, TEXT("spawn actor is null"));
        return;
    }

    //grabbing both location and current rotation so I can destroy this actor before spawning a new actor
    FRotator CurrentRotation = this->GetActorRotation();
    FVector SpawnLocation = this->GetActorLocation();
    FActorSpawnParameters SpawnParams;

    //sets actor location far away so that he doesn't spawn ontop of new actora nd collide, creating displacement.
    this->SetActorLocation(FVector(0, 0, 0), false, false);

    //get current rotation of the controller to set later after the actor is spawned
    FRotator CurrentControllerRotation = controller->GetControlRotation();

    //set actor equal to the spawned actor, so we can possess it with our controller
    APawn* actor = GetWorld()->SpawnActor<APawn>(ActorToSpawn, SpawnLocation, CurrentRotation, SpawnParams);
    SpawnDefaultController();

    //checks to see if the spawned actor is null, if it is, return
    if (!(actor))
    {
        return;
    }

    //possess the spawned actor to take over
    controller->Possess(actor);

    //this normalizes the camera view to the old one so that it doesn't reset every time you spawn an actor
    controller->SetControlRotation(CurrentControllerRotation);

    //destroy original actor
    this->Destroy();

    WhichCharacter = 0;
}

void AMainCharacter::SwitchCharacter2()
{
    WhichCharacter = 1;
    SwitchCharacter1();
}

TSubclassOf<APawn> AMainCharacter::DetermineCharacter(int f1)
{
    //sets a TArray from game instance party members to check for which party member is active later.
    TArray<UCharacterState*> Party = GameInstance->PartyMembers;
    TSubclassOf<APawn> ReturnValue = nullptr;

    //a check that returns if party at required index is nullptr
    if (Party[f1] == nullptr)
    {
       return nullptr;
    }
    if (Party[f1]->Character_Name == "Duck")
    {
        return GameInstance->CharacterRosterOne;
    }
    if (Party[f1]->Character_Name == "Jeff")
    {
        return GameInstance->CharacterRosterTwo;
    }
    if (Party[f1]->Character_Name == "Yort")
    {
        return GameInstance->CharacterRosterThree;
    }
    if (Party[f1]->Character_Name == "Hayden")
    {
        return GameInstance->CharacterRosterFour;
    }
    if (Party[f1]->Character_Name == "Wenli")
    {
        return GameInstance->CharacterRosterFive;
    }
    if (Party[f1]->Character_Name == "Vash")
    {
        return GameInstance->CharacterRosterSix;
    }

    //returns nullPtr if nothing is returned
    return ReturnValue;
}

void AMainCharacter::AttackTimerExecute()
{
    UE_LOG(LogTemp, Warning, TEXT("Attack Timer Executed"));

    AttackBool = false;
}
