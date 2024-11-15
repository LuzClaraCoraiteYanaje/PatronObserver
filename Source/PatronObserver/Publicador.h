// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publicador.generated.h"

UCLASS()
class PATRONOBSERVER_API APublicador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APublicador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

     TArray<AActor*>ArrayEnemigos;
public:
	virtual void Subscribirse(AActor* _subs);
	virtual void Cancelar(AActor* _subs);
	virtual void Notificar();

};
