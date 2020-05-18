#include <stdio.h>
#include "BNumber.h"
#include "bnumio.h"

int sfile(OUT p_element numptr)
{
	char path[MAX_PATH_LENGTH] = { 0 };
	char user = 0;

	printf("Do you want to specify input file? Y or N?\n");
	user = getchar();
	getc(stdin); // ����� \n
	if ((user == 'Y') || (user == 'y'))
	{
		printf("Enter path:");
		scanf_s("%s", path, sizeof(path) - 1);
		if (scanFile(path, numptr) < 0)
		{
			printf("ERROR: Couldn't open file\n");
			return -1;
		}
	}
	else if ((user == 'N') || (user == 'n'))
	{
		printf("Using standard input.txt...\n");
		if (scanFile(DEFAULT_INPUT_PATH, numptr) < 0)
		{
			printf("ERROR: Couldn't open file\n");
			return -1;
		}
	}
	else
	{
		printf("Unexpected input\n");
		return -1;
	}

	return 0;
}

int pfile(IN p_element numptr)
{
	char path[MAX_PATH_LENGTH] = { 0 };
	char user;
	char* usermod[1];
	

	printf("Do you want to specify output file? Y or N?\n");
	scanf("%c", &user);

	if ((user == 'Y') || (user == 'y'))
	{
		printf("Enter path: ");
		scanf_s("%s", path, sizeof(path) - 1);
		if (printFile(path, numptr) < 0)
		{
			printf("Couldn't open file\n");
			return -1;
		}
	}
	else if ((user == 'N') || (user == 'n'))
	{
		printf("Using standard output.txt...\n");
		if (printFile(DEFAULT_OUTPUT_PATH, numptr) < 0)
		{
			printf("Couldn't open file\n");
			return -1;
		}
	}
	else
	{
		printf("Unexpected input\n");
		return -1;
	}
}