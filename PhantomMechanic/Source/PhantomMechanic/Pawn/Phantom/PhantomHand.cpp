// Fill out your copyright notice in the Description page of Project Settings.

#include "PhantomHand.h"



APhantomHand::APhantomHand() 
{
	SetupComponents();
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


void APhantomHand::SetupComponents()
{
	PhantomHandRoot   = CreateDefaultSubobject<USceneComponent            >("Coupling Components");
	CoupleSphere      = CreateDefaultSubobject<USphereComponent           >(TEXT("Couple Sphere"));
	WidgetInteraction = CreateDefaultSubobject<UWidgetInteractionComponent>("Widget Interaction" );
	
	PhantomHandRoot  ->SetupAttachment(PhantomPart_Root      );
	CoupleSphere     ->SetupAttachment(PhantomHandRoot       );
	WidgetInteraction->SetupAttachment(PhantomHandRoot       );
}
