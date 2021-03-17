#ifndef BibArquivos_h
#define BibArquivos_h

#include <stdio.h>
#include <stdlib.h>


FILE *openFile(char *pointerFileName);
FILE *newFile(char *pointerFileName);


void readFile(FILE * readIt);

//functions for each user input
void inputA(FILE *pointerToFileA);

void inputD(FILE *pointerToTokenFile);

void inputB(FILE *pointerToFileB);


void inputS();

 
#endif 
