# Unreal Engine 5 - スローモーション機能 (C++)

##  概要
Unreal Engine 5 でスローモーションを実装するための C++ コードです。  
プレイヤーが特定のアクションを成功させた際に、ワールド全体の時間を遅くし、  
プレイヤーのみ通常速度で動けるようにしています。

##  使用技術
- Unreal Engine 5
- C++ (UWorld::GetWorldSettings() を使用)
- Blueprint 連携 (BlueprintCallable を活用)

##  実装のポイント
1. `UWorld::GetWorldSettings()->SetTimeDilation()` を使用し、ワールド全体の時間を変更  
2. `CustomTimeDilation` を使い、プレイヤーキャラのみ通常速度で動作  
3. `BlueprintCallable` を設定し、Blueprintから呼び出せるように設計  

## 使い方
Unreal Engine 5 プロジェクトにこのコードを追加
Blueprint から TriggerSlowMotion() を呼び出す
特定のアクション成功時にスローモーションを発動！
## 注意点
SetTimeDilation(0.3f) の値は調整可能
CustomTimeDilation を適切に設定しないと、プレイヤーの動作が遅くなる

##  サンプルコード
```cpp
void AMyCharacter::TriggerSlowMotion()
{
    if (UWorld* World = GetWorld())
    {
        World->GetWorldSettings()->SetTimeDilation(0.3f); // 全体をスローモーションに
        this->CustomTimeDilation = 3.3f; // プレイヤーのみ通常速度
    }
}

