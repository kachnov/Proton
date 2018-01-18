#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Init(void *);
extern bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Shutdown(void *);
extern SteamAPICall_t cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CreateBrowser(void *, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_RemoveBrowser(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_LoadURL(void *, HHTMLBrowser, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetSize(void *, HHTMLBrowser, uint32, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopLoad(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Reload(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoBack(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GoForward(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AddHeader(void *, HHTMLBrowser, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ExecuteJavascript(void *, HHTMLBrowser, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseUp(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDown(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseDoubleClick(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseMove(void *, HHTMLBrowser, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_MouseWheel(void *, HHTMLBrowser, int32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyDown(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyUp(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_KeyChar(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetHorizontalScroll(void *, HHTMLBrowser, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetVerticalScroll(void *, HHTMLBrowser, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetKeyFocus(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_ViewSource(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_CopyToClipboard(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_PasteFromClipboard(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_Find(void *, HHTMLBrowser, const char *, bool, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_StopFind(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_GetLinkAtPosition(void *, HHTMLBrowser, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetCookie(void *, const char *, const char *, const char *, const char *, RTime32, bool, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetPageScaleFactor(void *, HHTMLBrowser, float, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetBackgroundMode(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_SetDPIScalingFactor(void *, HHTMLBrowser, float);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_AllowStartRequest(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_JSDialogResponse(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_004_FileLoadDialogResponse(void *, HHTMLBrowser, const char **);
#ifdef __cplusplus
}
#endif
