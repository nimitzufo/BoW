#ifndef BibArquivos_h
#define BibArquivos_h

#include <stdio.h>
#include <stdlib.h>
#define MAXWORDSIZE 35

FILE *openFile(char *pointerFileName);
FILE *newFile(char *pointerFileName);



int equalWords(char *ppal1, char *ppal2);

int nextWordInFile(FILE *pFile, char *p2Word);
char *getDictData(FILE *DictFile,  int *termSize);
int findEndOfWord(char pcar);

FILE *generateOutPutFile(FILE *refTxtA, FILE *refTxtB, FILE *DictFile);
//functions for each user input
void inputA(FILE *pointerToFileA);

void inputD(FILE *pointerToTokenFile);

void inputB(FILE *pointerToFileB);

void readFile(FILE * readIt);
void inputRead();
void inputS();

 
#endif 
