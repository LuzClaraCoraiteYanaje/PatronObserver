// Copyright Epic Games, Inc. All Rights Reserved.

#include "PatronObserverGameMode.h"
#include "PatronObserverCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "VidasObserver.h"
#include "EnemigoCocodrillo.h"

APatronObserverGameMode::APatronObserverGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void APatronObserverGameMode::BeginPlay()
{
	Super::BeginPlay();

	observer = GetWorld()->SpawnActor<AVidasObserver>(AVidasObserver::StaticClass());
	enemigococodrillo = GetWorld()->SpawnActor<AEnemigoCocodrillo>(AEnemigoCocodrillo::StaticClass());

	enemigococodrillo->EstablecerObserver(observer);
	observer->EstablecerAccion("Quitavida");
	observer->EstablecerAccion("QuitaVida");
	observer->EstablecerAccion("QuitaVida");
}

void APatronObserverGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
