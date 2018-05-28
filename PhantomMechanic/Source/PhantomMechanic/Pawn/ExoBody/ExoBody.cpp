// Fill out your copyright notice in the Description page of Project Settings.

#include "ExoBody.h"


// Sets default values
AExoBody::AExoBody()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	isCoupled = false;

	fuckYou = CreateDefaultSubobject<USceneComponent>("Root Component");

	ExoHead = CreateDefaultSubobject <USceneComponent>("Exo Head");

	ExoHandLeft = CreateDefaultSubobject <USceneComponent>("Exo Hand Left");
	ExoHandRight = CreateDefaultSubobject <USceneComponent>("Exo Hand Right");

	ExoArmLeft = CreateDefaultSubobject <USceneComponent>("Exo Arm Left");
	ExoArmRight = CreateDefaultSubobject <USceneComponent>("Exo Arm Right");

	ExoTorso = CreateDefaultSubobject <USceneComponent>("Exo Torso");

	ExoHip = CreateDefaultSubobject <USceneComponent>("Exo Hip");

	ExoLegs = CreateDefaultSubobject <USceneComponent>("Exo Legs");
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



void AExoBody::Coupling_Implementation() 
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}


