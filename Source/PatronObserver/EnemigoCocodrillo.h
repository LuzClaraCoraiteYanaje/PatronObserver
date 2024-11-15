// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Observacion.h"
#include "AccionEnemigos.h"
#include "EnemigoCocodrillo.generated.h"

UCLASS()
class PATRONOBSERVER_API AEnemigoCocodrillo : public AActor ,public IObservacion,public IAccionEnemigos
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigoCocodrillo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Destroyed() override;

	int32 VidasEnemigo = 3;
	class AVidasObserver* observer;
	void MallaColision(AActor* OtherActor);
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	class UStaticMeshComponent* StaticMeshComp;
	class UBoxComponent* colision;


public:	
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class USphereComponent* SphereComponent;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EstablecerObserver(class AVidasObserver* _observer) override;
	virtual void Actualizar(class APublicador* _publicador) override;
	void Actuar() override;
	void SetVidasEnemigo(int32 _vidas);
	FORCEINLINE int32 GetVidasEnemigo() { return VidasEnemigo; };
};
