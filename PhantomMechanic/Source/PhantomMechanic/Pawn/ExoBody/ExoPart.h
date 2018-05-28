// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pawn/BodyPart.h"
#include "Components/SphereComponent.h"
#include "ExoPart.generated.h"

/**
 * 
 */
UCLASS()
class PHANTOMMECHANIC_API AExoPart : public ABodyPart
{
	GENERATED_BODY()

public:
	AExoPart();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float Strength;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float DistRatio;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float IdleThreshold;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float CouplingThreshold;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float DecouplingThreshold;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USphereComponent* ColliderPhysicalInteraction;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void UpdateExoMaterial();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void OnExoHit();		//CONSIDER RENAMING LATER
	
	
};
