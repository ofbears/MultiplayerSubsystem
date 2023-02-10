// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionSubsystem.h"

UMultiplayerSessionSubsystem::UMultiplayerSessionSubsystem()
	:OnCreateSessionCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this,&ThisClass::CreateSessionComplete)),
	OnFindSessionsCompleteDelegate(FOnFindSessionsCompleteDelegate::CreateUObject(this,&ThisClass::FindSessionComplete)),
	OnJoinSessionCompleteDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this,&ThisClass::JoinSessionComplete)),
	OnStartSessionCompleteDelegate(FOnStartSessionCompleteDelegate::CreateUObject(this,&ThisClass::StartSessionComplete)),
	OnDestroySessionCompleteDelegate(FOnDestroySessionCompleteDelegate::CreateUObject(this,&ThisClass::DestroySessionComplete))
{
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem)
	{
		OnlineSessionInterface = Subsystem->GetSessionInterface();
	}
}

void UMultiplayerSessionSubsystem::CreateSession(int32 NumPublicConnections,FString MatchType)
{
	if (!OnlineSessionInterface.IsValid())
	{
		return;
	}

	OnlineSessionInterface->AddOnCreateSessionCompleteDelegate_Handle(OnCreateSessionCompleteDelegate);
	FNamedOnlineSession* ExistingSession = OnlineSessionInterface->GetNamedSession(NAME_GameSession);
	if (ExistingSession!=nullptr)
	{
		OnlineSessionInterface->DestroySession(NAME_GameSession);
	}
	ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();

	//添加设置项
	LastOnlineSessionSettings = MakeShareable(new FOnlineSessionSettings);
	LastOnlineSessionSettings->bIsLANMatch = IOnlineSubsystem::Get()->GetSubsystemName() == "NULL" ? true : false;
	LastOnlineSessionSettings->bAllowInvites = true;
	LastOnlineSessionSettings->bShouldAdvertise = true;
	LastOnlineSessionSettings->bUsesPresence = true;
	LastOnlineSessionSettings->bAllowJoinInProgress = true;
	LastOnlineSessionSettings->bAllowJoinViaPresence = true;
	LastOnlineSessionSettings->bUseLobbiesIfAvailable = true;
	LastOnlineSessionSettings->NumPublicConnections = NumPublicConnections;
	LastOnlineSessionSettings->Set(FName(TEXT("MatchType")),MatchType,EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	
	OnlineSessionInterface->CreateSession(*LocalPlayer->GetPreferredUniqueNetId(),NAME_GameSession,*LastOnlineSessionSettings);
}

void UMultiplayerSessionSubsystem::FindSession()
{
	
}

void UMultiplayerSessionSubsystem::JoinSession()
{
	
}

void UMultiplayerSessionSubsystem::StartSession()
{
	
}

void UMultiplayerSessionSubsystem::DestroySession()
{
	
}

void UMultiplayerSessionSubsystem::CreateSessionComplete(FName SessionName,bool bWasSuccessful)
{
	if (OnlineSessionInterface)
	{
		OnlineSessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(OnCreateDelegateHandle);
	}
	MultiplayerOnCreateSessionComplete.Broadcast(bWasSuccessful);
}

void UMultiplayerSessionSubsystem::FindSessionComplete(bool bWasSuccessful)
{
	
}

void UMultiplayerSessionSubsystem::JoinSessionComplete(FName SessionName,EOnJoinSessionCompleteResult::Type Result)
{
	
}

void UMultiplayerSessionSubsystem::StartSessionComplete(FName SessionName,bool bWasSuccessful)
{
	
}

void UMultiplayerSessionSubsystem::DestroySessionComplete(FName SessionName,bool bWasSuccessful)
{
	
}
