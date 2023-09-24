#include <Windows.h>
#include <iostream>



void injected_thread() {
	while (true) {
		// GetAsyncKeyState will constantly return 1 while key is held down and 0 if not
		if (GetAsyncKeyState(0x4D)) {  // 0x4D = m
			
		}
		Sleep(1);
	}
}


BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)injected_thread, NULL, 0, NULL);
	}
	return true;
}