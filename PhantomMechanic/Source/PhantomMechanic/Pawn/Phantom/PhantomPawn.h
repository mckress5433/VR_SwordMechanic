// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//Move headers to implementation during optimization stage of this project.

//Unreal
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "HeadMountedDisplay.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "MotionControllerComponent.h"
#include "SteamVRChaperoneComponent.h"

//Phantom
#include "../ExoBody/ExoBody.h"
#include "PhantomPart.h"
#include "PhantomHand.h"
#include "PhantomArm.h"
#include "PhantomPawn.generated.h"


//Enum
UENUM(BlueprintType)   //Move this to Body Part when you can.
enum class ELimbSide : uint8
{
	Left  UMETA(DisplayName = "Left Side" ),
	Right UMETA(DisplayName = "Right Side")
};


//Phantom Class
UCLASS() 
class PHANTOMMECHANIC_API APhantomPawn : public ACharacter
{
	GENERATED_BODY()

public:
	/* 
	Sets default values for this character's properties 
	*/
	APhantomPawn(); 


protected:

	//Functions

	virtual void OnConstruction(const FTransform & Transform) override;

	/*
	Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

public:	

	/* 
	Called every frame
	*/
	virtual void Tick(float DeltaTime) override;


	/*
	Called to bind functionality to input
	*/
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable)

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void TeleportLoco  ();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void InputAxisLoco ();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void AnimationSync ();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void PossessExoBody();
	
	//Declares

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool NoVR_Mode;   //Move to Controller later.

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float fadeInDuration		;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float fadeOutDuration	;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float DefaultPlayerHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		APhantomArm *PhantomArm_Left ;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		APhantomArm *PhantomArm_Right;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		APhantomHand *PhantomHand_Left ;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		APhantomHand *PhantomHand_Right;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UCameraComponent *HMD_Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent  *VR_Origin;
	

	//UPROPERTY(EditDefaultsOnly, Category = "VR")

	UPROPERTY(EditDefaultsOnly, Category = "VR")
		bool bPositionalHeadTracking   ;   //Not sure if possible to use just yet.
	UPROPERTY(EditDefaultsOnly, Category = "VR")
		bool bUseControllerRollToRotate;


	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "VR")
	
	//Maybe put these in phantom hand instead?

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "VR")
		UMotionControllerComponent *MotionController_Left ;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "VR")
		UMotionControllerComponent *MotionController_Right;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "VR")
		USteamVRChaperoneComponent *VR_Chaperone;


private:
	//Functions

	void ResetOriginHMD		();
	void SetupComponents	();
	void SetupVariables		();
	void SetupVR_Options	();
	void SetupTrackingOrigin();
	void ToggleTrackingSpace();

	//Declares

	FName VR_DeviceName;
};