#ifdef __cplusplus
extern "C" {
#endif
extern HSteamPipe cppISteamClient_SteamClient007_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient007_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient007_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient007_CreateLocalUser(void *, HSteamPipe *);
extern void cppISteamClient_SteamClient007_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient007_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient007_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient007_SetLocalIPBinding(void *, uint32, uint16);
extern void *cppISteamClient_SteamClient007_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient007_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient007_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient007_GetISteamContentServer(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient007_GetISteamMasterServerUpdater(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient007_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient007_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient007_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient007_GetIPCCallCount(void *);
extern void *cppISteamClient_SteamClient007_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient007_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient007_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient007_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern void *cppISteamClient_SteamClient007_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
#ifdef __cplusplus
}
#endif
