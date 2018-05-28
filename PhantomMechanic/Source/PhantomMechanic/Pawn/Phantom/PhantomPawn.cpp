// Fill out your copyright notice in the Description page of Project Settings.

#include "PhantomPawn.h"


// Sets default values
APhantomPawn::APhantomPawn()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	

	PhantomHandLeft = CreateDefaultSubobject <USceneComponent>("Phantom Hand Left");

	PhantomHandRight = CreateDefaultSubobject <USceneComponent>("Phantom Hand Right");

	PhantomArmLeft = CreateDefaultSubobject <USceneComponent>("Phantom Arm Left");
	PhantomArmRight = CreateDefaultSubobject <USceneComponent>("Phantom Arm Right");

	PhantomHead = CreateDefaultSubobject <USceneComponent>("Phantom Head");

	PhantomTorso = CreateDefaultSubobject <USceneComponent>("Phantom Torso");

	PhantomHip = CreateDefaultSubobject <USceneComponent>("Phantom Hip");

	PhantomLegs = CreateDefaultSubobject <USceneComponent>("Phantom Legs");

	Attached_ExoBody = CreateDefaultSubobject <USceneComponent>("Attached_ExoBody");
}

void APhantomPawn::TeleportLoco_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}

void APhantomPawn::InputAxisLoco_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}

void APhantomPawn::AnimationSync_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}

void APhantomPawn::PossessExoBody_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
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

