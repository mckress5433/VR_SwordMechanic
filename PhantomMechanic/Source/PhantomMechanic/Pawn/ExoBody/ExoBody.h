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
		AExoPart* ExoHead;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AExoPart* ExoTorso;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AExoArm* ExoArmLeft;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AExoArm* ExoArmRight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AExoHand* ExoHandLeft;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AExoHand* ExoHandRight;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AExoPart* ExoHip;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		AExoPart* ExoLegs;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Coupling();






protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	
	
};
