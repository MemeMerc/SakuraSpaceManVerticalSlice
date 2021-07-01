// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/SaveGame_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGame_CPP() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_USaveGame_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_USaveGame_CPP();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
// End Cross Module References
	void USaveGame_CPP::StaticRegisterNativesUSaveGame_CPP()
	{
	}
	UClass* Z_Construct_UClass_USaveGame_CPP_NoRegister()
	{
		return USaveGame_CPP::StaticClass();
	}
	struct Z_Construct_UClass_USaveGame_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HightestScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HightestScore;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BestTime_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BestTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BestTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGame_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGame_CPP.h" },
		{ "ModuleRelativePath", "Public/SaveGame_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_HightestScore_MetaData[] = {
		{ "Category", "SaveGame_CPP" },
		{ "ModuleRelativePath", "Public/SaveGame_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_HightestScore = { "HightestScore", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGame_CPP, HightestScore), METADATA_PARAMS(Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_HightestScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_HightestScore_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_BestTime_Inner = { "BestTime", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_BestTime_MetaData[] = {
		{ "Category", "SaveGame_CPP" },
		{ "ModuleRelativePath", "Public/SaveGame_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_BestTime = { "BestTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGame_CPP, BestTime), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_BestTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_BestTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGame_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_HightestScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_BestTime_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGame_CPP_Statics::NewProp_BestTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGame_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGame_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGame_CPP_Statics::ClassParams = {
		&USaveGame_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGame_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_CPP_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGame_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGame_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGame_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGame_CPP, 518902963);
	template<> SAKURASPACEMAN_API UClass* StaticClass<USaveGame_CPP>()
	{
		return USaveGame_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGame_CPP(Z_Construct_UClass_USaveGame_CPP, &USaveGame_CPP::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("USaveGame_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGame_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
