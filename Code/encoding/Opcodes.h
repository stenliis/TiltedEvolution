#pragma once

enum ClientOpcode : unsigned char
{
    kAuthenticationRequest = 0,
    kCancelAssignmentRequest,
    kAssignCharacterRequest,
    kClientReferencesMoveRequest,
    kEnterExteriorCellRequest,
    kEnterInteriorCellRequest,
    kClientRpcCalls,
    kRequestFactionsChanges,
    kRequestQuestUpdate,
    kPartyInviteRequest,
    kPartyAcceptInviteRequest,
    kPartyLeaveRequest,
    kPartyCreateRequest,
    kPartyChangeLeaderRequest,
    kPartyKickRequest,
    kRequestActorValueChanges,
    kRequestActorMaxValueChanges,
    kRequestHealthChangeBroadcast,
    kActivateRequest,
    kLockChangeRequest,
    kAssignObjectsRequest,
    kRequestSpawnData,
    kRequestDeathStateChange,
    kShiftGridCellRequest,
    kRequestOwnershipTransfer,
    kRequestOwnershipClaim,
    kRequestObjectInventoryChanges,
    kRequestInventoryChanges,
    kSpellCastRequest,
    kInterruptCastRequest,
    kAddTargetRequest,
    kProjectileLaunchRequest,
    kScriptAnimationRequest,
    kDrawWeaponRequest,
    kMountRequest,
    kNewPackageRequest,
    kRequestRespawn,
    kSyncExperienceRequest,
    kRequestMagicEquipmentChanges,
    kClientOpcodeMax
};

enum ServerOpcode : unsigned char
{
    kAuthenticationResponse = 0,
    kAssignCharacterResponse,
    kServerReferencesMoveRequest,
    kServerScriptUpdate,
    kServerTimeSettings,
    kCharacterSpawnRequest,
    kNotifyFactionsChanges,
    kNotifyRemoveCharacter,
    kNotifyQuestUpdate,
    kNotifyPlayerList,
    kNotifyPartyInfo,
    kNotifyPartyInvite,
    kNotifyPartyJoined,
    kNotifyPartyLeft,
    kNotifyActorValueChanges,
    kNotifyActorMaxValueChanges,
    kNotifyHealthChangeBroadcast,
    kNotifySpawnData,
    kNotifyActivate,
    kNotifyLockChange,
    kAssignObjectsResponse,
    kNotifyDeathStateChange,
    kNotifyOwnershipTransfer,
    kNotifyObjectInventoryChanges,
    kNotifyInventoryChanges,
    kNotifySpellCast,
    kNotifyInterruptCast,
    kNotifyAddTarget,
    kNotifyProjectileLaunch,
    kNotifyScriptAnimation,
    kNotifyDrawWeapon,
    kNotifyMount,
    kNotifyNewPackage,
    kNotifyRespawn,
    kNotifySyncExperience,
    kNotifyMagicEquipmentChanges,
    kServerOpcodeMax
};
