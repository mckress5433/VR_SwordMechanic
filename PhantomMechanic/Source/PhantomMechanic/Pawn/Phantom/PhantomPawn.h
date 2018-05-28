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
class PHANTOMMECHANIC_API APhantomPawn : public ACharacter
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

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APhantomHand* PhantomHead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APhantomHand* PhantomTorso;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APhantomHand* PhantomHandLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APhantomHand* PhantomHandRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APhantomHand* PhantomArmLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APhantomHand* PhantomArmRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APhantomHand* PhantomHip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APhantomHand* PhantomLegs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Attached_ExoBody;


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void TeleportLoco();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void InputAxisLoco();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void AnimationSync();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void PossessExoBody();




	
};
