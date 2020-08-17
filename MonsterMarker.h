// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Components/ActorComponent.h"
#include "MarkerComponent.h"
#include "MonsterMarker.generated.h"

UCLASS( ClassGroup=(Marker), meta=(BlueprintSpawnableComponent))
class DIABLO_API UMonsterMarker : public UMarkerComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UMonsterMarker(const FObjectInitializer& ObjectInitializer);

	// Called when the game starts
	virtual void InitializeComponent() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};