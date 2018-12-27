// Fill out your copyright notice in the Description page of Project Settings.

#include "PhantomPawn.h"

//#include "Runtime/Steam/SteamVR/Source/SteamVR/Classes/SteamVRChaperoneComponent.h"
//Public

//Public

//Constructors

// Sets default values
APhantomPawn::APhantomPawn()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetupVariables();
	SetupComponents();

	bPositionalHeadTracking = false;
}

//Functions

void APhantomPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APhantomPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//InputComponent->BindAction("ToggleTrackingSpace", IE_Pressed, this, &APhantomPawn::ToggleTrackingSpace);
}

//Blueprint natives virtual implementation. Ignore red for these they do compile.

void APhantomPawn::TeleportLoco_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}

void APhantomPawn::InputAxisLoco_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}

void APhantomPawn::AnimationSync_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}

void APhantomPawn::PossessExoBody_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Not Implemented Yet"));
}


//Protected

void APhantomPawn::BeginPlay()
{
	Super::BeginPlay();

	VR_DeviceName = UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();
}

void APhantomPawn::OnConstruction(const FTransform & Transform)
{
	Super::OnConstruction(Transform);

	MotionController_Left ->SetTrackingSource(EControllerHand::Left );
	MotionController_Right->SetTrackingSource(EControllerHand::Right);
}


//Private
void APhantomPawn::ResetOriginHMD()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void APhantomPawn::SetupComponents()
{
	PhantomPawnRoot        = CreateDefaultSubobject<USceneComponent			  >(TEXT("Phantom Pawn"          ));
	VR_Origin			   = CreateDefaultSubobject<USceneComponent			  >(TEXT("VR_Origin"			 )); 
	HMD_Camera			   = CreateDefaultSubobject<UCameraComponent		  >(TEXT("HMD_Camera"			 )); 
	MotionController_Left  = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController Left" ));
	MotionController_Right = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController Right"));
	VR_Chaperone		   = CreateDefaultSubobject<USteamVRChaperoneComponent>(TEXT("SteamVR Chaperone"	 ));

	PhantomPawnRoot       ->SetupAttachment(RootComponent  );
	VR_Origin			  ->SetupAttachment(PhantomPawnRoot);
	HMD_Camera			  ->SetupAttachment(VR_Origin	   );
	MotionController_Left ->SetupAttachment(VR_Origin	   );
	MotionController_Right->SetupAttachment(VR_Origin	   );
}

void APhantomPawn::SetupVariables()
{
	fadeInDuration		= 0.2f  ;
	fadeOutDuration		= 0.1f  ;
	DefaultPlayerHeight = 180.0f;
}

void APhantomPawn::SetupVR_Options()   //=(
{
	//IHeadMountedDisplay* HMD = (IHeadMountedDisplay*)(GEngine->HMDDevice.Get());
	//if (HMD && HMD->IsStereoEnabled())
	//{
	//	/* Disable/Enable positional movement to pin camera translation */
	//	HMD->EnablePositionalTracking(bPositionalHeadTracking);

	//	/* Remove any translation when disabling positional head tracking */
	//	if (!bPositionalHeadTracking)
	//	{
	//		HMD_Camera->SetRelativeLocation(FVector(0, 0, 0));
	//	}
	//}

	/*
		This seems to be no longer a thing. As IsStereoEnable() is no longer an avail func nor is enabling pos tracking.
	*/
}

void APhantomPawn::SetupTrackingOrigin()
{
	if (VR_DeviceName == "SteamVR" || VR_DeviceName == "OculusHMD")
	{
		// Windows (Oculus / Vive)
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
	}
	else
	{
		// PS4
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);

		HMD_Camera->AddLocalOffset(FVector(0.0f, 0.0f, DefaultPlayerHeight));

		// Force Enable. PS Move lacks thumb stick input, this option lets user adjust pawn orientation during teleport using controller Roll motion.
		bUseControllerRollToRotate = true;
	}
}

void APhantomPawn::ToggleTrackingSpace()
{

}