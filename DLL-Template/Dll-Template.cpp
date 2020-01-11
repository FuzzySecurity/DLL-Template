#include "stdafx.h"
#include <windows.h>
#include <stdio.h>


BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(NULL, L"DllMain loaded", L"Success", 0);
	case DLL_PROCESS_DETACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	}
	return TRUE;
}

extern "C" __declspec(dllexport) BOOL test() {
	MessageBox(NULL, L"Exported test() function loaded", L"Success", 0);

	return TRUE;
}