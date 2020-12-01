// Fill out your copyright notice in the Description page of Project Settings.


#include "YortCharacter.h"

void AYortCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Yort begin play"));
	HitBox->OnComponentBeginOverlap.AddDynamic(this, &AYortCharacter::OnOverLapBegin);
	HitBox->SetCollisionProfileName("NoCollision");
}

void AYortCharacter::Action()
{
	//sets timer for attack animation which will return and stop my character from moving
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AMainCharacter::AttackTimerExecute, 1, false);

	//setting a timer so that the tree being cut is more realistic with the animation.
	GetWorldTimerManager().SetTimer(TreeCut, this, &AYortCharacter::CutTree, .2f, false);

}

void AYortCharacter::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Destroys the other actor (being a tree, nothing will happen otherwise)
	if (OtherActor->ActorHasTag("Tree"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Tree being destroyed"));
		OtherActor->Destroy();
	}
}

void AYortCharacter::CutTree()
{
	//enalbes and then disables collision so that overlap will begin
	HitBox->SetCollisionProfileName("OverlapAllDynamic");
	HitBox->SetCollisionProfileName("NoCollision");
}

