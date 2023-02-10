// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu.h"

void UMenu::MenuSetup()
{
	AddToViewport();
	bIsFocusable = true;
	SetVisibility(ESlateVisibility::Visible);
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* FirstPlayer = World->GetFirstPlayerController();
		if (FirstPlayer)
		{
			FInputModeUIOnly InputModeData;
			InputModeData.SetWidgetToFocus(TakeWidget());
			InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			FirstPlayer->SetInputMode(InputModeData);
			FirstPlayer->SetShowMouseCursor(true);
		}
	}
	UGameInstance* GameInstance = GetGameInstance();
	if (GameInstance)
	{
		MultiplayerSessionSubsystem = GameInstance->GetSubsystem<UMultiplayerSessionSubsystem>();
	}

	if (MultiplayerSessionSubsystem)
	{
		//绑定委托和回调函数
		MultiplayerSessionSubsystem->MultiplayerOnCreateSessionComplete.AddDynamic(this,&UMenu::OnCreateSession);
	}
}

bool UMenu::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}
	if (HostButton)
	{
		HostButton->OnClicked.AddDynamic(this,&ThisClass::HostButtonClicked);
	}
	if (JoinButton)
	{
		JoinButton->OnClicked.AddDynamic(this,&ThisClass::JoinButtonClicked);
	}

	//TODO 绑定QuitButton功能实现
	return true;
}

void UMenu::NativeDestruct()
{
	MenuTearDown();
	Super::NativeDestruct();
}

void UMenu::MenuTearDown()
{
	RemoveFromParent();
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (PlayerController)
		{
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(false);
		}
	}
}

void UMenu::HostButtonClicked()
{
	if (MultiplayerSessionSubsystem)
	{
		MultiplayerSessionSubsystem->CreateSession(4,FString(TEXT("FreeForAll")));
	}
}

void UMenu::JoinButtonClicked()
{
	//TODO
}

void UMenu::QuitButtonClicked()
{
	//TODO
}

void UMenu::OnCreateSession(bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			World->ServerTravel(FString(TEXT("/Game/ThirdPerson/Maps/ThirdPersonMap?listen")));
		}
	}
}
