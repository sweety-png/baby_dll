#include <Windows.h>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        MessageBox(0, "baby_dll made by sweety#3848", "sweety#3848", MB_ICONINFORMATION);
        return TRUE;
    }
}