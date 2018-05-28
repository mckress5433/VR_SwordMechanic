// Fill out your copyright notice in the Description page of Project Settings.

#include "PhantomPawn.h"


// Sets default values
APhantomPawn::APhantomPawn()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PhantomHandLeft = CreateDefaultSubobject <APhantomHand>("Phantom Hand Left");

	PhantomHandRight = CreateDefaultSubobject <APhantomHand>("Phantom Hand Right");

	PhantomArmLeft = CreateDefaultSubobject <APhantomHand>("Phantom Arm Left");
	PhantomArmRight = CreateDefaultSubobject <APhantomHand>("Phantom Arm Right");

	PhantomHead = CreateDefaultSubobject <APhantomHand>("Phantom Head");

	PhantomTorso = CreateDefaultSubobject <APhantomHand>("Phantom Torso");

	PhantomHip = CreateDefaultSubobject <APhantomHand>("Phantom Hip");

	PhantomLegs = CreateDefaultSubobject <APhantomHand>("Phantom Legs");

	Attached_ExoBody = CreateDefaultSubobject <APhantomHand>("Attached_ExoBody");
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

