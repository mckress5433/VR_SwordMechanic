// Fill out your copyright notice in the Description page of Project Settings.

#include "BodyPart.h"


// Sets default values
ABodyPart::ABodyPart()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SkeletalMesh = CreateDefaultSubobject <USkeletalMeshComponent> ("Skeletal Mesh");

	ThresholdCollider = CreateDefaultSubobject <UBoxComponent>("Threshold Collider");

	Velocity = 0.0f;

	Mass = 0.0f;



}

// Called when the game starts or when spawned
void ABodyPart::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABodyPart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

