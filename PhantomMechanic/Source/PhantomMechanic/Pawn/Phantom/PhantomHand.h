// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/SphereComponent.h"
#include "Components/WidgetInteractionComponent.h"

#include "Pawn/Phantom/PhantomPart.h"

#include "PhantomHand.generated.h"


/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PHANTOMMECHANIC_API APhantomHand : public APhantomPart
{
	GENERATED_BODY()

public:
	APhantomHand();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void CoupleHands();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void TeleportLoco();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void InputAxisLoco();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent *PhantomHandRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    USphereComponent *CoupleSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    UWidgetInteractionComponent *WidgetInteraction;


private:
	void SetupComponents();
};
