// Fill out your copyright notice in the Description page of Project Settings.

#include "PhantomHand.h"

APhantomHand::APhantomHand() 
{
	CoupleSphere = CreateDefaultSubobject <USphereComponent>("Couple Sphere");
}

void APhantomHand::CoupleHands_Implementation() 
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}

void APhantomHand::TeleportLoco_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}

void APhantomHand::InputAxisLoco_Implementation() 
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}



