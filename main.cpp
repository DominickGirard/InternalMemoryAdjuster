#include <Windows.h>
#include <iostream>

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
	MessageBox(0, 0, 0, 0);
	std::cout << "yo";
	return true;
}