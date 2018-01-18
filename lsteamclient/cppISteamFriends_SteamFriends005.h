#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends005_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends005_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends005_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends005_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends005_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends005_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends005_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends005_GetFriendPersonaName(void *, CSteamID);
extern int cppISteamFriends_SteamFriends005_GetFriendAvatar(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends005_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends005_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends005_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends005_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends005_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends005_GetClanName(void *, CSteamID);
extern int cppISteamFriends_SteamFriends005_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends005_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends005_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends005_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends005_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends005_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends005_ActivateGameOverlayToWebPage(void *, const char *);
extern void cppISteamFriends_SteamFriends005_ActivateGameOverlayToStore(void *, AppId_t);
extern void cppISteamFriends_SteamFriends005_SetPlayedWith(void *, CSteamID);
#ifdef __cplusplus
}
#endif
