#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats(void *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat(void *, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2(void *, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat(void *, const char *, int32);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2(void *, const char *, float);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat(void *, const char *, float, double);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement(void *, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement(void *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement(void *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats(void *);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon(void *, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute(void *, const char *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress(void *, const char *, uint32, uint32);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats(void *, CSteamID);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat(void *, CSteamID, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2(void *, CSteamID, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement(void *, CSteamID, const char *, bool *);
#ifdef __cplusplus
}
#endif
