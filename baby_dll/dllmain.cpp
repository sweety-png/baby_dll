#include <Windows.h>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
            MessageBox(0, "baby_dll made by sweety#3848", "Injected", MB_OK | MB_ICONINFORMATION);
            break;
        case DLL_THREAD_ATTACH:
            MessageBox(0, "baby_dll made by sweety#3848", "Injected", MB_OK | MB_ICONINFORMATION);
            break;
        case DLL_THREAD_DETACH:
            MessageBox(0, "baby_dll made by sweety#3848", "Injected", MB_OK | MB_ICONINFORMATION);
            break;
        case DLL_PROCESS_DETACH:
            MessageBox(0, "baby_dll made by sweety#3848", "Injected", MB_OK | MB_ICONINFORMATION);
            break;
    }
    return TRUE;
}