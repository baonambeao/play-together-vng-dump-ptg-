#pragma once
#include <cstdint>

namespace Offsets {
    // ==========================================
    // Anti-Cheat & Detections (Patch/Hook to ret)
    // ==========================================
    namespace AntiCheat {
        constexpr uintptr_t OnSpeedHackDetected          = 0x2C9FE08;
        constexpr uintptr_t OnSpeedHackDetectedGpresto   = 0x2C9FE90;
        constexpr uintptr_t OnTimeCheatingDetected       = 0x2C9FF24;
        constexpr uintptr_t OnObscuredTypeCheatingDetected = 0x2C9FF2C;
        constexpr uintptr_t OnTableCheatingDetected      = 0x2C9FFB4;
        constexpr uintptr_t OnOtherCheatingDetected      = 0x2CA0020;
        constexpr uintptr_t OnAnimationSpeedCheatDetect  = 0x2CA00C0;
        constexpr uintptr_t get_IsCheating               = 0x2C9FD08;
        constexpr uintptr_t SetCheatDetect               = 0x3436DBC;
    }

    // ==========================================
    // Fishing System & Controllers
    // ==========================================
    namespace Fishing {
        // FishingFloatController
        constexpr uintptr_t Float_get_IsHit             = 0x297854C;
        constexpr uintptr_t Float_Awake                  = 0x297861C;
        constexpr uintptr_t Float_Update                 = 0x297A738;
        constexpr uintptr_t Float_SetFishLevel           = 0x297C8FC;
        constexpr uintptr_t Float_Touch                  = 0x297C9D4;
        constexpr uintptr_t Float_Hit                    = 0x297C9DC;
        constexpr uintptr_t Float_Fight                  = 0x297C9E4;
        constexpr uintptr_t Float_Tug                    = 0x297C9EC;
        constexpr uintptr_t Float_Lift                   = 0x297CA58;
        constexpr uintptr_t Float_BigFishLift            = 0x297CB10;
        constexpr uintptr_t Float_BigFishCatch           = 0x297CA0C;
        constexpr uintptr_t Float_BigFishStunHit         = 0x297CBCC;

        // FishShadowController
        constexpr uintptr_t Shadow_InitilaizeFish        = 0x297FB0C;
        constexpr uintptr_t Shadow_get_FishLevel         = 0x29898F8;
        constexpr uintptr_t Shadow_set_FishLevel         = 0x29905EC;
        constexpr uintptr_t Shadow_AppearFish            = 0x299082C;
        constexpr uintptr_t Shadow_Update                = 0x2991A2C;
        constexpr uintptr_t Shadow_PlayApproach          = 0x29925A4;
        constexpr uintptr_t Shadow_PlayFight             = 0x2993850;

        // FishingSystem
        constexpr uintptr_t System_get_Self              = 0x297F9C8;
        constexpr uintptr_t System_get_BigFishHP         = 0x29838F4;
        constexpr uintptr_t System_set_BigFishHP         = 0x2983924;
        constexpr uintptr_t System_RequestFishingBegin   = 0x2986E44;
        constexpr uintptr_t System_ReceiveFishingBegin   = 0x2987604;
        constexpr uintptr_t System_RequestCastingResult  = 0x2987B3C;
        constexpr uintptr_t System_ReceiveCastingResult  = 0x2987C74;
        constexpr uintptr_t System_RequestFishingHit     = 0x2986254;
        constexpr uintptr_t System_ReceiveFishingHit     = 0x2987CC0;
        constexpr uintptr_t System_RequestFishingTug     = 0x2987DE8;
        constexpr uintptr_t System_ReceiveFishingTug     = 0x2987ED4;
        constexpr uintptr_t System_RequestStunHit        = 0x2988430;
        constexpr uintptr_t System_ReceiveFishingStunHit = 0x2988508;
        constexpr uintptr_t System_RequestFishingCatch   = 0x2988660;
        constexpr uintptr_t System_ReceiveFishingCatch   = 0x2988728;
        constexpr uintptr_t System_StunHit               = 0x29881DC;
        constexpr uintptr_t System_ResetPoleUseCount     = 0x2988C40;
    }

    // ==========================================
    // Player Character & Movement Controls
    // ==========================================
    namespace Player {
        // ActorDefaultControlPlayer
        constexpr uintptr_t get_IsCanMove                = 0x3368A24;
        constexpr uintptr_t get_IsCanJump                = 0x3368A50;
        constexpr uintptr_t SetMoveLock                  = 0x336A5F8;
        constexpr uintptr_t SetEnableControl             = 0x336A7E4;
        constexpr uintptr_t WarpToFriendPos              = 0x336D2D0;
        constexpr uintptr_t SetPositionAndRotationWithScale = 0x336D144;
        constexpr uintptr_t OnClickFishing               = 0x33733DC;
        constexpr uintptr_t StartFishing                 = 0x3373B20;
        constexpr uintptr_t FishingHit                   = 0x33737C0;
        constexpr uintptr_t Lift                         = 0x3373848;
        constexpr uintptr_t OnClickInsectCollecting      = 0x337AA48;
        constexpr uintptr_t OnClickPickax                = 0x337C1E8;
        constexpr uintptr_t CheckPickax                  = 0x337C360;
        constexpr uintptr_t HitPickax                    = 0x337D278;

        // KinematicControllerUnit / KinematicControllerDefault
        constexpr uintptr_t SetBuffAbilityMoveSpeed      = 0x344B8F4;
        constexpr uintptr_t SetBuffAbilityGravity        = 0x344B900;
        constexpr uintptr_t SetBuffAbilityJumpPower      = 0x344B910;
        constexpr uintptr_t SetBuffAbilityDoubleJump     = 0x344B918;
        constexpr uintptr_t set_CheckFly                 = 0x3448B28;
        constexpr uintptr_t get_CheckFly                 = 0x3448B20;
        constexpr uintptr_t SetExtraMoveSpeed            = 0x326BF60;
        constexpr uintptr_t SetExtraJump                 = 0x326BFAC;
        constexpr uintptr_t set_gravity                  = 0x326BFB8;
        constexpr uintptr_t set_IsFly                    = 0x326C084;
        constexpr uintptr_t get_IsFly                    = 0x32694C0;
    }

    // ==========================================
    // Insect & Catching System
    // ==========================================
    namespace Insect {
        constexpr uintptr_t RequestCatchInsect           = 0x2A47020;
        constexpr uintptr_t RequestTestAutoCatch         = 0x2A4701C;
        constexpr uintptr_t GetCatchInsectArea           = 0x2A476E0;
        constexpr uintptr_t ResetInsectNetUseCount       = 0x2A48F74;
        constexpr uintptr_t SetAllInsectVisibility       = 0x2A491B4;
    }
}
