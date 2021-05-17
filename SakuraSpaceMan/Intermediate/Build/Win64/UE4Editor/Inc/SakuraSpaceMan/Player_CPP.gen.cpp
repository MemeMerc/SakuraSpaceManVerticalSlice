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
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APlayer_CPP::StaticRegisterNativesAPlayer_CPP()
	{
	}
	UClass* Z_Construct_UClass_APlayer_CPP_NoRegister()
	{
		return APlayer_CPP::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDashSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDashSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fDashCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDashCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SakuraSpaceMan,
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
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
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
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_Camera_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fDashSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovement" },
		{ "Comment", "//Uses iCurrentSpeed variable to iterate through Max Accelerations.\n" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
		{ "ToolTip", "Uses iCurrentSpeed variable to iterate through Max Accelerations." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fDashSpeed = { "fDashSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, fDashSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fDashSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fDashSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fDashCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerMovement" },
		{ "ModuleRelativePath", "Public/Player_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fDashCooldown = { "fDashCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_CPP, fDashCooldown), METADATA_PARAMS(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fDashCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fDashCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fCameraClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_iMaxJumpAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxSpeed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxAcceleration_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fMaxAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fDashSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_CPP_Statics::NewProp_fDashCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_CPP_Statics::ClassParams = {
		&APlayer_CPP::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayer_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(APlayer_CPP, 1621719419);
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
