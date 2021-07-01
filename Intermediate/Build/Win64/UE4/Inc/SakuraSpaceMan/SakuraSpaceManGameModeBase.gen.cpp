// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/SakuraSpaceManGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSakuraSpaceManGameModeBase() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_ASakuraSpaceManGameModeBase_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_ASakuraSpaceManGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_UGameHUD_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_UTimerWidget_CPP_NoRegister();
// End Cross Module References
	void ASakuraSpaceManGameModeBase::StaticRegisterNativesASakuraSpaceManGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASakuraSpaceManGameModeBase_NoRegister()
	{
		return ASakuraSpaceManGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHud_WidClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameHud_WidClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_WidClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Timer_WidClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SakuraSpaceManGameModeBase.h" },
		{ "ModuleRelativePath", "Public/SakuraSpaceManGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_WidClass_MetaData[] = {
		{ "Category", "SakuraSpaceManGameModeBase" },
		{ "ModuleRelativePath", "Public/SakuraSpaceManGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_WidClass = { "GameHud_WidClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASakuraSpaceManGameModeBase, GameHud_WidClass), Z_Construct_UClass_UGameHUD_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_WidClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_WidClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_Timer_WidClass_MetaData[] = {
		{ "Category", "SakuraSpaceManGameModeBase" },
		{ "ModuleRelativePath", "Public/SakuraSpaceManGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_Timer_WidClass = { "Timer_WidClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASakuraSpaceManGameModeBase, Timer_WidClass), Z_Construct_UClass_UTimerWidget_CPP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_Timer_WidClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_Timer_WidClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_WidClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_Timer_WidClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASakuraSpaceManGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::ClassParams = {
		&ASakuraSpaceManGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASakuraSpaceManGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASakuraSpaceManGameModeBase, 4061916574);
	template<> SAKURASPACEMAN_API UClass* StaticClass<ASakuraSpaceManGameModeBase>()
	{
		return ASakuraSpaceManGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASakuraSpaceManGameModeBase(Z_Construct_UClass_ASakuraSpaceManGameModeBase, &ASakuraSpaceManGameModeBase::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("ASakuraSpaceManGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASakuraSpaceManGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
