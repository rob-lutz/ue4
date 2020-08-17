// Fill out your copyright notice in the Description page of Project Settings.


#include "MarkerComponent.h"

// Sets default values for this component's properties
UMarkerComponent::UMarkerComponent(const FObjectInitializer& ObjectInitializer)
	//: USceneComponent(ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsInitializeComponent = true;
	PrimaryComponentTick.bCanEverTick = true;

	//IconPath = "/Game/Lemons/Procedural/Blocks/Blueprints/icons/AmmoMarker";
	//bVisualizeComponent = true;
	// ...
}


void UMarkerComponent::OnRegister()
{
	// If we need to perform a call to AttachTo, do that now
	// At this point scene component still has no any state (rendering, physics),
	// so this call will just add this component to an AttachChildren array of a the Parent component

	//AttachTo(AttachParent, AttachSocketName);
	AttachToComponent(GetAttachParent(), FAttachmentTransformRules::KeepRelativeTransform, GetAttachSocketName());
	//SetupAttachment(GetAttachParent(), GetAttachSocketName());
	Super::OnRegister();
	UE_LOG(LogTemp, Warning, TEXT("HELLO 2 LOG!"));
}


// Called every frame
void UMarkerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

