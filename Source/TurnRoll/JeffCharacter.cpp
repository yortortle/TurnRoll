// Fill out your copyright notice in the Description page of Project Settings.


#include "JeffCharacter.h"

void AJeffCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("JEFF"));

	//adding dynamic for box component and setting its collision
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &AJeffCharacter::OnOverLapBegin);
	HitBox->SetCollisionProfileName("NoCollision");
}
void AJeffCharacter::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("interactjeff"));
}

void AJeffCharacter::Action()
{
	//attack timer for maincharacter class to delay animations
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, .75f, false);

	//setting a timer to delay NPC destruction for animation
	GetWorldTimerManager().SetTimer(PunchTimer, this, &AJeffCharacter::Punch, .4f, false);
}

void AJeffCharacter::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//destroy whatever actor is hit
	OtherActor->Destroy();
}

void AJeffCharacter::Punch()
{
	//enabling and disabling collision
	HitBox->SetCollisionProfileName("OverlapAllDynamic");
	HitBox->SetCollisionProfileName("NoCollision");
}


