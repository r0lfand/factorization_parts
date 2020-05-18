#ifndef BNUMIO_H
#define BNUMIO_H

/************************************************************************************/
/*MAX_PATH_LENGTH - ������������ ������ ���� � �����							*/
/*DEFAULT_INPUT_PATH - ����������� ��� �����, �� �������� ����������� �����     */
/************************************************************************************/

#define MAX_PATH_LENGTH 151						
#define DEFAULT_INPUT_PATH "input.txt"			


/************************************************************************************/
/*������� ��� ������ ����� �� �����							*/
/*																					*/
/*int scanfile(OUT p_element numptr);									*/
/*		�������� ���������: p_element numptr -									*/
/*		������, � ������� ����� �������� �����, �������� �� �����				*/
/*																					*/	
/*		������������ ��������: -1 - �� ������� ������� ����						*/
/*								0 - ����� ������� ������� �� �����				*/
/*																					*/
/************************************************************************************/
int scanFile(IN char* path, OUT p_element numptr);


/************************************************************************************/
/*������� ��� ������ ����� � ����								*/
/*																					*/
/*int printFile(IN char* key, IN char* path,IN p_element numptr);		*/
/*		������� ���������:char* key - ���� ��� �������� �����						*/
/*							w ��� ����������, a ��� ���������� � �����					*/		
/*						char* path - ���� � �����									*/		
/*			p_element numptr - ��������� �� �����,								*/
/*								������� ���������� �����������					*/
/*		������������ ��������:  -2 - ������������ ���� ��� �������� �����    */
/*								-1 - �� ������� ������� ����						*/
/*								 0 - ����� ������� ����������� � ����			*/
/*																					*/
/************************************************************************************/
int printFile(IN char* key, IN char* path,IN p_element numptr);



/************************************************************************************/
/*������� ��� ������ ����� � ������� � ������� Little Endian				*/
/*																					*/
/*void printConsoleLE(IN p_element numptr);							*/
/*		������� ���������: p_element numptr -									*/
/*				�����, ������� ����� ������� � �������							*/
/*																					*/
/************************************************************************************/
void printConsoleLE(IN p_element numptr);


/************************************************************************************/
/*������� ��� ������ ����� � ������� � ������� Big Endian					*/
/*																					*/
/*void printConsoleLE(IN p_element numptr);							*/
/*		������� ���������: p_element numptr -									*/
/*				�����, ������� ����� ������� � �������							*/
/*																					*/
/************************************************************************************/
void printConsoleBE(IN p_element numptr);

#endif BNUMIO_H