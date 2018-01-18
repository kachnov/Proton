#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser011_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser011_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser011_GetSteamID(void *);
extern int cppISteamUser_SteamUser011_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser011_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser011_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser011_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser011_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser011_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser011_GetCompressedVoice(void *, void *, uint32, uint32 *);
extern EVoiceResult cppISteamUser_SteamUser011_DecompressVoice(void *, void *, uint32, void *, uint32, uint32 *);
#ifdef __cplusplus
}
#endif
