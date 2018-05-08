// Fill out your copyright notice in the Description page of Project Settings.

#include "GameManager.h"


UGameManager::UGameManager(const FObjectInitializer& ObjectInitializer)
{
	setGameMode_Implementation(EGameModeEnum::GM_Base);
}

void UGameManager::setGameMode_Implementation(EGameModeEnum selectedGameMode)
{
	UE_LOG(LogTemp, Warning, TEXT("Set game mode function called. It has not been implemented."));
}