#ifdef __cplusplus
extern "C" {
#endif
extern uint32 cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive(void *);
extern uint32 cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive(void *);
extern EUniverse cppISteamUtils_SteamUtils002_GetConnectedUniverse(void *);
extern uint32 cppISteamUtils_SteamUtils002_GetServerRealTime(void *);
extern const char * cppISteamUtils_SteamUtils002_GetIPCountry(void *);
extern bool cppISteamUtils_SteamUtils002_GetImageSize(void *, int, uint32 *, uint32 *);
extern bool cppISteamUtils_SteamUtils002_GetImageRGBA(void *, int, uint8 *, int);
extern bool cppISteamUtils_SteamUtils002_GetCSERIPPort(void *, uint32 *, uint16 *);
extern uint8 cppISteamUtils_SteamUtils002_GetCurrentBatteryPower(void *);
extern uint32 cppISteamUtils_SteamUtils002_GetAppID(void *);
extern void cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition(void *, ENotificationPosition);
extern bool cppISteamUtils_SteamUtils002_IsAPICallCompleted(void *, SteamAPICall_t, bool *);
extern ESteamAPICallFailure cppISteamUtils_SteamUtils002_GetAPICallFailureReason(void *, SteamAPICall_t);
extern bool cppISteamUtils_SteamUtils002_GetAPICallResult(void *, SteamAPICall_t, void *, int, int, bool *);
#ifdef __cplusplus
}
#endif
