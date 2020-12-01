// Fill out your copyright notice in the Description page of Project Settings.


#include "TeleportTarget.h"

// Sets default values
ATeleportTarget::ATeleportTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Default Scene"));
	//DefaultSceneRoot->SetupAttachment(RootComponent);
	//DefaultSceneRoot->

	TeleportParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Teleport Particles"));
	TeleportParticles->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATeleportTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATeleportTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

