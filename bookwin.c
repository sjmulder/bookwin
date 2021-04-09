#include <windows.h>

int WINAPI
WinMain(HINSTANCE instance, HINSTANCE prev, LPSTR cmd, int showcmd)
{
	(void)instance;
	(void)prev;
	(void)cmd;
	(void)showcmd;

	return 0;
}

void
WinMainCRTStartup(void)
{
	ExitProcess(WinMain(GetModuleHandle(NULL), NULL, "",
	    SW_SHOWNORMAL));
}
