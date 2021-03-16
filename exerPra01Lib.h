#ifndef BibArquivos_h
#define BibArquivos_h

#include <stdio.h>
#include <stdlib.h>


FILE *openFile(char *pointerFileName);
FILE *newFile(char *pointerFileName);


void readFile(FILE * readIt);
int readFileIntReturn(FILE *pointer2File);

//functions for each user input
void inputR(FILE *pointerToFile);

void inputT(FILE *pointerToTokenFile);

void inputA(FILE *outputFile);

void inputLowR();

void inputLowT();

void inputS();

 
#endif 
