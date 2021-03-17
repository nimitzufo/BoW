#include "trabalhoFunc.c"
#include "trabalhoLib.h"



int userMenu(FILE * pointerToFile, FILE * outputFile,FILE * pointerToTokenFile) {
	int opened = 0, beenHereOne = 0, beenHereTwo = 0, beenHereThree = 0;
	while(1) {
		printf("\n################## ENTIDADES NOMEADAS ##################");
		printf("\n");
		printf("\nD - Ler Arquivo de Dicionario");
		printf("\nA - Ler texto de referencia A");
		printf("\nB - Ler texto de referencia B");
		printf("\nC - Comparar textos");
		printf("\nt - Exibir resultados");
		printf("\nS - Sair\n");
		char userInput = '0';
		scanf("\n%c", &userInput);
		
		
		
		/*
		if(userInput=='R'){			
			inputR(pointerToFile);
			if(!beenHereOne)
				opened++;
			beenHereOne++;	
		}
		
		if(userInput=='T'){
			inputT(pointerToTokenFile);
			if(!beenHereTwo)
				opened+=2;
			beenHereTwo++;	
		}
		
		if(userInput=='A'){
			inputA(outputFile);
			if(!beenHereThree)
				opened+=4;
			beenHereThree++;	
		}
		
		if(userInput=='r'){
			inputLowR();
		}
		
		if(userInput=='t'){
			inputLowT();
		}
		
		if(userInput=='S'||userInput=='s'){
			break;
		}
	}*/
	return opened;	
}




int main() {
	int isOpen = 0;
	FILE *pointerToFile = NULL;
    FILE *outputFile= NULL;	
	FILE *pointerToTokenFile = NULL;		
	
	
	isOpen = userMenu(pointerToFile, outputFile, pointerToTokenFile);
	
	printf("\n\n ----- Sistema Encerrado ----- \n\n");	
	
	if(isOpen){
		if(isOpen==1)
			fclose(pointerToFile);
		if(isOpen==2)
			fclose(pointerToTokenFile);
		if(isOpen==4)
			fclose(outputFile);
		if(isOpen==3){
			fclose(pointerToFile);
			fclose(pointerToTokenFile);
		}	
		if(isOpen==5){
			fclose(pointerToFile);
			fclose(outputFile);
		}
		if(isOpen==6){
			fclose(pointerToTokenFile);
			fclose(outputFile);
		}	
		if(isOpen==7){
			fclose(pointerToFile);
			fclose(pointerToTokenFile);
			fclose(outputFile);
		}		
	}	
		
	return 0;		
}	
