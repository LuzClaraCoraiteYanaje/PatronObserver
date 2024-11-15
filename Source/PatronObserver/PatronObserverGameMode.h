// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PatronObserverGameMode.generated.h"

UCLASS(minimalapi)
class APatronObserverGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatronObserverGameMode();

protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

	class AVidasObserver* observer;
	class AEnemigoCocodrillo* enemigococodrillo;
};



