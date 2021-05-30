// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SAKURASPACEMAN_Player_CPP_generated_h
#error "Player_CPP.generated.h already included, missing '#pragma once' in Player_CPP.h"
#endif
#define SAKURASPACEMAN_Player_CPP_generated_h

<<<<<<< HEAD
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_SPARSE_DATA
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS \
=======
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_SPARSE_DATA
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS \
>>>>>>> main
 \
	DECLARE_FUNCTION(execGrapple_OnOverlapEnd); \
	DECLARE_FUNCTION(execGrapple_OnBeginOverlap);


<<<<<<< HEAD
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> main
 \
	DECLARE_FUNCTION(execGrapple_OnOverlapEnd); \
	DECLARE_FUNCTION(execGrapple_OnBeginOverlap);


<<<<<<< HEAD
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS_NO_PURE_DECLS \
=======
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS_NO_PURE_DECLS \
>>>>>>> main
private: \
	static void StaticRegisterNativesAPlayer_CPP(); \
	friend struct Z_Construct_UClass_APlayer_CPP_Statics; \
public: \
	DECLARE_CLASS(APlayer_CPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(APlayer_CPP)


<<<<<<< HEAD
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS \
=======
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS \
>>>>>>> main
private: \
	static void StaticRegisterNativesAPlayer_CPP(); \
	friend struct Z_Construct_UClass_APlayer_CPP_Statics; \
public: \
	DECLARE_CLASS(APlayer_CPP, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SakuraSpaceMan"), NO_API) \
	DECLARE_SERIALIZER(APlayer_CPP)


<<<<<<< HEAD
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_STANDARD_CONSTRUCTORS \
=======
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_STANDARD_CONSTRUCTORS \
>>>>>>> main
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


<<<<<<< HEAD
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_ENHANCED_CONSTRUCTORS \
=======
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_ENHANCED_CONSTRUCTORS \
>>>>>>> main
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_CPP(APlayer_CPP&&); \
	NO_API APlayer_CPP(const APlayer_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_CPP)


<<<<<<< HEAD
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
=======
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
>>>>>>> main
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayer_CPP, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayer_CPP, Camera); } \
	FORCEINLINE static uint32 __PPO__GrappleCollisionSphere() { return STRUCT_OFFSET(APlayer_CPP, GrappleCollisionSphere); } \
	FORCEINLINE static uint32 __PPO__fFriction() { return STRUCT_OFFSET(APlayer_CPP, fFriction); } \
	FORCEINLINE static uint32 __PPO__fCameraClamp() { return STRUCT_OFFSET(APlayer_CPP, fCameraClamp); } \
	FORCEINLINE static uint32 __PPO__iMaxJumpAmount() { return STRUCT_OFFSET(APlayer_CPP, iMaxJumpAmount); } \
	FORCEINLINE static uint32 __PPO__fMaxSpeed() { return STRUCT_OFFSET(APlayer_CPP, fMaxSpeed); } \
	FORCEINLINE static uint32 __PPO__fMaxAcceleration() { return STRUCT_OFFSET(APlayer_CPP, fMaxAcceleration); } \
	FORCEINLINE static uint32 __PPO__fDashSpeed() { return STRUCT_OFFSET(APlayer_CPP, fDashSpeed); } \
	FORCEINLINE static uint32 __PPO__fDashCooldown() { return STRUCT_OFFSET(APlayer_CPP, fDashCooldown); }


<<<<<<< HEAD
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_9_PROLOG
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_SPARSE_DATA \
	SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS \
	SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS \
	SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_STANDARD_CONSTRUCTORS \
=======
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_9_PROLOG
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_SPARSE_DATA \
	Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS \
	Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS \
	Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_STANDARD_CONSTRUCTORS \
>>>>>>> main
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
#define SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_SPARSE_DATA \
	SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS_NO_PURE_DECLS \
	SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h_12_ENHANCED_CONSTRUCTORS \
=======
#define Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_SPARSE_DATA \
	Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_INCLASS_NO_PURE_DECLS \
	Test_Source_SakuraSpaceMan_Public_Player_CPP_h_12_ENHANCED_CONSTRUCTORS \
>>>>>>> main
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAKURASPACEMAN_API UClass* StaticClass<class APlayer_CPP>();

#undef CURRENT_FILE_ID
<<<<<<< HEAD
#define CURRENT_FILE_ID SSMVS_Source_SakuraSpaceMan_Public_Player_CPP_h
=======
#define CURRENT_FILE_ID Test_Source_SakuraSpaceMan_Public_Player_CPP_h
>>>>>>> main


PRAGMA_ENABLE_DEPRECATION_WARNINGS
