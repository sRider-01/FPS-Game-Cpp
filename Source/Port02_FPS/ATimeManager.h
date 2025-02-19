// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ATimeManager.generated.h"

UCLASS()
class PORT02_FPS_API AATimeManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AATimeManager();

	// スローモーションを開始する関数（ブループリントから呼び出し可能）
	UFUNCTION(BlueprintCallable, Category = "Time Control")
	void TriggerSlowMotion();

	// スローモーションを解除する関数
	UFUNCTION(BlueprintCallable, Category = "Time Control")
	void ResetTimeDilation();

	// ブループリントから呼び出せるようにする
	UFUNCTION(BlueprintCallable, Category = "Time Control")
	void SetCustomTimeDilation(AActor* TargetActor, float TimeDilationValue);

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
