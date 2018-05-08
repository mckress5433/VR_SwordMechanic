// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "PhantomBaseMode.generated.h"

/**
 * 
 */
UCLASS()
class PHANTOMMECHANIC_API APhantomBaseMode : public AGameMode
{
	GENERATED_BODY()
	
	//Client
	//None: Game Mode has no clientside. (Ok technically for the listen host it does but don't you dare cheat here.)

	//Server

public:
	void spawnPhantomPawn();


	
};
