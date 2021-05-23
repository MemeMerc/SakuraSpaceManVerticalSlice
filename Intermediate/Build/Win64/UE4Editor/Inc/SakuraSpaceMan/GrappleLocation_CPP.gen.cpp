// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/GrappleLocation_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappleLocation_CPP() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_AGrappleLocation_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_AGrappleLocation_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AGrappleLocation_CPP::StaticRegisterNativesAGrappleLocation_CPP()
	{
	}
	UClass* Z_Construct_UClass_AGrappleLocation_CPP_NoRegister()
	{
		return AGrappleLocation_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AGrappleLocation_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereGrappleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereGrappleLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrappleLocation_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleLocation_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GrappleLocation_CPP.h" },
		{ "ModuleRelativePath", "Public/GrappleLocation_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_SphereGrappleLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grapple" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GrappleLocation_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_SphereGrappleLocation = { "SphereGrappleLocation", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleLocation_CPP, SphereGrappleLocation), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_SphereGrappleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_SphereGrappleLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrappleLocation_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_SphereGrappleLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrappleLocation_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappleLocation_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrappleLocation_CPP_Statics::ClassParams = {
		&AGrappleLocation_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrappleLocation_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleLocation_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrappleLocation_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleLocation_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrappleLocation_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrappleLocation_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrappleLocation_CPP, 1338090570);
	template<> SAKURASPACEMAN_API UClass* StaticClass<AGrappleLocation_CPP>()
	{
		return AGrappleLocation_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrappleLocation_CPP(Z_Construct_UClass_AGrappleLocation_CPP, &AGrappleLocation_CPP::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("AGrappleLocation_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappleLocation_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
