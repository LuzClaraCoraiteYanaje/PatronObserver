// Fill out your copyright notice in the Description page of Project Settings.


#include "VidasObserver.h"

// Sets default values
AVidasObserver::AVidasObserver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVidasObserver::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVidasObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVidasObserver::EstablecerAccion(FString _mensaje)
{
	Mensaje = _mensaje;
	Notificar();
}

