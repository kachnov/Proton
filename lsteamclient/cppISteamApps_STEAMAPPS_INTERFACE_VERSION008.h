#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled(void *, AppId_t);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend(void *);
extern int cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex(void *, int, AppId_t *, bool *, char *, int);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC(void *, AppId_t);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC(void *, AppId_t);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName(void *, char *, int);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt(void *, bool);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots(void *, AppId_t, DepotId_t *, uint32);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir(void *, AppId_t, char *, uint32);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled(void *, AppId_t);
extern CSteamID cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam(void *, const char *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress(void *, AppId_t, uint64 *, uint64 *);
extern int cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId(void *);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys(void *);
extern SteamAPICall_t cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails(void *, const char *);
#ifdef __cplusplus
}
#endif
