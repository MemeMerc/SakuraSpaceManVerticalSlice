// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/GameHUD_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD_CPP() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_UGameHUD_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_UGameHUD_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UGameHUD_CPP::StaticRegisterNativesUGameHUD_CPP()
	{
	}
	UClass* Z_Construct_UClass_UGameHUD_CPP_NoRegister()
	{
		return UGameHUD_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UGameHUD_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersScore_Txt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayersScore_Txt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SakuraEnergy_Img_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SakuraEnergy_Img;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHUD_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameHUD_CPP.h" },
		{ "ModuleRelativePath", "Public/GameHUD_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_CPP_Statics::NewProp_PlayersScore_Txt_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameHUD_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUD_CPP_Statics::NewProp_PlayersScore_Txt = { "PlayersScore_Txt", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHUD_CPP, PlayersScore_Txt), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUD_CPP_Statics::NewProp_PlayersScore_Txt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_CPP_Statics::NewProp_PlayersScore_Txt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHUD_CPP_Statics::NewProp_SakuraEnergy_Img_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameHUD_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHUD_CPP_Statics::NewProp_SakuraEnergy_Img = { "SakuraEnergy_Img", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHUD_CPP, SakuraEnergy_Img), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHUD_CPP_Statics::NewProp_SakuraEnergy_Img_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_CPP_Statics::NewProp_SakuraEnergy_Img_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHUD_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_CPP_Statics::NewProp_PlayersScore_Txt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHUD_CPP_Statics::NewProp_SakuraEnergy_Img,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHUD_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHUD_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHUD_CPP_Statics::ClassParams = {
		&UGameHUD_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameHUD_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHUD_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHUD_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHUD_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameHUD_CPP, 3946397326);
	template<> SAKURASPACEMAN_API UClass* StaticClass<UGameHUD_CPP>()
	{
		return UGameHUD_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHUD_CPP(Z_Construct_UClass_UGameHUD_CPP, &UGameHUD_CPP::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("UGameHUD_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHUD_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
