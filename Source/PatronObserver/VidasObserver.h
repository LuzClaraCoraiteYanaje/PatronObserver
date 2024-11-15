// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publicador.h"
#include "VidasObserver.generated.h"

UCLASS()
class PATRONOBSERVER_API AVidasObserver : public APublicador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVidasObserver();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString Mensaje;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void EstablecerAccion(FString _mensaje);
	FORCEINLINE FString GetMensaje() { return Mensaje; };
};
