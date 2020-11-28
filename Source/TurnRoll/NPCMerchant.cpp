// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCMerchant.h"

// Sets default values
ANPCMerchant::ANPCMerchant()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPCMerchant::BeginPlay()
{
	Super::BeginPlay();
	
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

