#include "trabalhoLib.h"


int findEndOfWord(char pcar){
    int i, eow = 0;
    char charForEOW[6] = {'\n', ' ', '.', ',', ';', ':'};
    int sizeOfEOW = 6;

    for(i=0;i<sizeOfEOW;i++){
        if(pcar == charForEOW[i]){
            eow = 1;
            break;
        }
    }
    return eow;
}


int equalWords(char *ppal1, char *ppal2){
    int position = 0, equal = 1;
    while((!ehfinalpalavra(ppal1[position])) && (!ehfinalpalavra(ppal2[position]))){
        if(tolower(ppal1[position]) != tolower(ppal2[position])){
            equal = 0;
            break;
        }
        position++;
    }
    return equal;
}


FILE *writeNewFILE(char *PFILENAME){
    return fopen(PFILENAME,"w");
}


int nextWordInFile(FILE *pFile, char *p2Word){
    if(fscanf(pFile, "%s", p2Word) < 1){
        return 0;
    }
    return 1;
}


char *getDictData(FILE *DictFile,  int *termSize){
    char pTemp[MAXWORDSIZE];
    char *pToken = NULL;
    
    fseek(DictFile, 0, SEEK_SET);
    
    if(fscanf(DictFile, "%d %s", termSize, pTemp) == 2){
        pToken = malloc(strlen(pTemp)+1);
        strcpy(pToken, pTemp); //copia dos termos
    }
    return pToken;
}


FILE *generateOutPutFile(FILE *refTxtA, FILE *refTxtB, FILE *DictFile){
	FILE *outputFILE = NULL;
	char *dictData;
	char fileNAME[30] = "";
	int termFound, sizeOfTerms;
	long int beginnigTerms;
	char *pTerm, pWord[MAXWORDSIZE];
	
	
/*-------------------------------------------*/
//Extrair especificação to token:
    dictData = getDictData(DictFile,  &sizeOfTerms);
    sizeOfTerms += 1; //Espaço para '\n'
    beginnigTerms = ftell(DictFile); //posição do arquivo onde inicia os termos
    pTerm = malloc(sizeOfTerms); //Buffer para armazenar termos do arquivo de token	
/*-------------------------------------------*/	
	
		
	printf("Arquivo de Saída: ");
	scanf("%s",fileNAME);
	
	outputFILE = writeNewFILE(fileNAME);
	
	fseek(pTextFile, 0, SEEK_SET);
     
    while(1){
        memset (ppalavra,'\n',MAXWORDSIZE);
        if(!nextWordInFile(DictFile, pWord)){
            printf("\nnão leu %s", pWord);
            break;
        }
        
        fseek(DictFile, beginnigTerms, SEEK_SET);
        
        termFound = 0;
        while(1){
            memset (ptermo,'\n',ptamtermos);
            if(!nextWordInFile(, ptermo)){
                printf("\nnão leu %s", pWord);
                break;
            }
            printf("\nProcurando %s", ptermo);
            if(equalWords(pWord, pTerm)){
                termFound = 1;
                break;
            }
        }
        if(pacheitermo){
            fputs(dictData, outputFILE);
            fputs(" ", outputFILE);
        }
        else {
            fputs(pWord, outputFILE);//copy word
            fputs(" ", outputFILE);
        }
        
    }

		
	
	
	
	fclose(outputFILE)
	outpuFILE = newFILE(char *fileNAME)
	return outputFILE;
}


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
