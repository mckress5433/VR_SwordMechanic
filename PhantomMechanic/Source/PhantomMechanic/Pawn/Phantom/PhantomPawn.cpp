// Fill out your copyright notice in the Description page of Project Settings.

#include "PhantomPawn.h"


// Sets default values
APhantomPawn::APhantomPawn()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APhantomPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APhantomPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APhantomPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

