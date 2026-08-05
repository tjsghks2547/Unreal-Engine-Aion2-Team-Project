// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelLoadingSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLevelLoadingSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
LOADINGSCREENMODULE_API UClass* Z_Construct_UClass_ULevelLoadingSettings();
LOADINGSCREENMODULE_API UClass* Z_Construct_UClass_ULevelLoadingSettings_NoRegister();
LOADINGSCREENMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelLoadingScreenEntry();
UPackage* Z_Construct_UPackage__Script_LoadingScreenModule();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLevelLoadingScreenEntry ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLevelLoadingScreenEntry;
class UScriptStruct* FLevelLoadingScreenEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLevelLoadingScreenEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLevelLoadingScreenEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelLoadingScreenEntry, (UObject*)Z_Construct_UPackage__Script_LoadingScreenModule(), TEXT("LevelLoadingScreenEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FLevelLoadingScreenEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Loading Scene \xec\xb2\x98\xeb\xa6\xac \xec\xa0\x95\xeb\xb3\xb4\xeb\xa5\xbc \xeb\x8b\xb4\xeb\x8a\x94 \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4.\n" },
#endif
		{ "ModuleRelativePath", "Public/LevelLoadingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loading Scene \xec\xb2\x98\xeb\xa6\xac \xec\xa0\x95\xeb\xb3\xb4\xeb\xa5\xbc \xeb\x8b\xb4\xeb\x8a\x94 \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "AllowedClass", "World" },
		{ "Category", "Loading Screen" },
		{ "ModuleRelativePath", "Public/LevelLoadingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[] = {
		{ "AllowedClass", "Texture" },
		{ "Category", "Loading Screen" },
		{ "ModuleRelativePath", "Public/LevelLoadingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoviePath_MetaData[] = {
		{ "Category", "Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Content/Movies \xec\x95\x88\xec\x9d\x98 \xed\x8c\x8c\xec\x9d\xbc\xeb\xaa\x85. \xed\x99\x95\xec\x9e\xa5\xec\x9e\x90 \xec\x97\x86\xec\x9d\xb4 \xec\x9e\x85\xeb\xa0\xa5: IntroLoading\n" },
#endif
		{ "ModuleRelativePath", "Public/LevelLoadingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Content/Movies \xec\x95\x88\xec\x9d\x98 \xed\x8c\x8c\xec\x9d\xbc\xeb\xaa\x85. \xed\x99\x95\xec\x9e\xa5\xec\x9e\x90 \xec\x97\x86\xec\x9d\xb4 \xec\x9e\x85\xeb\xa0\xa5: IntroLoading" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MoviePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelLoadingScreenEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelLoadingScreenEntry, Map), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelLoadingScreenEntry, BackgroundImage), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundImage_MetaData), NewProp_BackgroundImage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::NewProp_MoviePath = { "MoviePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelLoadingScreenEntry, MoviePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoviePath_MetaData), NewProp_MoviePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::NewProp_Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::NewProp_BackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::NewProp_MoviePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LoadingScreenModule,
	nullptr,
	&NewStructOps,
	"LevelLoadingScreenEntry",
	Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::PropPointers),
	sizeof(FLevelLoadingScreenEntry),
	alignof(FLevelLoadingScreenEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelLoadingScreenEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FLevelLoadingScreenEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLevelLoadingScreenEntry.InnerSingleton, Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLevelLoadingScreenEntry.InnerSingleton;
}
// ********** End ScriptStruct FLevelLoadingScreenEntry ********************************************

// ********** Begin Class ULevelLoadingSettings ****************************************************
void ULevelLoadingSettings::StaticRegisterNativesULevelLoadingSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULevelLoadingSettings;
UClass* ULevelLoadingSettings::GetPrivateStaticClass()
{
	using TClass = ULevelLoadingSettings;
	if (!Z_Registration_Info_UClass_ULevelLoadingSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LevelLoadingSettings"),
			Z_Registration_Info_UClass_ULevelLoadingSettings.InnerSingleton,
			StaticRegisterNativesULevelLoadingSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ULevelLoadingSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_ULevelLoadingSettings_NoRegister()
{
	return ULevelLoadingSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULevelLoadingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */// Loading screen settings for the game project\n" },
#endif
		{ "DisplayName", "Loading Screen" },
		{ "IncludePath", "LevelLoadingSettings.h" },
		{ "ModuleRelativePath", "Public/LevelLoadingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// Loading screen settings for the game project" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreens_MetaData[] = {
		{ "AllowedClass", "World" },
		{ "Category", "Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of soft references to map assets that should display loading screens\n// Config - Property will be saved in config file.\n// EditAnywhere - Property can be edited in any property window\n// AllowedClasses = \"World\" - Only World assets can be selected.\n" },
#endif
		{ "ModuleRelativePath", "Public/LevelLoadingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of soft references to map assets that should display loading screens\nConfig - Property will be saved in config file.\nEditAnywhere - Property can be edited in any property window\nAllowedClasses = \"World\" - Only World assets can be selected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBackgroundImage_MetaData[] = {
		{ "AllowedClass", "Texture" },
		{ "Category", "Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soft reference to the background image asset for the loading screen\n// Config - Property will be saved in config file\n// EditAnywhere - Property can be edited in any property window\n// AllowedClasses = \"Texture\" - Only Texture assets can be selected.\n" },
#endif
		{ "ModuleRelativePath", "Public/LevelLoadingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soft reference to the background image asset for the loading screen\nConfig - Property will be saved in config file\nEditAnywhere - Property can be edited in any property window\nAllowedClasses = \"Texture\" - Only Texture assets can be selected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLoadingScreenDisplayTime_MetaData[] = {
		{ "Category", "Loading Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum duration (in seconds) that the loading screen will be displayed\n// Default value of 2.0 seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/LevelLoadingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum duration (in seconds) that the loading screen will be displayed\nDefault value of 2.0 seconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingScreens_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadingScreens;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBackgroundImage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumLoadingScreenDisplayTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelLoadingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelLoadingSettings_Statics::NewProp_LoadingScreens_Inner = { "LoadingScreens", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLevelLoadingScreenEntry, METADATA_PARAMS(0, nullptr) }; // 234856428
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelLoadingSettings_Statics::NewProp_LoadingScreens = { "LoadingScreens", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelLoadingSettings, LoadingScreens), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreens_MetaData), NewProp_LoadingScreens_MetaData) }; // 234856428
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelLoadingSettings_Statics::NewProp_DefaultBackgroundImage = { "DefaultBackgroundImage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelLoadingSettings, DefaultBackgroundImage), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBackgroundImage_MetaData), NewProp_DefaultBackgroundImage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelLoadingSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime = { "MinimumLoadingScreenDisplayTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelLoadingSettings, MinimumLoadingScreenDisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumLoadingScreenDisplayTime_MetaData), NewProp_MinimumLoadingScreenDisplayTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelLoadingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoadingSettings_Statics::NewProp_LoadingScreens_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoadingSettings_Statics::NewProp_LoadingScreens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoadingSettings_Statics::NewProp_DefaultBackgroundImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelLoadingSettings_Statics::NewProp_MinimumLoadingScreenDisplayTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelLoadingSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelLoadingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LoadingScreenModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelLoadingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelLoadingSettings_Statics::ClassParams = {
	&ULevelLoadingSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULevelLoadingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelLoadingSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelLoadingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelLoadingSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelLoadingSettings()
{
	if (!Z_Registration_Info_UClass_ULevelLoadingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelLoadingSettings.OuterSingleton, Z_Construct_UClass_ULevelLoadingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelLoadingSettings.OuterSingleton;
}
ULevelLoadingSettings::ULevelLoadingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelLoadingSettings);
ULevelLoadingSettings::~ULevelLoadingSettings() {}
// ********** End Class ULevelLoadingSettings ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h__Script_LoadingScreenModule_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLevelLoadingScreenEntry::StaticStruct, Z_Construct_UScriptStruct_FLevelLoadingScreenEntry_Statics::NewStructOps, TEXT("LevelLoadingScreenEntry"), &Z_Registration_Info_UScriptStruct_FLevelLoadingScreenEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelLoadingScreenEntry), 234856428U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelLoadingSettings, ULevelLoadingSettings::StaticClass, TEXT("ULevelLoadingSettings"), &Z_Registration_Info_UClass_ULevelLoadingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelLoadingSettings), 3202638367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h__Script_LoadingScreenModule_209320529(TEXT("/Script/LoadingScreenModule"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h__Script_LoadingScreenModule_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h__Script_LoadingScreenModule_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h__Script_LoadingScreenModule_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_AION2_Plugins_LoadingScreenModule_Source_Public_LevelLoadingSettings_h__Script_LoadingScreenModule_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
