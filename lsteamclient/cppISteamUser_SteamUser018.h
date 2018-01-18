#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser018_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser018_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser018_GetSteamID(void *);
extern int cppISteamUser_SteamUser018_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser018_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser018_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser018_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser018_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser018_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser018_GetAvailableVoice(void *, uint32 *, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser018_GetVoice(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32);
extern EVoiceResult cppISteamUser_SteamUser018_DecompressVoice(void *, const void *, uint32, void *, uint32, uint32 *, uint32);
extern uint32 cppISteamUser_SteamUser018_GetVoiceOptimalSampleRate(void *);
extern HAuthTicket cppISteamUser_SteamUser018_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamUser_SteamUser018_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamUser_SteamUser018_EndAuthSession(void *, CSteamID);
extern void cppISteamUser_SteamUser018_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamUser_SteamUser018_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamUser_SteamUser018_BIsBehindNAT(void *);
extern void cppISteamUser_SteamUser018_AdvertiseGame(void *, CSteamID, uint32, uint16);
extern SteamAPICall_t cppISteamUser_SteamUser018_RequestEncryptedAppTicket(void *, void *, int);
extern bool cppISteamUser_SteamUser018_GetEncryptedAppTicket(void *, void *, int, uint32 *);
extern int cppISteamUser_SteamUser018_GetGameBadgeLevel(void *, int, bool);
extern int cppISteamUser_SteamUser018_GetPlayerSteamLevel(void *);
extern SteamAPICall_t cppISteamUser_SteamUser018_RequestStoreAuthURL(void *, const char *);
#ifdef __cplusplus
}
#endif
