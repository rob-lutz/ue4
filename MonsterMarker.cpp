// Fill out your copyright notice in the Description page of Project Settings.

#include "MonsterMarker.h"

// Sets default values
UMonsterMarker::UMonsterMarker(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	//: UMarkerComponent(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	bWantsInitializeComponent = true;
	PrimaryComponentTick.bCanEverTick = true;

	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		// A helper class object we use to find target UTexture2D object in resource package
		ConstructorHelpers::FObjectFinderOptional<UTexture2D> MarkerTextureObject;

		// Icon sprite category name
		FName ID_CatagoryName;

		// Icon sprite display name
		FText NAME_DisplayName;

		FConstructorStatics()
			// Use helper class object to find the texture
			// "/Engine/EditorResources/S_Note" is resource path
			//: MarkerTextureObject(TEXT("/Game/Lemons/Procedural/Blocks/Blueprints/icons/AmmoMarker"))
			: MarkerTextureObject(TEXT("/Game/Icons/monster_icon"))
			, ID_CatagoryName(TEXT("Marker"))
			, NAME_DisplayName(NSLOCTEXT("SpriteCategory", "MonsterMarker", "MonsterMarker"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	BillboardComponent = ObjectInitializer.CreateEditorOnlyDefaultSubobject<UBillboardComponent>(this, TEXT("Billboard"), true);

	SpriteTexture = ConstructorStatics.MarkerTextureObject.Get();
	BillboardComponent->Sprite = SpriteTexture;

	// Problem spot?
	//BillboardComponent->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
	//BillboardComponent->SetupAttachment(this);
	BillboardComponent->AttachTo(this);
	
}

void UMonsterMarker::InitializeComponent()
{
}

void UMonsterMarker::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
}