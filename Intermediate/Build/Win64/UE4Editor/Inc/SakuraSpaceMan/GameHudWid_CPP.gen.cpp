// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/GameHudWid_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHudWid_CPP() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_UGameHudWid_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_UGameHudWid_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UGameHudWid_CPP::StaticRegisterNativesUGameHudWid_CPP()
	{
	}
	UClass* Z_Construct_UClass_UGameHudWid_CPP_NoRegister()
	{
		return UGameHudWid_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UGameHudWid_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersScore_txt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayersScore_txt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameHudWid_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHudWid_CPP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameHudWid_CPP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameHudWid_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameHudWid_CPP_Statics::NewProp_PlayersScore_txt_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameHudWid_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameHudWid_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameHudWid_CPP_Statics::NewProp_PlayersScore_txt = { "PlayersScore_txt", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameHudWid_CPP, PlayersScore_txt), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameHudWid_CPP_Statics::NewProp_PlayersScore_txt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHudWid_CPP_Statics::NewProp_PlayersScore_txt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameHudWid_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameHudWid_CPP_Statics::NewProp_PlayersScore_txt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameHudWid_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHudWid_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameHudWid_CPP_Statics::ClassParams = {
		&UGameHudWid_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameHudWid_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameHudWid_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameHudWid_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameHudWid_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameHudWid_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameHudWid_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameHudWid_CPP, 1601325251);
	template<> SAKURASPACEMAN_API UClass* StaticClass<UGameHudWid_CPP>()
	{
		return UGameHudWid_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameHudWid_CPP(Z_Construct_UClass_UGameHudWid_CPP, &UGameHudWid_CPP::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("UGameHudWid_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHudWid_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
