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

// �X���[���[�V�������J�n����֐�
void AATimeManager::TriggerSlowMotion()
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 0.2f); // �X���[���[�V����
	UE_LOG(LogTemp, Warning, TEXT("slowmotion�I")); // ���O���o��
}

// �X���[���[�V�������������A�ʏ푬�x�ɖ߂��֐�
void AATimeManager::ResetTimeDilation()
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f); // �ʏ푬�x�ɖ߂�
	UE_LOG(LogTemp, Warning, TEXT("reset slowmotion�I")); // ���O���o��
}

// �A�N�^�[�̎��Ԃ̗����ύX����֐�
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

