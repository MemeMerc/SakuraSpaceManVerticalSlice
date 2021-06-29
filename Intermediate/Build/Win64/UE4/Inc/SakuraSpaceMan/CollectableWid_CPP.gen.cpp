// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/CollectableWid_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectableWid_CPP() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_UCollectableWid_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_UCollectableWid_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UCollectableWid_CPP::StaticRegisterNativesUCollectableWid_CPP()
	{
	}
	UClass* Z_Construct_UClass_UCollectableWid_CPP_NoRegister()
	{
		return UCollectableWid_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UCollectableWid_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SakuraEnergy_Img_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SakuraEnergy_Img;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollectableWid_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectableWid_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CollectableWid_CPP.h" },
		{ "ModuleRelativePath", "Public/CollectableWid_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectableWid_CPP_Statics::NewProp_SakuraEnergy_Img_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CollectableWid_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollectableWid_CPP_Statics::NewProp_SakuraEnergy_Img = { "SakuraEnergy_Img", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollectableWid_CPP, SakuraEnergy_Img), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCollectableWid_CPP_Statics::NewProp_SakuraEnergy_Img_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableWid_CPP_Statics::NewProp_SakuraEnergy_Img_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectableWid_CPP_Statics::NewProp_fSpeed_MetaData[] = {
		{ "Category", "CollectableWid_CPP" },
		{ "ModuleRelativePath", "Public/CollectableWid_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCollectableWid_CPP_Statics::NewProp_fSpeed = { "fSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollectableWid_CPP, fSpeed), METADATA_PARAMS(Z_Construct_UClass_UCollectableWid_CPP_Statics::NewProp_fSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableWid_CPP_Statics::NewProp_fSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollectableWid_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectableWid_CPP_Statics::NewProp_SakuraEnergy_Img,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectableWid_CPP_Statics::NewProp_fSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectableWid_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectableWid_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollectableWid_CPP_Statics::ClassParams = {
		&UCollectableWid_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollectableWid_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableWid_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCollectableWid_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectableWid_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollectableWid_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollectableWid_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollectableWid_CPP, 2308160154);
	template<> SAKURASPACEMAN_API UClass* StaticClass<UCollectableWid_CPP>()
	{
		return UCollectableWid_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollectableWid_CPP(Z_Construct_UClass_UCollectableWid_CPP, &UCollectableWid_CPP::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("UCollectableWid_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectableWid_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
