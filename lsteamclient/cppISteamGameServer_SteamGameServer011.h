#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamGameServer_SteamGameServer011_InitGameServer(void *, uint32, uint16, uint16, uint32, AppId_t, const char *);
extern void cppISteamGameServer_SteamGameServer011_SetProduct(void *, const char *);
extern void cppISteamGameServer_SteamGameServer011_SetGameDescription(void *, const char *);
extern void cppISteamGameServer_SteamGameServer011_SetModDir(void *, const char *);
extern void cppISteamGameServer_SteamGameServer011_SetDedicatedServer(void *, bool);
extern void cppISteamGameServer_SteamGameServer011_LogOn(void *, const char *, const char *);
extern void cppISteamGameServer_SteamGameServer011_LogOnAnonymous(void *);
extern void cppISteamGameServer_SteamGameServer011_LogOff(void *);
extern bool cppISteamGameServer_SteamGameServer011_BLoggedOn(void *);
extern bool cppISteamGameServer_SteamGameServer011_BSecure(void *);
extern CSteamID cppISteamGameServer_SteamGameServer011_GetSteamID(void *);
extern bool cppISteamGameServer_SteamGameServer011_WasRestartRequested(void *);
extern void cppISteamGameServer_SteamGameServer011_SetMaxPlayerCount(void *, int);
extern void cppISteamGameServer_SteamGameServer011_SetBotPlayerCount(void *, int);
extern void cppISteamGameServer_SteamGameServer011_SetServerName(void *, const char *);
extern void cppISteamGameServer_SteamGameServer011_SetMapName(void *, const char *);
extern void cppISteamGameServer_SteamGameServer011_SetPasswordProtected(void *, bool);
extern void cppISteamGameServer_SteamGameServer011_SetSpectatorPort(void *, uint16);
extern void cppISteamGameServer_SteamGameServer011_SetSpectatorServerName(void *, const char *);
extern void cppISteamGameServer_SteamGameServer011_ClearAllKeyValues(void *);
extern void cppISteamGameServer_SteamGameServer011_SetKeyValue(void *, const char *, const char *);
extern void cppISteamGameServer_SteamGameServer011_SetGameTags(void *, const char *);
extern void cppISteamGameServer_SteamGameServer011_SetGameData(void *, const char *);
extern void cppISteamGameServer_SteamGameServer011_SetRegion(void *, const char *);
extern bool cppISteamGameServer_SteamGameServer011_SendUserConnectAndAuthenticate(void *, uint32, const void *, uint32, CSteamID *);
extern CSteamID cppISteamGameServer_SteamGameServer011_CreateUnauthenticatedUserConnection(void *);
extern void cppISteamGameServer_SteamGameServer011_SendUserDisconnect(void *, CSteamID);
extern bool cppISteamGameServer_SteamGameServer011_BUpdateUserData(void *, CSteamID, const char *, uint32);
extern HAuthTicket cppISteamGameServer_SteamGameServer011_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamGameServer_SteamGameServer011_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamGameServer_SteamGameServer011_EndAuthSession(void *, CSteamID);
extern void cppISteamGameServer_SteamGameServer011_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamGameServer_SteamGameServer011_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamGameServer_SteamGameServer011_RequestUserGroupStatus(void *, CSteamID, CSteamID);
extern void cppISteamGameServer_SteamGameServer011_GetGameplayStats(void *);
extern SteamAPICall_t cppISteamGameServer_SteamGameServer011_GetServerReputation(void *);
extern uint32 cppISteamGameServer_SteamGameServer011_GetPublicIP(void *);
extern bool cppISteamGameServer_SteamGameServer011_HandleIncomingPacket(void *, const void *, int, uint32, uint16);
extern int cppISteamGameServer_SteamGameServer011_GetNextOutgoingPacket(void *, void *, int, uint32 *, uint16 *);
extern void cppISteamGameServer_SteamGameServer011_EnableHeartbeats(void *, bool);
extern void cppISteamGameServer_SteamGameServer011_SetHeartbeatInterval(void *, int);
extern void cppISteamGameServer_SteamGameServer011_ForceHeartbeat(void *);
extern SteamAPICall_t cppISteamGameServer_SteamGameServer011_AssociateWithClan(void *, CSteamID);
extern SteamAPICall_t cppISteamGameServer_SteamGameServer011_ComputeNewPlayerCompatibility(void *, CSteamID);
#ifdef __cplusplus
}
#endif
