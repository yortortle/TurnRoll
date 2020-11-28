// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCMerchant.h"

// Sets default values
ANPCMerchant::ANPCMerchant()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Overlap box"));
	BoxCollision->AttachTo(RootComponent);
}

// Called when the game starts or when spawned
void ANPCMerchant::BeginPlay()
{
	Super::BeginPlay();

	GameInstance = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	MainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	//GetGameInstance().GetPlayerContro
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ANPCMerchant::OnOverLapBegins);
    BoxCollision->OnComponentEndOverlap.AddDynamic(this, &ANPCMerchant::OnOverLapEnd);

	UE_LOG(LogTemp, Warning, TEXT("NPC Begin Play"));
}

// Called every frame
void ANPCMerchant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPCMerchant::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ANPCMerchant::OnOverLapBegins(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GameInstance->InteractNPC = true;

	//UE_LOG(LogTemp, Warning, TEXT("Overlap Begins2"));
	UE_LOG(LogTemp, Warning, TEXT("Overlap Begins3"));
}

void ANPCMerchant::OnOverLapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GameInstance->InteractNPC = false;
	UE_LOG(LogTemp, Warning, TEXT("Overlap Ends"));
}

