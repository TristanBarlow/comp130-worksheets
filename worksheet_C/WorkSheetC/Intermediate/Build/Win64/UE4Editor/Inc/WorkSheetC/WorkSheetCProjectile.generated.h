// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef WORKSHEETC_WorkSheetCProjectile_generated_h
#error "WorkSheetCProjectile.generated.h already included, missing '#pragma once' in WorkSheetCProjectile.h"
#endif
#define WORKSHEETC_WorkSheetCProjectile_generated_h

#define WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetonate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Detonate(); \
		P_NATIVE_END; \
	}


#define WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetonate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Detonate(); \
		P_NATIVE_END; \
	}


#define WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAWorkSheetCProjectile(); \
	friend WORKSHEETC_API class UClass* Z_Construct_UClass_AWorkSheetCProjectile(); \
	public: \
	DECLARE_CLASS(AWorkSheetCProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WorkSheetC"), NO_API) \
	DECLARE_SERIALIZER(AWorkSheetCProjectile) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAWorkSheetCProjectile(); \
	friend WORKSHEETC_API class UClass* Z_Construct_UClass_AWorkSheetCProjectile(); \
	public: \
	DECLARE_CLASS(AWorkSheetCProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/WorkSheetC"), NO_API) \
	DECLARE_SERIALIZER(AWorkSheetCProjectile) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorkSheetCProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorkSheetCProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorkSheetCProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorkSheetCProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorkSheetCProjectile(AWorkSheetCProjectile&&); \
	NO_API AWorkSheetCProjectile(const AWorkSheetCProjectile&); \
public:


#define WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorkSheetCProjectile(AWorkSheetCProjectile&&); \
	NO_API AWorkSheetCProjectile(const AWorkSheetCProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorkSheetCProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorkSheetCProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorkSheetCProjectile)


#define WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AWorkSheetCProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AWorkSheetCProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ExplosionPar() { return STRUCT_OFFSET(AWorkSheetCProjectile, ExplosionPar); } \
	FORCEINLINE static uint32 __PPO__ExplosionRad() { return STRUCT_OFFSET(AWorkSheetCProjectile, ExplosionRad); }


#define WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_6_PROLOG
#define WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_RPC_WRAPPERS \
	WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_INCLASS \
	WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_INCLASS_NO_PURE_DECLS \
	WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WorkSheetC_Source_WorkSheetC_WorkSheetCProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
