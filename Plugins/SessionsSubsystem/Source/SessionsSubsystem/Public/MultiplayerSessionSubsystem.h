// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"
#include "MultiplayerSessionSubsystem.generated.h"


//自定义委托
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnCreateSessionComplete,bool,bWasSuccessful)
/**
 * 
 */
UCLASS()
class SESSIONSSUBSYSTEM_API UMultiplayerSessionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:

	UMultiplayerSessionSubsystem();
	
	//会话类API
	void CreateSession(int32 NumPublicConnections,FString MatchType);
	void FindSession();
	void JoinSession();
	void StartSession();
	void DestroySession();

public:
	//自定义委托
	FMultiplayerOnCreateSessionComplete MultiplayerOnCreateSessionComplete;
	
private:
	//会话接口
	TSharedPtr<IOnlineSession> OnlineSessionInterface;

	//会话设置保存项
	TSharedPtr<FOnlineSessionSettings> LastOnlineSessionSettings;
	

	//委托和委托句柄
	FOnCreateSessionCompleteDelegate OnCreateSessionCompleteDelegate;
	FDelegateHandle OnCreateDelegateHandle;

	FOnFindSessionsCompleteDelegate OnFindSessionsCompleteDelegate;
	FDelegateHandle OnFindDelegateHandle;

	FOnJoinSessionCompleteDelegate OnJoinSessionCompleteDelegate;
	FDelegateHandle OnJoinDelegateHandle;

	FOnStartSessionCompleteDelegate OnStartSessionCompleteDelegate;
	FDelegateHandle OnStartDelegateHandle;

	FOnDestroySessionCompleteDelegate OnDestroySessionCompleteDelegate;
	FDelegateHandle OnDestroyDelegateHandle;
protected:
	//委托回调函数
	void CreateSessionComplete(FName SessionName,bool bWasSuccessful);
	void FindSessionComplete(bool bWasSuccessful);
	void JoinSessionComplete(FName SessionName,EOnJoinSessionCompleteResult::Type Result);
	void StartSessionComplete(FName SessionName,bool bWasSuccessful);
	void DestroySessionComplete(FName SessionName,bool bWasSuccessful);
};
