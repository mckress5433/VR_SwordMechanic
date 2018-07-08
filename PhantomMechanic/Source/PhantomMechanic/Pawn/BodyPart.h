// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "BodyPart.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PHANTOMMECHANIC_API ABodyPart : public AActor
{
	GENERATED_BODY()
	
public:	
	//Constructors

	// Sets default values for this actor's properties
	ABodyPart();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Declares

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Velocity;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) float Mass;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) USkeletalMeshComponent  *SkeletalMesh	  ;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) UBoxComponent			*ThresholdCollider;
};
