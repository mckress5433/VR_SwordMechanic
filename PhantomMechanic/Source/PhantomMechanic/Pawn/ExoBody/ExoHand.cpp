// Fill out your copyright notice in the Description page of Project Settings.

#include "ExoHand.h"

AExoHand::AExoHand()
{
	GrabSphere = CreateDefaultSubobject <USphereComponent>("Grab Sphere");
	AttachedActor = CreateDefaultSubobject <AActor>("Attached Actor");

}

void AExoHand::GrabActor_Implementation() 
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}


