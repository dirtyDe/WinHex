// winhex.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

#define LPLONGLONG PLONGLONG

typedef int (WINAPI* WHX_Init) (int APIVersion);
WHX_Init Init = NULL;

typedef BOOL(WINAPI * WHX_Done) ();
WHX_Done Init = NULL;

typedef BOOL(WINAPI * WHX_Open) (LPCSTR lpResName);
WHX_Open open = NULL;

typedef BOOL(WINAPI * WHX_Create) (LPCSTR lpPathName, int size);
WHX_Create Create = NULL;

typedef BOOL(WINAPI * WHX_Close)();
WHX_Close Close = NULL;

typedef BOOL(WINAPI * WHX_CloseAll)();
WHX_CloseAll CloseAll = NULL;

typedef BOOL(WINAPI * WHX_NextObj)();
WHX_NextObj NextObj = NULL;

typedef BOOL(WINAPI * WHX_Save)();
WHX_Save Save = NULL;

typedef BOOL(WINAPI * WHX_SaveAs) (LPCSTR lpNewFileName);
WHX_SaveAs SaveAs = NULL;

typedef BOOL(WINAPI * WHX_SaveAll)();
WHX_SaveAll SaveAll = NULL;

typedef BOOL(WINAPI * WHX_OpenEx) (LPCSTR lpResName, int Param);
WHX_OpenEx OpenEx = NULL;

typedef BOOL(WINAPI * WHX_Read) (LPVOID lpBuffer, int Bytes);
WHX_Read Read = NULL;

typedef BOOL(WINAPI * WHX_Write) (LPVOID lpBuffer, int Bytes);
WHX_Write Write = NULL;

typedef BOOL(WINAPI * WHX_GetSize) (LPLONGLONG lpSize);
WHX_GetSize GetSize = NULL;

typedef BOOL(WINAPI * WHX_Goto) (LONGLONG Ofs);
WHX_Goto Goto = NULL;

typedef BOOL(WINAPI * WHX_Move) (LONGLONG Distance);
WHX_Move Move = NULL;

typedef BOOL(WINAPI * WHX_CurrentPos) (LPLONGLONG lpOfs);
WHX_CurrentPos CurrentPos = NULL;

typedef BOOL(WINAPI * WHX_SetBlock) (LONGLONG Ofsl, LONGLONG Ofs2);
WHX_SetBlock SetBlock = NULL;

typedef BOOL(WINAPI * WHX_Copy) ();
WHX_Copy Copy = NULL;

typedef BOOL(WINAPI * WHX_Cut) ();
WHX_Cut Cut = NULL;

typedef BOOL(WINAPI * WHX_Remove) ();
WHX_Remove Remove = NULL;

typedef BOOL(WINAPI * WHX_Paste) ();
WHX_Paste Paste = NULL;

typedef BOOL(WINAPI * WHX_WriteClipboard) ();
WHX_WriteClipboard WriteClipboard = NULL;

typedef BOOL(WINAPI * WHX_Find) (LPCSTR lpData, LPCSTR lpOptions);
WHX_Find Find = NULL;

typedef BOOL(WINAPI * WHX_Replace) (LPCSTR lpData1, LPCSTR lpData2, LPCSTR lpOptions);
WHX_Replace Replace = NULL;

typedef BOOL(WINAPI * WHX_WasFound) ();
WHX_WasFound WasFound = NULL;

typedef int (WINAPI * WHX_WasFoundEx) ();
WHX_WasFoundEx WasFoundEx = NULL;

typedef BOOL(WINAPI * WHX_Convert) (LPCSTR lpSrcFormat, LPCSTR lpDstFormat);
WHX_Convert Convert = NULL;

typedef BOOL(WINAPI * WHX_Encrypt) (LPCSTR lpKey, int Algorithm);
WHX_Encrypt Encrypt = NULL;

typedef BOOL(WINAPI * WHX_Decrypt) (LPCSTR lpKey, int Algorithm);
WHX_Decrypt Decrypt = NULL;

typedef BOOL(WINAPI * WHX_GetCurObjName) (LPCSTR lpObjName);
WHX_GetCurObjName GetCurObjName = NULL;

typedef BOOL(WINAPI * WHX_SetFeedbackLevel) (int Level);
WHX_SetFeedbackLevel SetFeedbackLevel = NULL;

typedef BOOL(WINAPI * WHX_GetLastError) (LPCSTR lpErrorMsg);
WHX_GetLastError Getlasterr = NULL;

typedef BOOL(WINAPI * WHX_SetLastError) (LPCSTR lpErrorMsg);
WHX_SetLastError Setlasterr = NULL;

typedef BOOL(WINAPI * WHX_GetStatus) (LPCSTR lpInstPath, LPLONG lpWHXVersion, LPLONG lpWHXSubVersion, LPLONG lpReserved);
WHX_GetStatus GetStatus = NULL;

hModule = LoadLibrary(TEXT("whxapi.dll"));
if (hModule = NULL)
{
	return ret;
}
//get WHX_Init address
Init = (WHX_Init)GetProcAddress(hModule,
	"WHX_Init");
if (Init == NULL)
{
	return ret;
}
Done = (WHX_Done)GetProcAddress(hModule,
	"WHX_Done");
if (Done == NULL)
{
	return ret;
}
Open = (WHX_Open)GetProcAddress(hModule,
	"WHX_Open");
if (Open == NULL)
{
	return ret;
}
Create = (WHX_Create)GetProcAddress(hModule,
	"WHX_Create");
if (Create == NULL)
{
	return ret;
}
Close = (WHX_Close)GetProcAddress(hModule,
	"WHX_Close");
if (Close == NULL)
{
	return ret;
}
CloseAll = (WHX_CloseAll)GetProcAddress(hModule,
	"WHX_CloseAll");
if (CloseAll == NULL) {
	return ret;
}
Read = (WHX_Read)GetProcAddress(hModule,
	"WHX_Read");
if (Read == NULL)
{
	return ret;
}
NextObj = (WHX_NextObj)GetProcAddress(hModule,
	"WHX_NextObj");
if (NextObj == NULL)
{
	return ret;
}
Save = (WHX_Save)GetProcAddress(hModule,
	"WHX_Save");
if (Save == NULL) {
	return ret;
}
SaveAs = (WHX_SaveAs)GetProcAddress(hModule,
	"WHX_SaveAs");
if (SaveAs == NULL)
{
	return ret;
}
SaveAll = (WHX_SaveAll)GetProcAddress(hModule,
	"WHX_SaveAll");
if (SaveAll == NULL)
{
	return ret;
}


