// Fill out your copyright notice in the Description page of Project Settings.


#include "VashCharacter.h"

void AVashCharacter::BeginPlay()
{
	Super::BeginPlay();

	//adding dynamics and setting default collision
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &AVashCharacter::OnOverLapBegin);
	HitBox->SetCollisionProfileName("NoCollision");
}

void AVashCharacter::Action()
{
	//setting a timer to delay animations in main character class
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, .75f, false);

	//setting a timer to delay NPC destruction for animation
	GetWorldTimerManager().SetTimer(PunchTimer, this, &AVashCharacter::Punch, .4f, false);
}

void AVashCharacter::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//If the other actor is an enemy it will be destroyed
	if (OtherActor->ActorHasTag("Enemy"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Enemy being destroyed"));
		OtherActor->Destroy();
	}
}

void AVashCharacter::Punch()
{
	//enabling and disabling collision
	HitBox->SetCollisionProfileName("OverlapAllDynamic");
	HitBox->SetCollisionProfileName("NoCollision");
}
