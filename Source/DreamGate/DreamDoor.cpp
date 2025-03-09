// Fill out your copyright notice in the Description page of Project Settings.


#include "DreamDoor.h"

// Sets default values
ADreamDoor::ADreamDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// create and set up doormesh 
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = DoorMesh;

}

// Called when the game starts or when spawned
void ADreamDoor::BeginPlay()
{
	Super::BeginPlay();

	// store starting location 
	StartLocation = GetActorLocation();
	TargetLocation = StartLocation + MoveOffset;

	// overlap event 
	OnActorBeginOverlap.AddDynamic(this, &ADreamDoor::OnOverlapBegin);
	
}

void ADreamDoor::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor && OtherActor != this)
	{
		MoveDoor();
	}
}

// Called every frame
void ADreamDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// interpolate door's position
	FVector NewLocation = FMath::VInterpTo(GetActorLocation(), TargetLocation, DeltaTime, MoveSpeed);
	SetActorLocation(NewLocation);

}

void ADreamDoor::MoveDoor()
{
	StartLocation = GetActorLocation();
	TargetLocation = StartLocation + MoveOffset;
}

