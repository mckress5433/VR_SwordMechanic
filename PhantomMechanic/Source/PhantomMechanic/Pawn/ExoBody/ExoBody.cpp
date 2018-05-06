// Fill out your copyright notice in the Description page of Project Settings.

#include "ExoBody.h"


// Sets default values
AExoBody::AExoBody()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExoBody::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExoBody::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AExoBody::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

