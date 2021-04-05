#pragma once

#include "resource.h"
#include "Client.h"
#include <string>

extern HWND g_hDlg;

BOOL CALLBACK ChatDlgProc(HWND hDlg, UINT iMessage, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK AddFriendInChatDlgProc(HWND hDlg, UINT iMessage, WPARAM wParam, LPARAM lParam);

void SendMessageToServer(HWND hwnd);
void SyncChatUI(HWND hDlg, Json::Value value);

void GetFileDataMethod(HWND hDlg);
void SendFileDataBtnMethod(HWND hDlg);
void AddUserToChatBtnMethod(HWND hDlg);