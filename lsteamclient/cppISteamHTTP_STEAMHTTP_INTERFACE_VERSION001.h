#ifdef __cplusplus
extern "C" {
#endif
extern HTTPRequestHandle cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest(void *, EHTTPMethod, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue(void *, HTTPRequestHandle, uint64);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout(void *, HTTPRequestHandle, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue(void *, HTTPRequestHandle, const char *, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter(void *, HTTPRequestHandle, const char *, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest(void *, HTTPRequestHandle, SteamAPICall_t *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest(void *, HTTPRequestHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest(void *, HTTPRequestHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize(void *, HTTPRequestHandle, const char *, uint32 *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue(void *, HTTPRequestHandle, const char *, uint8 *, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize(void *, HTTPRequestHandle, uint32 *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData(void *, HTTPRequestHandle, uint8 *, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest(void *, HTTPRequestHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct(void *, HTTPRequestHandle, float *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody(void *, HTTPRequestHandle, const char *, uint8 *, uint32);
#ifdef __cplusplus
}
#endif
