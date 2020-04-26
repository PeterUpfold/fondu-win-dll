// fondu-win-cli.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "../fondu.c"

int main(int argc, char ** argv)
{
	if (argc < 2) {
		printf("Please pass a filename.");
		exit(0);
	}
	fondu_simple_main(argv[1]);
}

