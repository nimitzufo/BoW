#include "trabalhoFunc.c"
#include "trabalhoLib.h"



int userMenu(FILE * pointerToFileA, FILE * pointerToFileB, FILE * pointerToTokenFile) {
	int opened = 0, beenHereOne = 0, beenHereTwo = 0, beenHereThree = 0;
	while(1) {
		printf("\n################## ENTIDADES NOMEADAS ##################");
		printf("\n");
		printf("\nD - Ler Arquivo de Dicionario");
		printf("\nA - Ler texto de referencia A");
		printf("\nB - Ler texto de referencia B");
		printf("\nC - Comparar textos e exibir resultados");
		printf("\nS - Sair\n");
		char userInput = '0';
		scanf("\n%c", &userInput);

//reading files doesn't require passing pointers around to do it
		if(userInput=='D'){
			inputRead();
		}
		if(userInput=='A'){
			inputRead();
		}
		if(userInput=='B'){
			inputRead();
		}

		
		//here we go
		if(userInput=='C'){
			//some men just wanna watch the world burn
			inputD(pointerToTokenFile);
			if(!beenHereTwo)
				opened+=2;
			beenHereTwo++;	
			
			//same shit different day
			inputA(pointerToFileA);
			if(!beenHereOne)
				opened++;
			beenHereOne++;
			
			//just another day at the office
			inputB(pointerToFileB);
			if(!beenHereThree)
				opened+=4;
			beenHereThree++;
			
			//fire in the hole		
			FILE *file4show = generateOutPutFile(pointerToFileA, pointerToFileB, pointerToTokenFile);
			
			
		}
		
		if(userInput=='S'||userInput=='s'){
			break;
		}
	}
	return opened;	
}




int main() {
	int isOpen = 0;
	FILE *pointerToFileA = NULL;
	FILE *pointerToFileB = NULL;
	FILE *pointerToTokenFile = NULL;		
	
	
	isOpen = userMenu(pointerToFile, pointerToFileB, pointerToTokenFile);
	
	printf("\n\n ----- Sistema Encerrado ----- \n\n");	
	
	if(isOpen){
		if(isOpen==1)
			fclose(pointerToFile);
		if(isOpen==2)
			fclose(pointerToTokenFile);
		if(isOpen==4)
			fclose(pointerToFileB);
		if(isOpen==3){
			fclose(pointerToFile);
			fclose(pointerToTokenFile);
		}	
		if(isOpen==5){
			fclose(pointerToFile);
			fclose(pointerToFileB);
		}
		if(isOpen==6){
			fclose(pointerToTokenFile);
			fclose(pointerToFileB);
		}	
		if(isOpen==7){
			fclose(pointerToFile);
			fclose(pointerToTokenFile);
			fclose(pointerToFileB);
		}		
	}	
		
	return 0;		
}	
