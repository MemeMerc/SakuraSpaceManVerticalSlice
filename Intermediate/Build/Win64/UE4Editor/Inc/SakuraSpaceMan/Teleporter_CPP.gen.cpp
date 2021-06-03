// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/Teleporter_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleporter_CPP() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_ATeleporter_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_ATeleporter_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATeleporter_CPP::execActivateTeleporter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateTeleporter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATeleporter_CPP::execOnOverlapBeginTeleporterTwo)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBeginTeleporterTwo(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATeleporter_CPP::execOnOverlapBeginTeleporterOne)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBeginTeleporterOne(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ATeleporter_CPP::StaticRegisterNativesATeleporter_CPP()
	{
		UClass* Class = ATeleporter_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateTeleporter", &ATeleporter_CPP::execActivateTeleporter },
			{ "OnOverlapBeginTeleporterOne", &ATeleporter_CPP::execOnOverlapBeginTeleporterOne },
			{ "OnOverlapBeginTeleporterTwo", &ATeleporter_CPP::execOnOverlapBeginTeleporterTwo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeleporter_CPP_ActivateTeleporter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporter_CPP_ActivateTeleporter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Set bCanTeleport to trues\n" },
		{ "ModuleRelativePath", "Public/Teleporter_CPP.h" },
		{ "ToolTip", "Set bCanTeleport to trues" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporter_CPP_ActivateTeleporter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporter_CPP, nullptr, "ActivateTeleporter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeleporter_CPP_ActivateTeleporter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_ActivateTeleporter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeleporter_CPP_ActivateTeleporter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATeleporter_CPP_ActivateTeleporter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics
	{
		struct Teleporter_CPP_eventOnOverlapBeginTeleporterOne_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Teleporter_CPP_eventOnOverlapBeginTeleporterOne_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Teleporter_CPP_eventOnOverlapBeginTeleporterOne_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Teleporter_CPP_eventOnOverlapBeginTeleporterOne_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Teleporter_CPP_eventOnOverlapBeginTeleporterOne_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Teleporter_CPP_eventOnOverlapBeginTeleporterOne_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Teleporter_CPP_eventOnOverlapBeginTeleporterOne_Parms), &Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Teleporter_CPP_eventOnOverlapBeginTeleporterOne_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Collison function for teleporter one.\n" },
		{ "ModuleRelativePath", "Public/Teleporter_CPP.h" },
		{ "ToolTip", "Collison function for teleporter one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporter_CPP, nullptr, "OnOverlapBeginTeleporterOne", nullptr, nullptr, sizeof(Teleporter_CPP_eventOnOverlapBeginTeleporterOne_Parms), Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics
	{
		struct Teleporter_CPP_eventOnOverlapBeginTeleporterTwo_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Teleporter_CPP_eventOnOverlapBeginTeleporterTwo_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Teleporter_CPP_eventOnOverlapBeginTeleporterTwo_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Teleporter_CPP_eventOnOverlapBeginTeleporterTwo_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Teleporter_CPP_eventOnOverlapBeginTeleporterTwo_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Teleporter_CPP_eventOnOverlapBeginTeleporterTwo_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Teleporter_CPP_eventOnOverlapBeginTeleporterTwo_Parms), &Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Teleporter_CPP_eventOnOverlapBeginTeleporterTwo_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Collison function for teleporter Two.\n" },
		{ "ModuleRelativePath", "Public/Teleporter_CPP.h" },
		{ "ToolTip", "Collison function for teleporter Two." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporter_CPP, nullptr, "OnOverlapBeginTeleporterTwo", nullptr, nullptr, sizeof(Teleporter_CPP_eventOnOverlapBeginTeleporterTwo_Parms), Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATeleporter_CPP_NoRegister()
	{
		return ATeleporter_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ATeleporter_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleporterOneMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleporterOneMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleporterTwoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleporterTwoMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleporterOneCollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleporterOneCollisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleporterTwoCollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleporterTwoCollisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeleporter_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeleporter_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeleporter_CPP_ActivateTeleporter, "ActivateTeleporter" }, // 970870404
		{ &Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterOne, "OnOverlapBeginTeleporterOne" }, // 1327866658
		{ &Z_Construct_UFunction_ATeleporter_CPP_OnOverlapBeginTeleporterTwo, "OnOverlapBeginTeleporterTwo" }, // 86177476
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Teleporter_CPP.h" },
		{ "ModuleRelativePath", "Public/Teleporter_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterOneMesh_MetaData[] = {
		{ "Category", "Teleporter_CPP" },
		{ "Comment", "// Set mesh for first Teleporter.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Teleporter_CPP.h" },
		{ "ToolTip", "Set mesh for first Teleporter." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterOneMesh = { "TeleporterOneMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporter_CPP, TeleporterOneMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterOneMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterOneMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterTwoMesh_MetaData[] = {
		{ "Category", "Teleporter_CPP" },
		{ "Comment", "// Set mesh for second Teleporter.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Teleporter_CPP.h" },
		{ "ToolTip", "Set mesh for second Teleporter." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterTwoMesh = { "TeleporterTwoMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporter_CPP, TeleporterTwoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterTwoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterTwoMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterOneCollisionBox_MetaData[] = {
		{ "Category", "Teleporter_CPP" },
		{ "Comment", "// Set Box Collision of first mesh.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Teleporter_CPP.h" },
		{ "ToolTip", "Set Box Collision of first mesh." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterOneCollisionBox = { "TeleporterOneCollisionBox", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporter_CPP, TeleporterOneCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterOneCollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterOneCollisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterTwoCollisionBox_MetaData[] = {
		{ "Category", "Teleporter_CPP" },
		{ "Comment", "// Set Box Collision of sceond mesh.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Teleporter_CPP.h" },
		{ "ToolTip", "Set Box Collision of sceond mesh." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterTwoCollisionBox = { "TeleporterTwoCollisionBox", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporter_CPP, TeleporterTwoCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterTwoCollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterTwoCollisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_fDelayTime_MetaData[] = {
		{ "Category", "Teleporter_CPP" },
		{ "Comment", "// Delay between teleports.\n" },
		{ "ModuleRelativePath", "Public/Teleporter_CPP.h" },
		{ "ToolTip", "Delay between teleports." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_fDelayTime = { "fDelayTime", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporter_CPP, fDelayTime), METADATA_PARAMS(Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_fDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_fDelayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleporter_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterOneMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterTwoMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterOneCollisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_TeleporterTwoCollisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_CPP_Statics::NewProp_fDelayTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeleporter_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleporter_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeleporter_CPP_Statics::ClassParams = {
		&ATeleporter_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATeleporter_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeleporter_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeleporter_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeleporter_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeleporter_CPP, 50988319);
	template<> SAKURASPACEMAN_API UClass* StaticClass<ATeleporter_CPP>()
	{
		return ATeleporter_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeleporter_CPP(Z_Construct_UClass_ATeleporter_CPP, &ATeleporter_CPP::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("ATeleporter_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleporter_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
