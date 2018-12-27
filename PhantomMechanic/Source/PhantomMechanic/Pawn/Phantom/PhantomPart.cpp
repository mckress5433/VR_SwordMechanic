// Fill out your copyright notice in the Description page of Project Settings.

#include "PhantomPart.h"


APhantomPart::APhantomPart()
{
	SetupComponents();
}

void APhantomPart::PhantomMaterialUpdater_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented"));
}


void APhantomPart::SetupComponents()
{
	PhantomPart_Root = CreateDefaultSubobject<USceneComponent>("Phantom Part Root");

	PhantomPart_Root->SetupAttachment(RootComponent);
}