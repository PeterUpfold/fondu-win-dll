#include "unistd_glue.h"
#include <windows.h>
#include <FileApi.h>
#include <processthreadsapi.h>

/**
Quick and dirty hack to implement just enough of the POSIX API that Fondu uses
to make it functional.
**/


int access(char* pathname, int mode)
{

	DWORD attrib = GetFileAttributesA((LPCSTR)pathname);

	if (attrib != INVALID_FILE_ATTRIBUTES && !(attrib & FILE_ATTRIBUTE_DIRECTORY)) {
		return 0;
	}
	
	return -1;
}

int getpid() {
	return GetCurrentProcessId();
}