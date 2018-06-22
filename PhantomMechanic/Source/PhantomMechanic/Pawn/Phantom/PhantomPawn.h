// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PhantomPart.h"
#include "PhantomHand.h"
#include "PhantomArm.h"
#include "../ExoBody/ExoBody.h"
#include "PhantomPawn.generated.h"

UCLASS()
class PHANTOMMECHANIC_API APhantomPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APhantomPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent *VR_Origin;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void TeleportLoco();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void InputAxisLoco();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void AnimationSync();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void PossessExoBody();




	
};
