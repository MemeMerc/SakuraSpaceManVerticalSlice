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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static FName NAME_AGrappleLocation_CPP_SetWidgetVisibility = FName(TEXT("SetWidgetVisibility"));
	void AGrappleLocation_CPP::SetWidgetVisibility(bool _bIsVisible)
	{
		GrappleLocation_CPP_eventSetWidgetVisibility_Parms Parms;
		Parms._bIsVisible=_bIsVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGrappleLocation_CPP_SetWidgetVisibility),&Parms);
	}
	void AGrappleLocation_CPP::StaticRegisterNativesAGrappleLocation_CPP()
	{
	}
	struct Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics
	{
		static void NewProp__bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::NewProp__bIsVisible_SetBit(void* Obj)
	{
		((GrappleLocation_CPP_eventSetWidgetVisibility_Parms*)Obj)->_bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::NewProp__bIsVisible = { "_bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrappleLocation_CPP_eventSetWidgetVisibility_Parms), &Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::NewProp__bIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::NewProp__bIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
		{ "ModuleRelativePath", "Public/GrappleLocation_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrappleLocation_CPP, nullptr, "SetWidgetVisibility", nullptr, nullptr, sizeof(GrappleLocation_CPP_eventSetWidgetVisibility_Parms), Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGrappleLocation_CPP_NoRegister()
	{
		return AGrappleLocation_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AGrappleLocation_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereGrappleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereGrappleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vScreenLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vScreenLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fScreenLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fScreenLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrappleLocation_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrappleLocation_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrappleLocation_CPP_SetWidgetVisibility, "SetWidgetVisibility" }, // 1650410039
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_vScreenLocation_MetaData[] = {
		{ "Category", "GrappleLocation_CPP" },
		{ "ModuleRelativePath", "Public/GrappleLocation_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_vScreenLocation = { "vScreenLocation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleLocation_CPP, vScreenLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_vScreenLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_vScreenLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_fScreenLength_MetaData[] = {
		{ "Category", "GrappleLocation_CPP" },
		{ "ModuleRelativePath", "Public/GrappleLocation_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_fScreenLength = { "fScreenLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrappleLocation_CPP, fScreenLength), METADATA_PARAMS(Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_fScreenLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_fScreenLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrappleLocation_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_SphereGrappleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_vScreenLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleLocation_CPP_Statics::NewProp_fScreenLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrappleLocation_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappleLocation_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrappleLocation_CPP_Statics::ClassParams = {
		&AGrappleLocation_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrappleLocation_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AGrappleLocation_CPP, 3835651262);
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
