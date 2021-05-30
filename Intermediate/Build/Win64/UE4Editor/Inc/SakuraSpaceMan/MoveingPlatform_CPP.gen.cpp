// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/MoveingPlatform_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveingPlatform_CPP() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_AMoveingPlatform_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_AMoveingPlatform_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMoveingPlatform_CPP::StaticRegisterNativesAMoveingPlatform_CPP()
	{
	}
	UClass* Z_Construct_UClass_AMoveingPlatform_CPP_NoRegister()
	{
		return AMoveingPlatform_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AMoveingPlatform_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveingPlatform_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveingPlatform_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoveingPlatform_CPP.h" },
		{ "ModuleRelativePath", "Public/MoveingPlatform_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "MoveingPlatform_CPP" },
		{ "Comment", "// Set mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveingPlatform_CPP.h" },
		{ "ToolTip", "Set mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveingPlatform_CPP, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "MoveingPlatform_CPP" },
		{ "Comment", "// Set Box Collision\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveingPlatform_CPP.h" },
		{ "ToolTip", "Set Box Collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveingPlatform_CPP, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_CollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_CollisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_LocationOne_MetaData[] = {
		{ "Category", "MoveingPlatform_CPP" },
		{ "Comment", "// Create a vector that can be moved around in the world.\n" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/MoveingPlatform_CPP.h" },
		{ "ToolTip", "Create a vector that can be moved around in the world." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_LocationOne = { "LocationOne", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveingPlatform_CPP, LocationOne), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_LocationOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_LocationOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_LocationTwo_MetaData[] = {
		{ "Category", "MoveingPlatform_CPP" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/MoveingPlatform_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_LocationTwo = { "LocationTwo", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveingPlatform_CPP, LocationTwo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_LocationTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_LocationTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "MoveingPlatform_CPP" },
		{ "Comment", "// Speed for the actor to move at.\n" },
		{ "ModuleRelativePath", "Public/MoveingPlatform_CPP.h" },
		{ "ToolTip", "Speed for the actor to move at." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoveingPlatform_CPP, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_InterpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveingPlatform_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_CollisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_LocationOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_LocationTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveingPlatform_CPP_Statics::NewProp_InterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveingPlatform_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveingPlatform_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoveingPlatform_CPP_Statics::ClassParams = {
		&AMoveingPlatform_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoveingPlatform_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveingPlatform_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveingPlatform_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoveingPlatform_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoveingPlatform_CPP, 3510872172);
	template<> SAKURASPACEMAN_API UClass* StaticClass<AMoveingPlatform_CPP>()
	{
		return AMoveingPlatform_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoveingPlatform_CPP(Z_Construct_UClass_AMoveingPlatform_CPP, &AMoveingPlatform_CPP::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("AMoveingPlatform_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveingPlatform_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
