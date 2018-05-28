// Fill out your copyright notice in the Description page of Project Settings.

#include "ExoPart.h"

AExoPart::AExoPart()
{
	Strength				= 0.0f;
	DistRatio				= 0.0f;
	IdleThreshold			= 0.0f;
	CouplingThreshold		= 0.0f;
	DecouplingThreshold		= 0.0f;

	ColliderPhysicalInteraction = CreateDefaultSubobject <USphereComponent>("Physical Interaction Collider");
	//RENAME THIS WAY TOO LONG


}

void AExoPart::UpdateExoMaterial_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}

void AExoPart::OnExoHit_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}



