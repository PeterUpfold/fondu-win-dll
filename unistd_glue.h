#pragma once

/**
Quick and dirty hack to implement just enough of the POSIX API that Fondu uses
to make it functional.
**/

#define F_OK 1
#define R_OK 2

int access(char* pathname, int mode);

int getpid();