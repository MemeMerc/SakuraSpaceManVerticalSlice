// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SAKURASPACEMAN_Player_CPP_generated_h
#error "Player_CPP.generated.h already included, missing '#pragma once' in Player_CPP.h"
#endif
#define SAKURASPACEMAN_Player_CPP_generated_h

#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_SPARSE_DATA
#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsJumping); \
	DECLARE_FUNCTION(execReturnGrapple); \
	DECLARE_FUNCTION(execGrapple_OnOverlapEnd); \
	DECLARE_FUNCTION(execGrapple_OnBeginOverlap);


#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsJumping); \
	DECLARE_FUNCTION(execReturnGrapple); \
	DECLARE_FUNCTION(execGrapple_OnOverlapEnd); \
	DECLARE_FUNCTION(execGrapple_OnBeginOverlap);


#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_CPP(); \
	friend struct Z_Construct_UClass_APlayer_CPP_Statics; \
public: \
	DECLARE_CLASS(APlayer_CPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(APlayer_CPP)


#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_CPP(); \
	friend struct Z_Construct_UClass_APlayer_CPP_Statics; \
public: \
	DECLARE_CLASS(APlayer_CPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(APlayer_CPP)


#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_CPP(APlayer_CPP&&); \
	NO_API APlayer_CPP(const APlayer_CPP&); \
public:


#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_CPP(APlayer_CPP&&); \
	NO_API APlayer_CPP(const APlayer_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_CPP)


#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayer_CPP, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayer_CPP, Camera); } \
	FORCEINLINE static uint32 __PPO__GrappleCollisionSphere() { return STRUCT_OFFSET(APlayer_CPP, GrappleCollisionSphere); } \
	FORCEINLINE static uint32 __PPO__bIsReelingIn() { return STRUCT_OFFSET(APlayer_CPP, bIsReelingIn); } \
	FORCEINLINE static uint32 __PPO__bIsBoosting() { return STRUCT_OFFSET(APlayer_CPP, bIsBoosting); } \
	FORCEINLINE static uint32 __PPO__fFriction() { return STRUCT_OFFSET(APlayer_CPP, fFriction); } \
	FORCEINLINE static uint32 __PPO__fCameraClamp() { return STRUCT_OFFSET(APlayer_CPP, fCameraClamp); } \
	FORCEINLINE static uint32 __PPO__iMaxJumpAmount() { return STRUCT_OFFSET(APlayer_CPP, iMaxJumpAmount); } \
	FORCEINLINE static uint32 __PPO__fMaxSpeed() { return STRUCT_OFFSET(APlayer_CPP, fMaxSpeed); } \
	FORCEINLINE static uint32 __PPO__fMaxAcceleration() { return STRUCT_OFFSET(APlayer_CPP, fMaxAcceleration); } \
	FORCEINLINE static uint32 __PPO__fDashSpeed() { return STRUCT_OFFSET(APlayer_CPP, fDashSpeed); } \
	FORCEINLINE static uint32 __PPO__fDashCooldown() { return STRUCT_OFFSET(APlayer_CPP, fDashCooldown); }


#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_9_PROLOG
#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_SPARSE_DATA \
	SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS \
	SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS \
	SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_SPARSE_DATA \
	SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS_NO_PURE_DECLS \
	SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAKURASPACEMAN_API UClass* StaticClass<class APlayer_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SSM_VS_Source_SakuraSpaceMan_Public_Player_CPP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
