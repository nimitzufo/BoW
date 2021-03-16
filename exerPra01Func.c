#include "exerPra01Lib.h"



FILE *openFile(char *pointerFileName){
    return fopen(pointerFileName,"r");
}

FILE *newFile(char *pointerFileName){
    return fopen(pointerFileName,"w");
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

int readFileIntReturn(FILE *pointer2File){
    int c;
    if(pointer2File == NULL)
        return 0; //Erro: ponteiro não apontado.
    while(1) {
       c = fgetc(pointer2File);
       if( feof(pointer2File) ) {
          break ;
       }
       printf("%c", c);
    }
    return 1;
}


void inputR(FILE *pointerToFile){
	char fileName[30];
	printf("Arquivo de Referência: ");
	scanf("%s",fileName);
	
	if(pointerToFile != NULL)
		fclose(pointerToFile);
		
	pointerToFile = openFile(fileName);
	
	if(pointerToFile == NULL){
		printf("Erro 1: Arquivo de Referência não pode ser aberto\n");
	}
	
	printf("%s aberto!!!\n", fileName);
}	

void inputT(FILE *pointerToTokenFile){
	char fileName[30];
	printf("Arquivo de Especificação de Token: ");
	scanf("%s",fileName);
	
	if(pointerToTokenFile != NULL)
		fclose(pointerToTokenFile);
	
	pointerToTokenFile = openFile(fileName);
	
	if(pointerToTokenFile == NULL){
		printf("Erro 2: Arquivo de Especificação de Token não pode ser aberto\n");
	}
}	

void inputA(FILE *outputFile){
	char fileName[30];
	printf("Arquivo de Saída: ");
	scanf("%s",fileName);
	
	if(outputFile != NULL)
		fclose(outputFile);
		
		
	outputFile = newFile(fileName);
	
	if(outputFile == NULL){
		printf("Erro 3: Arquivo de Saída não pode ser criado\n");
	}
	
	
	
	
	//Faça a chamada às funções que vc criou para aplicar a Tokenização aqui.
	//Ao final: Feche o arquivo de saída. Abra-o em modo de leitura e mostre seu
	//conteúdo.
	
	
	printf("%s gerado!!!\n", fileName);
	
		
}	

void inputLowR(){
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

void inputLowT(){
	FILE *fileToBeRead = NULL;
	int userChoice = 0;
	printf("Escolha o arquivo de tokens a ser visualizado\n");
	printf("Nomes(1)\nLugares(2)\n");
	scanf("%d", &userChoice);
	while(1){
		if (userChoice!=1||userChoice!=2){
			printf("Opção inválida,  tente outra vez");
			scanf("%d", &userChoice);
		}
		break;
	}
	if(userChoice==1){
		fopen("Nomes.txt", "r");
		readFile(fileToBeRead);
		fclose(fileToBeRead);		
	}

	if(userChoice==2){
		fopen("Lugares.txt", "r");
		readFile(fileToBeRead);
		fclose(fileToBeRead);		
	}
	 		
}	
