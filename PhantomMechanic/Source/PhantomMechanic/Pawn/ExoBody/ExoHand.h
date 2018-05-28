// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pawn/ExoBody/ExoPart.h"
#include "Components/SphereComponent.h"
#include "ExoHand.generated.h"

/**
 * 
 */
UCLASS()
class PHANTOMMECHANIC_API AExoHand : public AExoPart
{
	GENERATED_BODY()

public:
	AExoHand();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USphereComponent* GrabSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AActor* AttachedActor;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FTransform HandPosition;


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void GrabActor();
};
