#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 5

void carregar(){
	
	printf("CARREGANDO......");
	sleep(3);
	system("cls || clear");
	
}
int main(){
	
	
	setlocale(LC_ALL,"");
	

	int i,par=0,impar=0, positivo = 0, negativo = 0;
	
	
	int num[i];
	
	for(i=0;i<SIZE;i++){
		printf("Digite o %iº número: ",i+1);
			scanf("%i",&num[i]);
			
			
		if(num[i] %2 == 0){
			par++;
		}else {
			impar++;
			
		}
	
		if(num[i]>=0){
			positivo++;
			
		}else{
			negativo++;
			
		}
	}
	
	system("cls || clear");
	carregar();

	
	
	
	printf("\n=========== M E N U ===========");
	
	printf("\nNúmeros Pares: %i",par);
	printf("\nNúmeros Ímpares: %i",impar);
	printf("\nNúmeros Positivos %i",positivo);
	printf("\nNúmeros Negativos: %i",negativo);
	printf("\nQuantidade de Números Inseridos: %i",i);
	
		
	return 0;
	
}
