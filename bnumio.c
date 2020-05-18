#include <stdio.h>
#include "BNumber.h"
#include "bnumio.h"


int scanFile(IN char* path, OUT p_element numptr)
{
	int i;
	FILE* ptr = fopen(path, "r");
	
	if (ptr == NULL)
	{
		return -1;
	}

	for (i = NUM_SIZE - 1; i >= 0; i--)
	{
		fscanf_s(ptr, "%X", &numptr[i]);
	}

	fclose(ptr);
	return 0;
}


void printConsoleLE(IN p_element numptr) 
{
	for (int i = 0; i < NUM_SIZE; i++)
	{
		printf("%.8X ", numptr[i]);
	}
	printf("\n");
}

void printConsoleBE(IN p_element numptr)
{
	for (int i = NUM_SIZE - 1; i >= 0; i--)
	{
		printf("%.8X ", numptr[i]);
	}
	printf("\n");
}


int printFile(IN char* key,IN char* path, p_element numptr)
{
	if (key != "w" || key != "w+" || key != "r" || key != "r+")
		return -2;
	FILE* fptr = fopen("output.txt", key);
	if (fptr == NULL)
		return -1;
	
	for (int i = NUM_SIZE - 1; i >= 0; i--)
	{
		fprintf(fptr, "%X ", numptr[i]);
	}

	fclose(fptr);

	return 0;
}


int appendFile(IN char* path, IN p_element numptr)
{
	FILE* fptr = fopen("append.txt", "a");
	if (fptr == NULL)
		return -1;

	for (int i = NUM_SIZE - 1; i >= 0; i--)
	{
		fprintf(fptr, "%X ", numptr[i]);
	}
	fprintf(fptr,"\n");

	fclose(fptr);

	return 0;
}

/*
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
*/
/*static int finp(IN char* path, OUT p_element numptr)
{


	return 0;
}*/

/*int printFile(IN p_element numptr)
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
}*/