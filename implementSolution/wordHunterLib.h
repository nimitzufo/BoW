#ifndef BibArquivos_h
#define BibArquivos_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 172 //A maior palavra do mundo tem 173 letras

typedef struct {
    char letra;
    int inicio;
    int fim;
} Comp;


void dist(Comp Compes[], int *tamanhoArrayCompes, char dic[][MAX], int tamDic);
Comp resetCompMom(char palavra, Comp Compes[], int tamanhoArrayCompes);
void calcBOW(FILE *arqTR, int Cont[], char dic[][MAX], int tamDic, FILE* arqbowTR);
void format(char text[]);
void cpyDic(FILE *arqDic, char dic[][MAX]);
int numLinhas(FILE *arq);
void readDic(FILE *arqDic, int *tamDic, char dic[][MAX]);
void bows(FILE * arqTR, int tamDic, char dic[][MAX], FILE *arqbowTR, int *Cont, char ver[2]);
void mostraBows(int *ContA, int *ContB, char dic[][MAX], int tamDic);
void mBows(int tamDic, int *ContA, int *ContB, char dic[][MAX]);
void dEuclides(int tamDic, char *ContA, char *ContB);


#endif
