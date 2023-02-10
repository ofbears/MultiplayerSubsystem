// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MultiplayerSessionSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Menu.generated.h"

/**
 * 
 */
UCLASS()
class SESSIONSSUBSYSTEM_API UMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void MenuSetup();
	
protected:
	//virtual 函数重载
	virtual bool Initialize() override;
	virtual void NativeDestruct() override;
	
	void MenuTearDown();

	//按钮回调函数
	UFUNCTION()
	void HostButtonClicked();
	UFUNCTION()
	void JoinButtonClicked();
	void QuitButtonClicked();

	//自定义委托实现
	UFUNCTION()
	void OnCreateSession(bool bWasSuccessful);
private:
	UPROPERTY(meta=(BindWidget))
	UButton* HostButton;
	
	UPROPERTY(meta=(BindWidget))
	UButton* JoinButton;
	
	UPROPERTY(meta=(BindWidget))
	UButton* QuitButton;

	//在线子系统
	UMultiplayerSessionSubsystem* MultiplayerSessionSubsystem;
};
