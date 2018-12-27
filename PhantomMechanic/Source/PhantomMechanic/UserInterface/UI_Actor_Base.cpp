// We need to see a lawyer.

//Phantom
#include "UI_Actor_Base.h"   //Must be first

//Unreal



//Public

// Sets default values
AUI_Actor_Base::AUI_Actor_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetupComponents();

}


// Called every frame
void AUI_Actor_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


//Protected

// Called when the game starts or when spawned
void AUI_Actor_Base::BeginPlay()
{
	Super::BeginPlay();
	
}


//Private

void AUI_Actor_Base::SetupComponents()
{
	WidgetRef = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));

	WidgetRef->SetupAttachment(RootComponent);
}


