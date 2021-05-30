// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/CheckPoint_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckPoint_CPP() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_ACheckPoint_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_ACheckPoint_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
// End Cross Module References
	void ACheckPoint_CPP::StaticRegisterNativesACheckPoint_CPP()
	{
	}
	UClass* Z_Construct_UClass_ACheckPoint_CPP_NoRegister()
	{
		return ACheckPoint_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ACheckPoint_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACheckPoint_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckPoint_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CheckPoint_CPP.h" },
		{ "ModuleRelativePath", "Public/CheckPoint_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACheckPoint_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckPoint_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACheckPoint_CPP_Statics::ClassParams = {
		&ACheckPoint_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACheckPoint_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPoint_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACheckPoint_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACheckPoint_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACheckPoint_CPP, 1710869448);
	template<> SAKURASPACEMAN_API UClass* StaticClass<ACheckPoint_CPP>()
	{
		return ACheckPoint_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACheckPoint_CPP(Z_Construct_UClass_ACheckPoint_CPP, &ACheckPoint_CPP::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("ACheckPoint_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckPoint_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
