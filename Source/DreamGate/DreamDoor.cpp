// Fill out your copyright notice in the Description page of Project Settings.


#include "DreamDoor.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"

// Sets default values
ADreamDoor::ADreamDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create and set up the door mesh
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = DoorMesh;

	// Set a default mesh assign a real mesh in Unreal
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DoorMeshAsset(TEXT("/Game/StarterContent/Props/SM_Door"));
	if (DoorMeshAsset.Succeeded())
	{
		DoorMesh->SetStaticMesh(DoorMeshAsset.Object);
	}

	DoorMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	DoorMesh->SetCollisionObjectType(ECC_WorldDynamic);
	DoorMesh->SetCollisionResponseToAllChannels(ECR_Block);

	// Create the collision trigger box
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(RootComponent);
	TriggerBox->SetBoxExtent(FVector(150.f, 150.f, 100.f));
	TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TriggerBox->SetCollisionObjectType(ECC_WorldDynamic);
	TriggerBox->SetCollisionResponseToAllChannels(ECR_Overlap);
}

// Called when the game starts or when spawned
void ADreamDoor::BeginPlay()
{
	Super::BeginPlay();

	// Store the starting position
	StartLocation = GetActorLocation();
	TargetLocation = StartLocation + MoveOffset;

	// Register overlap event
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADreamDoor::OnOverlapBegin);
	
}

// Called every frame
void ADreamDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Smoothly interpolate the door's position
	FVector NewLocation = FMath::VInterpTo(GetActorLocation(), TargetLocation, DeltaTime, MoveSpeed);
	SetActorLocation(NewLocation);
}

void ADreamDoor::MoveDoor()
{
	FVector CurrentLocation = GetActorLocation();
	FVector NewLocation = CurrentLocation + FVector(300.f, 0.f, 0.f); // Move forward

	SetActorLocation(NewLocation);
}

void ADreamDoor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		MoveDoor();
	}
}