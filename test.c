#include <stdio.h>
#include "BNumber.h"
#include "bnumio.h"
#include "IOInterface.h"

int main()
{
	element n[NUM_SIZE];/*
	char ipath[MAX_PATH_LENGTH] = "input.txt";
	char opath[MAX_PATH_LENGTH] = "output.txt";
	char apath[MAX_PATH_LENGTH] = "append.txt";
	if (scanFile(ipath,n) < 0)
		return -1;

	printConsoleBE(n);
	printConsoleLE(n);

	if (printFile("w",opath,n) < 0)
		return -1;

	if (printFile("a",apath, n) < 0)
		return -1;*/
	
	sfile(&n);
	pfile(&n);
	cprintle(&n);
	cprintbe(&n);

    return 0;
}