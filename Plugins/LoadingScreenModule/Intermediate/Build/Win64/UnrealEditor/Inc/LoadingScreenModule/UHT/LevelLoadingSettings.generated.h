// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelLoadingSettings.h"

#ifdef LOADINGSCREENMODULE_LevelLoadingSettings_generated_h
#error "LevelLoadingSettings.generated.h already included, missing '#pragma once' in LevelLoadingSettings.h"
#endif
#define LOADINGSCREENMODULE_LevelLoadingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLevelLoadingScreenEntry ******************************************
#define FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics; \
	LOADINGSCREENMODULE_API static class UScriptStruct* StaticStruct();


struct FLevelLoadingScreenEntry;
// ********** End ScriptStruct FLevelLoadingScreenEntry ********************************************

// ********** Begin Class ULevelLoadingSettings ****************************************************
LOADINGSCREENMODULE_API UClass* Z_Construct_UClass_ULevelLoadingSettings_NoRegister();

#define FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelLoadingSettings(); \
	friend struct Z_Construct_UClass_ULevelLoadingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOADINGSCREENMODULE_API UClass* Z_Construct_UClass_ULevelLoadingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelLoadingSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LoadingScreenModule"), Z_Construct_UClass_ULevelLoadingSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelLoadingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelLoadingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelLoadingSettings(ULevelLoadingSettings&&) = delete; \
	ULevelLoadingSettings(const ULevelLoadingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelLoadingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelLoadingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelLoadingSettings) \
	NO_API virtual ~ULevelLoadingSettings();


#define FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h_30_PROLOG
#define FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelLoadingSettings;

// ********** End Class ULevelLoadingSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
