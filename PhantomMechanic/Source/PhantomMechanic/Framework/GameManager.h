// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameManager.generated.h"

/**
 * 
 */
UENUM(BlueprintType)   //Must be included.
enum class EGameModeEnum : uint8
{
	GM_Base  UMETA(DisplayName = "Base Mode" ),
	GM_Debug UMETA(DisplayName = "Debug Mode"),
	GM_Demo  UMETA(DisplayName = "Demo Mode" )
};

UCLASS()
class PHANTOMMECHANIC_API UGameManager : public UGameInstance
{
	GENERATED_BODY()

public:
	UGameManager(const FObjectInitializer& ObjectInitializer);

	EGameModeEnum GameModeSelected;

	bool UseLan;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void setGameMode(EGameModeEnum selectedGameMode);
};