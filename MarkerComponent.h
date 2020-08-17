// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "MarkerComponent.generated.h"


UCLASS(Blueprintable, ClassGroup = (Marker), meta = (BlueprintSpawnableComponent))
class DIABLO_API UMarkerComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	//A UBillboardComponent to hold Icon sprite
	class UBillboardComponent* BillboardComponent;
	//Sprite for the Billboard Component
	class UTexture2D* SpriteTexture;

public:	
	// Sets default values for this component's properties
	UMarkerComponent(const FObjectInitializer& ObjectInitializer);

	// Begin ActorComponent interface
	virtual void OnRegister() override;

	// Called when the game starts
    //virtual void InitializeComponent() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
};
