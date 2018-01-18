#ifdef __cplusplus
extern "C" {
#endif
extern void cppISteamGameServer_SteamGameServer005_LogOn(void *);
extern void cppISteamGameServer_SteamGameServer005_LogOff(void *);
extern bool cppISteamGameServer_SteamGameServer005_BLoggedOn(void *);
extern bool cppISteamGameServer_SteamGameServer005_BSecure(void *);
extern CSteamID cppISteamGameServer_SteamGameServer005_GetSteamID(void *);
extern bool cppISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate(void *, uint32, const void *, uint32, CSteamID *);
extern CSteamID cppISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection(void *);
extern void cppISteamGameServer_SteamGameServer005_SendUserDisconnect(void *, CSteamID);
extern bool cppISteamGameServer_SteamGameServer005_BUpdateUserData(void *, CSteamID, const char *, uint32);
extern bool cppISteamGameServer_SteamGameServer005_BSetServerType(void *, uint32, uint32, uint16, uint16, uint16, const char *, const char *, bool);
extern void cppISteamGameServer_SteamGameServer005_UpdateServerStatus(void *, int, int, int, const char *, const char *, const char *);
extern void cppISteamGameServer_SteamGameServer005_UpdateSpectatorPort(void *, uint16);
extern void cppISteamGameServer_SteamGameServer005_SetGameType(void *, const char *);
extern bool cppISteamGameServer_SteamGameServer005_BGetUserAchievementStatus(void *, CSteamID, const char *);
#ifdef __cplusplus
}
#endif
