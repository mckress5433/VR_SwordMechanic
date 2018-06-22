// Fill out your copyright notice in the Description page of Project Settings.

#include "ExoBody.h"


// Sets default values
AExoBody::AExoBody()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	isCoupled = false;

	Exo_Origin = CreateDefaultSubobject<USceneComponent>("Exo_Origin");

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


