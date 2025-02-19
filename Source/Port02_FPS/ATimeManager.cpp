// Fill out your copyright notice in the Description page of Project Settings.


#include "ATimeManager.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values
AATimeManager::AATimeManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// スローモーションを開始する関数
void AATimeManager::TriggerSlowMotion()
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 0.2f); // スローモーション
	UE_LOG(LogTemp, Warning, TEXT("slowmotion！")); // ログを出力
}

// スローモーションを解除し、通常速度に戻す関数
void AATimeManager::ResetTimeDilation()
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f); // 通常速度に戻す
	UE_LOG(LogTemp, Warning, TEXT("reset slowmotion！")); // ログを出力
}

// アクターの時間の流れを変更する関数
void AATimeManager::SetCustomTimeDilation(AActor* TargetActor, float TimeDilationValue)
{
	if (TargetActor)
	{
		TargetActor->CustomTimeDilation = TimeDilationValue;
	}
}



// Called when the game starts or when spawned
void AATimeManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AATimeManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

