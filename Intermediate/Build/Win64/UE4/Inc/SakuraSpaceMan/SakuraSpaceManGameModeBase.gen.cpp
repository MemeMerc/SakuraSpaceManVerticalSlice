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
// End Cross Module References
	DEFINE_FUNCTION(ASakuraSpaceManGameModeBase::execGetPlayersScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayersScore();
		P_NATIVE_END;
	}
	void ASakuraSpaceManGameModeBase::StaticRegisterNativesASakuraSpaceManGameModeBase()
	{
		UClass* Class = ASakuraSpaceManGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayersScore", &ASakuraSpaceManGameModeBase::execGetPlayersScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics
	{
		struct SakuraSpaceManGameModeBase_eventGetPlayersScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SakuraSpaceManGameModeBase_eventGetPlayersScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Get the Players Score.\n" },
		{ "ModuleRelativePath", "Public/SakuraSpaceManGameModeBase.h" },
		{ "ToolTip", "Get the Players Score." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASakuraSpaceManGameModeBase, nullptr, "GetPlayersScore", nullptr, nullptr, sizeof(SakuraSpaceManGameModeBase_eventGetPlayersScore_Parms), Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASakuraSpaceManGameModeBase_NoRegister()
	{
		return ASakuraSpaceManGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHud_WidClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameHud_WidClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHud_Wid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameHud_Wid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASakuraSpaceManGameModeBase_GetPlayersScore, "GetPlayersScore" }, // 3400898554
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_Wid_MetaData[] = {
		{ "Category", "SakuraSpaceManGameModeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SakuraSpaceManGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_Wid = { "GameHud_Wid", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASakuraSpaceManGameModeBase, GameHud_Wid), Z_Construct_UClass_UGameHUD_CPP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_Wid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_Wid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_WidClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::NewProp_GameHud_Wid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASakuraSpaceManGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::ClassParams = {
		&ASakuraSpaceManGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASakuraSpaceManGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ASakuraSpaceManGameModeBase, 874518326);
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
