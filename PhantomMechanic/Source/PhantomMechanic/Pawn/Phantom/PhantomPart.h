// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pawn/BodyPart.h"
#include "PhantomPart.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PHANTOMMECHANIC_API APhantomPart : public ABodyPart
{
	GENERATED_BODY()

public:

	APhantomPart();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PhantomMaterialUpdater();
	
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent *PhantomPart_Root;

private:
	void SetupComponents();
};
