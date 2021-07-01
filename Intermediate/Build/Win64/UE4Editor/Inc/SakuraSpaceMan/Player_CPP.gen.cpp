// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SakuraSpaceMan/Public/Player_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_CPP() {}
// Cross Module References
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_APlayer_CPP_NoRegister();
	SAKURASPACEMAN_API UClass* Z_Construct_UClass_APlayer_CPP();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SakuraSpaceMan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayer_CPP::execClampedVectorSizeReturn)
	{
		P_GET_STRUCT(FVector,Z_Param__Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClampedVectorSizeReturn(Z_Param__Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer_CPP::execDeactivateGlide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateGlide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer_CPP::execReturnGrapple)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->ReturnGrapple();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer_CPP::execGrapple_OnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Grapple_OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer_CPP::execGrapple_OnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Grapple_OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_APlayer_CPP_ClampedVectorSize = FName(TEXT("ClampedVectorSize"));
	void APlayer_CPP::ClampedVectorSize(FVector _Vector, float _fMin, float _fMax)
	{
		Player_CPP_eventClampedVectorSize_Parms Parms;
		Parms._Vector=_Vector;
		Parms._fMin=_fMin;
		Parms._fMax=_fMax;
		ProcessEvent(FindFunctionChecked(NAME_APlayer_CPP_ClampedVectorSize),&Parms);
	}
	static FName NAME_APlayer_CPP_JumpOffRail = FName(TEXT("JumpOffRail"));
	void APlayer_CPP::JumpOffRail()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayer_CPP_JumpOffRail),NULL);
	}
	static FName NAME_APlayer_CPP_PlayGlideSound = FName(TEXT("PlayGlideSound"));
	void APlayer_CPP::PlayGlideSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayer_CPP_PlayGlideSound),NULL);
	}
	static FName NAME_APlayer_CPP_StopGlideSound = FName(TEXT("StopGlideSound"));
	void APlayer_CPP::StopGlideSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayer_CPP_StopGlideSound),NULL);
	}
	void APlayer_CPP::StaticRegisterNativesAPlayer_CPP()
	{
		UClass* Class = APlayer_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClampedVectorSizeReturn", &APlayer_CPP::execClampedVectorSizeReturn },
			{ "DeactivateGlide", &APlayer_CPP::execDeactivateGlide },
			{ "Grapple_OnBeginOverlap", &APlayer_CPP::execGrapple_OnBeginOverlap },
			{ "Grapple_OnOverlapEnd", &APlayer_CPP::execGrapple_OnOverlapEnd },
			{ "ReturnGrapple", &APlayer_CPP::execReturnGrapple },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Vector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::NewProp__Vector = { "_Vector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventClampedVectorSize_Parms, _Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::NewProp__fMin = { "_fMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventClampedVectorSize_Parms, _fMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::NewProp__fMax = { "_fMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventClampedVectorSize_Parms, _fMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::NewProp__Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::NewProp__fMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::NewProp__fMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "ClampedVectorSize", nullptr, nullptr, sizeof(Player_CPP_eventClampedVectorSize_Parms), Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics
	{
		struct Player_CPP_eventClampedVectorSizeReturn_Parms
		{
			FVector _Vector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Vector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics::NewProp__Vector = { "_Vector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventClampedVectorSizeReturn_Parms, _Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics::NewProp__Vector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "ClampedVectorSizeReturn", nullptr, nullptr, sizeof(Player_CPP_eventClampedVectorSizeReturn_Parms), Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_DeactivateGlide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_DeactivateGlide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_DeactivateGlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "DeactivateGlide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_DeactivateGlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_DeactivateGlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_DeactivateGlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_DeactivateGlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics
	{
		struct Player_CPP_eventGrapple_OnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGrapple_OnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGrapple_OnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGrapple_OnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGrapple_OnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Player_CPP_eventGrapple_OnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Player_CPP_eventGrapple_OnBeginOverlap_Parms), &Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGrapple_OnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "Comment", "//Grapple Mechanics\n" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Grapple Mechanics" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Grapple_OnBeginOverlap", nullptr, nullptr, sizeof(Player_CPP_eventGrapple_OnBeginOverlap_Parms), Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics
	{
		struct Player_CPP_eventGrapple_OnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGrapple_OnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGrapple_OnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGrapple_OnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventGrapple_OnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "Grapple_OnOverlapEnd", nullptr, nullptr, sizeof(Player_CPP_eventGrapple_OnOverlapEnd_Parms), Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_JumpOffRail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_JumpOffRail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_JumpOffRail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "JumpOffRail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_JumpOffRail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_JumpOffRail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_JumpOffRail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_JumpOffRail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_PlayGlideSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_PlayGlideSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_PlayGlideSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "PlayGlideSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_PlayGlideSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_PlayGlideSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_PlayGlideSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_PlayGlideSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics
	{
		struct Player_CPP_eventReturnGrapple_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_CPP_eventReturnGrapple_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "ReturnGrapple", nullptr, nullptr, sizeof(Player_CPP_eventReturnGrapple_Parms), Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_ReturnGrapple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_ReturnGrapple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_CPP_StopGlideSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_CPP_StopGlideSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_CPP_StopGlideSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_CPP, nullptr, "StopGlideSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_CPP_StopGlideSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer_CPP_StopGlideSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_CPP_StopGlideSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_CPP_StopGlideSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayer_CPP_NoRegister()
	{
		return APlayer_CPP::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleCollisionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrappleCollisionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReelingIn_MetaData[];
#endif
		static void NewProp_bIsReelingIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReelingIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBoosting_MetaData[];
#endif
		static void NewProp_bIsBoosting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBoosting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGrinding_MetaData[];
#endif
		static void NewProp_bIsGrinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGrinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlideSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlideSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCameraClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCameraClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iMaxJumpAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iMaxJumpAmount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fMaxSpeed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_fMaxSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fMaxAcceleration_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fMaxAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_fMaxAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayer_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayer_CPP_ClampedVectorSize, "ClampedVectorSize" }, // 1906830695
		{ &Z_Construct_UFunction_APlayer_CPP_ClampedVectorSizeReturn, "ClampedVectorSizeReturn" }, // 16877099
		{ &Z_Construct_UFunction_APlayer_CPP_DeactivateGlide, "DeactivateGlide" }, // 3973820481
		{ &Z_Construct_UFunction_APlayer_CPP_Grapple_OnBeginOverlap, "Grapple_OnBeginOverlap" }, // 1185653497
		{ &Z_Construct_UFunction_APlayer_CPP_Grapple_OnOverlapEnd, "Grapple_OnOverlapEnd" }, // 1775607993
		{ &Z_Construct_UFunction_APlayer_CPP_JumpOffRail, "JumpOffRail" }, // 3475813588
		{ &Z_Construct_UFunction_APlayer_CPP_PlayGlideSound, "PlayGlideSound" }, // 4012870414
		{ &Z_Construct_UFunction_APlayer_CPP_ReturnGrapple, "ReturnGrapple" }, // 2298195885
		{ &Z_Construct_UFunction_APlayer_CPP_StopGlideSound, "StopGlideSound" }, // 2276192993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_CPP.h" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// Camera boom positioning the camera behind the character\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// Follow camera \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_GrappleCollisionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grapple" },
		{ "Comment", "// Grapple Range Sphere Collision\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Grapple Range Sphere Collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_GrappleCollisionSphere = { "GrappleCollisionSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, GrappleCollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_GrappleCollisionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_GrappleCollisionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsReelingIn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovement" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	void Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsReelingIn_SetBit(void* Obj)
	{
		((APlayer_CPP*)Obj)->bIsReelingIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsReelingIn = { "bIsReelingIn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayer_CPP), &Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsReelingIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsReelingIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsReelingIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsBoosting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovement" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	void Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsBoosting_SetBit(void* Obj)
	{
		((APlayer_CPP*)Obj)->bIsBoosting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsBoosting = { "bIsBoosting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayer_CPP), &Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsBoosting_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsBoosting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsBoosting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsGrinding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovement" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	void Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsGrinding_SetBit(void* Obj)
	{
		((APlayer_CPP*)Obj)->bIsGrinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsGrinding = { "bIsGrinding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayer_CPP), &Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsGrinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsGrinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsGrinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_GlideSound_MetaData[] = {
		{ "Category", "Player_CPP" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_GlideSound = { "GlideSound", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, GlideSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_GlideSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_GlideSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fFriction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovement" },
		{ "Comment", "//Ground Friction\n" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Ground Friction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fFriction = { "fFriction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, fFriction), METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fCameraClamp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovement" },
		{ "Comment", "//Ground Friction\n//Camera Turn Speed\n" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Ground Friction\nCamera Turn Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fCameraClamp = { "fCameraClamp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, fCameraClamp), METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fCameraClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fCameraClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_iMaxJumpAmount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovement" },
		{ "Comment", "//Camera Move Friction\n//Jump Amount (Double Jump)\n" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Camera Move Friction\nJump Amount (Double Jump)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_iMaxJumpAmount = { "iMaxJumpAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, iMaxJumpAmount), METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_iMaxJumpAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_iMaxJumpAmount_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxSpeed_Inner = { "fMaxSpeed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovement" },
		{ "Comment", "//Maximum Jump Count\n" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Maximum Jump Count" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxSpeed = { "fMaxSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, fMaxSpeed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxSpeed_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxAcceleration_Inner = { "fMaxAcceleration", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovement" },
		{ "Comment", "//Uses iCurrentSpeed variable to iterate through Max Speeds.\n" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Uses iCurrentSpeed variable to iterate through Max Speeds." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxAcceleration = { "fMaxAcceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, fMaxAcceleration), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxAcceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_GrappleCollisionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsReelingIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsBoosting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_bIsGrinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_GlideSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fCameraClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_iMaxJumpAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxSpeed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxAcceleration_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxAcceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_CPP_Statics::ClassParams = {
		&APlayer_CPP::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayer_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_CPP, 2967108010);
	template<> SAKURASPACEMAN_API UClass* StaticClass<APlayer_CPP>()
	{
		return APlayer_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_CPP(Z_Construct_UClass_APlayer_CPP, &APlayer_CPP::StaticClass, TEXT("/Script/SakuraSpaceMan"), TEXT("APlayer_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
