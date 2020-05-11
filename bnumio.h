#ifndef BNUMIO_H
#define BNUMIO_H
#define MAX_PATH_LENGTH 151
#define DEFAULT_FILE_PATH "input.txt"


int scanFile(OUT p_element numptr);
int printFile(IN p_element numptr);
void printConsoleLE(IN p_element numptr);
void printConsoleBE(IN p_element numptr);

#endif BNUMIO_H