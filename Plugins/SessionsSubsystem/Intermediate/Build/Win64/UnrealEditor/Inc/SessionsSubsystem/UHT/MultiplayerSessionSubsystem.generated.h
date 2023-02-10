// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SESSIONSSUBSYSTEM_MultiplayerSessionSubsystem_generated_h
#error "MultiplayerSessionSubsystem.generated.h already included, missing '#pragma once' in MultiplayerSessionSubsystem.h"
#endif
#define SESSIONSSUBSYSTEM_MultiplayerSessionSubsystem_generated_h

#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_14_DELEGATE \
struct _Script_SessionsSubsystem_eventMultiplayerOnCreateSessionComplete_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSuccessful) \
{ \
	_Script_SessionsSubsystem_eventMultiplayerOnCreateSessionComplete_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	MultiplayerOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_SPARSE_DATA
#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_RPC_WRAPPERS
#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_ACCESSORS
#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SessionsSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionSubsystem)


#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SessionsSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionSubsystem)


#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiplayerSessionSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiplayerSessionSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionSubsystem(UMultiplayerSessionSubsystem&&); \
	NO_API UMultiplayerSessionSubsystem(const UMultiplayerSessionSubsystem&); \
public: \
	NO_API virtual ~UMultiplayerSessionSubsystem();


#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiplayerSessionSubsystem(UMultiplayerSessionSubsystem&&); \
	NO_API UMultiplayerSessionSubsystem(const UMultiplayerSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerSessionSubsystem) \
	NO_API virtual ~UMultiplayerSessionSubsystem();


#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_18_PROLOG
#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_SPARSE_DATA \
	FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_RPC_WRAPPERS \
	FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_ACCESSORS \
	FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_INCLASS \
	FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_SPARSE_DATA \
	FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_ACCESSORS \
	FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SESSIONSSUBSYSTEM_API UClass* StaticClass<class UMultiplayerSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MultiplayerSubsystem_Plugins_SessionsSubsystem_Source_SessionsSubsystem_Public_MultiplayerSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
