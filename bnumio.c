#include <stdio.h>
#include "BNumber.h"
#include "bnumio.h"

static int finp(IN char* path, OUT p_element numptr);

int scanFile(OUT p_element numptr)
{
	char path[MAX_PATH_LENGTH] = { 0 };
	char user;

	printf("Do you want to specify input file? Y or N?\n>");
	user = getchar();

	if ((user == 'Y') || (user == 'y'))
	{
		printf("Enter path: ");
		scanf_s("%s", path, sizeof(path)-1);
		if (finp(DEFAULT_FILE_PATH, numptr))
			return -1;
	}
	else if ((user == 'N') || (user == 'n'))
	{
		printf("Using standard input.txt...\n");
		if (finp(DEFAULT_FILE_PATH, numptr))
			return -1;
	}
	else
	{
		printf("Unexpected input\n");
		return -1;
	}
	
	return 0;
}

static int finp(IN char* path, OUT p_element numptr)
{
	int i;
	
	FILE *ptr = fopen(path, "r");
	if (ptr == NULL)
	{
		printf("Error opening file.\n");
		return 1;
	}

	for(i = NUM_SIZE - 1; i >= 0; i--)
	{
		fscanf_s(ptr,"%X", &numptr[i]);
	}

	return 0;
}


void printConsoleLE(IN p_element numptr) 
{
	printf("LE:");
	for (int i = 0; i < NUM_SIZE; i++)
	{
		printf("%.8X ", numptr[i]);
	}
	printf("\n");
}


void printConsoleBE(IN p_element numptr)
{
	printf("BE:");
	for (int i = NUM_SIZE-1; i >= 0; i--)
	{
		printf("%.8X ", numptr[i]);
	}
	printf("\n");
}


int printFile(IN p_element numptr)
{
	FILE* fptr = fopen("output.txt", "w+");
	if (fptr == NULL)
	{
		printf("Can't open output file\n");
		return -1;
	}

	for (int i = NUM_SIZE - 1; i >= 0; i--)
	{
		fprintf(fptr,"%X ", numptr[i]);
	}

	return 0;
}