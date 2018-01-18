#ifdef __cplusplus
extern "C" {
#endif
extern uint32 cppISteamUtils_SteamUtils009_GetSecondsSinceAppActive(void *);
extern uint32 cppISteamUtils_SteamUtils009_GetSecondsSinceComputerActive(void *);
extern EUniverse cppISteamUtils_SteamUtils009_GetConnectedUniverse(void *);
extern uint32 cppISteamUtils_SteamUtils009_GetServerRealTime(void *);
extern const char * cppISteamUtils_SteamUtils009_GetIPCountry(void *);
extern bool cppISteamUtils_SteamUtils009_GetImageSize(void *, int, uint32 *, uint32 *);
extern bool cppISteamUtils_SteamUtils009_GetImageRGBA(void *, int, uint8 *, int);
extern bool cppISteamUtils_SteamUtils009_GetCSERIPPort(void *, uint32 *, uint16 *);
extern uint8 cppISteamUtils_SteamUtils009_GetCurrentBatteryPower(void *);
extern uint32 cppISteamUtils_SteamUtils009_GetAppID(void *);
extern void cppISteamUtils_SteamUtils009_SetOverlayNotificationPosition(void *, ENotificationPosition);
extern bool cppISteamUtils_SteamUtils009_IsAPICallCompleted(void *, SteamAPICall_t, bool *);
extern ESteamAPICallFailure cppISteamUtils_SteamUtils009_GetAPICallFailureReason(void *, SteamAPICall_t);
extern bool cppISteamUtils_SteamUtils009_GetAPICallResult(void *, SteamAPICall_t, void *, int, int, bool *);
extern void cppISteamUtils_SteamUtils009_RunFrame(void *);
extern uint32 cppISteamUtils_SteamUtils009_GetIPCCallCount(void *);
extern void cppISteamUtils_SteamUtils009_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamUtils_SteamUtils009_IsOverlayEnabled(void *);
extern bool cppISteamUtils_SteamUtils009_BOverlayNeedsPresent(void *);
extern SteamAPICall_t cppISteamUtils_SteamUtils009_CheckFileSignature(void *, const char *);
extern bool cppISteamUtils_SteamUtils009_ShowGamepadTextInput(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32, const char *);
extern uint32 cppISteamUtils_SteamUtils009_GetEnteredGamepadTextLength(void *);
extern bool cppISteamUtils_SteamUtils009_GetEnteredGamepadTextInput(void *, char *, uint32);
extern const char * cppISteamUtils_SteamUtils009_GetSteamUILanguage(void *);
extern bool cppISteamUtils_SteamUtils009_IsSteamRunningInVR(void *);
extern void cppISteamUtils_SteamUtils009_SetOverlayNotificationInset(void *, int, int);
extern bool cppISteamUtils_SteamUtils009_IsSteamInBigPictureMode(void *);
extern void cppISteamUtils_SteamUtils009_StartVRDashboard(void *);
extern bool cppISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled(void *);
extern void cppISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled(void *, bool);
#ifdef __cplusplus
}
#endif
