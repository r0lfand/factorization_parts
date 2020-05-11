#include <stdio.h>
#include "BNumber.h"
#include "bnumio.h"

int main()
{
	element n[NUM_SIZE];
	if (scanFile(n) < 0)
		return -1;

	printConsoleBE(n);
	printConsoleLE(n);

	if (printFile(n) < 0)
		return -1;

    return 0;
}