// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/TimerWidget_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerWidget_CPP() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_UTimerWidget_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_UTimerWidget_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
// End Cross Module References
	void UTimerWidget_CPP::StaticRegisterNativesUTimerWidget_CPP()
	{
	}
	UClass* Z_Construct_UClass_UTimerWidget_CPP_NoRegister()
	{
		return UTimerWidget_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UTimerWidget_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeMiliseconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeMiliseconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeMinites_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TimeMinites;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimerWidget_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerWidget_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TimerWidget_CPP.h" },
		{ "ModuleRelativePath", "Public/TimerWidget_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeMiliseconds_MetaData[] = {
		{ "Category", "TimerWidget_CPP" },
		{ "ModuleRelativePath", "Public/TimerWidget_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeMiliseconds = { "TimeMiliseconds", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimerWidget_CPP, TimeMiliseconds), METADATA_PARAMS(Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeMiliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeMiliseconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "TimerWidget_CPP" },
		{ "ModuleRelativePath", "Public/TimerWidget_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimerWidget_CPP, TimeSeconds), METADATA_PARAMS(Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeMinites_MetaData[] = {
		{ "Category", "TimerWidget_CPP" },
		{ "ModuleRelativePath", "Public/TimerWidget_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeMinites = { "TimeMinites", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimerWidget_CPP, TimeMinites), METADATA_PARAMS(Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeMinites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeMinites_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimerWidget_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeMiliseconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerWidget_CPP_Statics::NewProp_TimeMinites,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimerWidget_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimerWidget_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimerWidget_CPP_Statics::ClassParams = {
		&UTimerWidget_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimerWidget_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimerWidget_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTimerWidget_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimerWidget_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimerWidget_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimerWidget_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimerWidget_CPP, 156678007);
	template<> SAKURASPACEMAN_API UClass* StaticClass<UTimerWidget_CPP>()
	{
		return UTimerWidget_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimerWidget_CPP(Z_Construct_UClass_UTimerWidget_CPP, &UTimerWidget_CPP::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("UTimerWidget_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimerWidget_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
