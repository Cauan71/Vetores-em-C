#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void carregar(){
	
	printf("CARREGANDO......");
	sleep(3);
	system("cls || clear");
	
}
int main(){
	setlocale(LC_ALL,"");
	

	int i,par=0,impar=0, positivo=0, negativo=0;
	int num, contador = 0;
		
	do{
		
		printf("Digite um número: ");
		scanf("%i",&num);
		contador++;	
	
	if(num >= 0){		
		if(num%2==0){
			par++;
			
		}else{
			impar++;
			
		}
		
	}
		if(num<0){
			negativo++;
			
			
		}else{
			positivo++;
			
		}
	
	}while(num!=0);
	

	printf("\n=========== M E N U ===========");
	
	printf("\nNúmeros Pares: %i",par);
	printf("\nNúmeros Ímpares: %i",impar);
	printf("\nNúmeros Positivos %i",positivo);
	printf("\nNúmeros Negativos: %i",negativo);
	printf("\nQuantidade Inserida: %i",contador);
	

	
		
	return 0;
	
}
