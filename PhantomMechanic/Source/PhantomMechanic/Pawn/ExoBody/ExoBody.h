// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ExoPart.h"
#include "ExoArm.h"
#include "ExoHand.h"
#include "ExoBody.generated.h"

UCLASS()
class PHANTOMMECHANIC_API AExoBody : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AExoBody();


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool isCoupled;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent *fuckYou;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* ExoHead;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* ExoTorso;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* ExoArmLeft;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* ExoArmRight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* ExoHandLeft;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* ExoHandRight;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* ExoHip;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* ExoLegs;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Coupling();






protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	
	
};
