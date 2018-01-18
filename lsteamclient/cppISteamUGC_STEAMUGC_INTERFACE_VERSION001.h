#ifdef __cplusplus
extern "C" {
#endif
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryUserUGCRequest(void *, AccountID_t, EUserUGCList, EUGCMatchingUGCType, EUserUGCListSortOrder, AppId_t, AppId_t, uint32);
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_CreateQueryAllUGCRequest(void *, EUGCQuery, EUGCMatchingUGCType, AppId_t, AppId_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SendQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_GetQueryUGCResult(void *, UGCQueryHandle_t, uint32, SteamUGCDetails_t *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_ReleaseQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddRequiredTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_AddExcludedTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnLongDescription(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetReturnTotalOnly(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetCloudFileNameFilter(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetMatchAnyTag(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetSearchText(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_SetRankedByTrendDays(void *, UGCQueryHandle_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION001_RequestUGCDetails(void *, PublishedFileId_t);
#ifdef __cplusplus
}
#endif
