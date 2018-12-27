// We need to see a lawyer.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/WidgetComponent.h"


#include "UI_Actor_Base.generated.h"



UCLASS()
class PHANTOMMECHANIC_API AUI_Actor_Base : public AActor
{
	GENERATED_BODY()

public:	
	
	//Constructors

	// Sets default values for this actor's properties
	AUI_Actor_Base();
	
	//Functions

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UWidgetComponent *WidgetRef;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	void SetupComponents();
};
