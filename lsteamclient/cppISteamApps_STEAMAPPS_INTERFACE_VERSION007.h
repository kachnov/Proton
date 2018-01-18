#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled(void *, AppId_t);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend(void *);
extern int cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex(void *, int, AppId_t *, bool *, char *, int);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC(void *, AppId_t);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC(void *, AppId_t);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName(void *, char *, int);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt(void *, bool);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots(void *, AppId_t, DepotId_t *, uint32);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir(void *, AppId_t, char *, uint32);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled(void *, AppId_t);
extern CSteamID cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam(void *, const char *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress(void *, AppId_t, uint64 *, uint64 *);
extern int cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId(void *);
#ifdef __cplusplus
}
#endif
