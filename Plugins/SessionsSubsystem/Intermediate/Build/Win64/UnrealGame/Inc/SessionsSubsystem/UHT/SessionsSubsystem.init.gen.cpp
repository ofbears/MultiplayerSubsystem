// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionsSubsystem_init() {}
	SESSIONSSUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SessionsSubsystem_MultiplayerOnCreateSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SessionsSubsystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SessionsSubsystem()
	{
		if (!Z_Registration_Info_UPackage__Script_SessionsSubsystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SessionsSubsystem_MultiplayerOnCreateSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SessionsSubsystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x483E1199,
				0xBAD1AD6D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SessionsSubsystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SessionsSubsystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SessionsSubsystem(Z_Construct_UPackage__Script_SessionsSubsystem, TEXT("/Script/SessionsSubsystem"), Z_Registration_Info_UPackage__Script_SessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x483E1199, 0xBAD1AD6D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
