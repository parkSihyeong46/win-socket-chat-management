#pragma once

#include "resource.h"
#include "Client.h"

extern HWND g_hDlg;

BOOL CALLBACK ChatDlgProc(HWND hDlg, UINT iMessage, WPARAM wParam, LPARAM lParam);

void SendMessageToServer(HWND hwnd);