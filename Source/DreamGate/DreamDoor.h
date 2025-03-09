// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DreamDoor.generated.h"

UCLASS()
class DREAMGATE_API ADreamDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADreamDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION()

	void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);

	// moves the door
	void MoveDoor();

private: 
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere, Category = "Movement")
	FVector MoveOffset = FVector(300.f, 0.f, 0.f);  // Move forward by 300 units

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MoveSpeed = 1.5f;  // Movement duration

	FVector StartLocation;
	FVector TargetLocation;

};
