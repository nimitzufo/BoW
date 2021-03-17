#include "trabalhoLib.h"


void inputD(FILE *pointerToTokenFile){
	char fileName[30];
	printf("Arquivo do dicionario de palavras: ");
	scanf("%s",fileName);
	
	if(pointerToTokenFile != NULL)
		fclose(pointerToTokenFile);
	
	pointerToTokenFile = openFile(fileName);
	
	if(pointerToTokenFile == NULL){
		printf("Erro 2: Arquivo de Especificação de Token não pode ser aberto\n");
	}
}


void inputB(FILE *pointerToFileB){
	char fileName[30];
	printf("Arquivo de Referência: ");
	scanf("%s",fileName);
	
	if(pointerToFileB != NULL)
		fclose(pointerToFile);
		
	pointerToFileB = openFile(fileName);
	
	if(pointerToFileB == NULL){
		printf("Erro 1: Arquivo de Referência não pode ser aberto\n");
	}
	
	printf("%s aberto!!!\n", fileName);
}	


void inputA(FILE *pointerToFileA){
	char fileName[30];
	printf("Arquivo de Referência: ");
	scanf("%s",fileName);
	
	if(pointerToFileA != NULL)
		fclose(pointerToFile);
		
	pointerToFileA = openFile(fileName);
	
	if(pointerToFileA == NULL){
		printf("Erro 1: Arquivo de Referência não pode ser aberto\n");
	}
	
	printf("%s aberto!!!\n", fileName);
}	


void inputRead(){
	char fileName[30] = "";	
	FILE *fileToBeRead = NULL;	
	printf("Arquivo de Saída: ");
	scanf("%s",fileName);	
	
	if(fileToBeRead != NULL)
		fclose(fileToBeRead);	
	
	fileToBeRead = fopen(fileName, "r");
	
	if (fileToBeRead == NULL){
		printf("Erro, arquivo não pode ser lido\n");
	}
	
	readFile(fileToBeRead);
	fclose(fileToBeRead);
}	


void readFile(FILE * readIt) {
	int spacesNum = 0, tabsNum = 0, newLineNum = 0, chars = 0;
	char characterRead;
	while(1) {
		characterRead = fgetc(readIt);
		if (characterRead == EOF){
			break;
		}
		
		printf("%c", characterRead);
	}
}
