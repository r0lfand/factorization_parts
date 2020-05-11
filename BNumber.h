#ifndef BNUMBER_H
#define BNUMBER_H

#define IN
#define OUT

#define NUM_SIZE 2
#define MAX_PATH_LENGTH 151
#define DEFAULT_FILE_PATH "input.txt"

typedef unsigned int element;
typedef element *p_element;

/************************************************************/
/*	���������, ������� �������� ���������� � ������� �����	*/
/*															*/
/*	���� ���������:											*/
/*															*/
/*	unsigned int number			- ������, ������� ������ 	*/
/*	unsigned int numberSize		- ����������� ��������� 	*/
/*								  ������� number			*/
/*	unsigned int elementSize	- ������ ������� �������� 	*/
/*								  ������� number			*/
/*															*/
/************************************************************/

/*
typedef struct
{
	element number[NUM_SIZE];
	unsigned int numberSize;
}
BNumber, *PBNumber;
*/
int scanFile(OUT p_element numptr);
int printFile(IN p_element numptr);
void printConsoleLE(IN p_element numptr);
void printConsoleBE(IN p_element numptr);

#endif BNUMBER_H