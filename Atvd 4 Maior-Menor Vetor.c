#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#define SIZE 5


int main(){
	setlocale(LC_ALL,"");
	
	
	int num[SIZE];
	int i;	
	int menorNumero = 99999, maiorNumero=0;
	
	for(i=0;i<SIZE;i++){
	
	printf("Digite o %i� n�mero: ",i+1);
		scanf("%i",&num[i]);
		


		
		if(num[i]>maiorNumero){
			maiorNumero = num[i];
		}
		if(num[i]<menorNumero){
			menorNumero = num[i];
			
		}
	}
		printf("\nMaior N�mero: %i",maiorNumero);
		printf("\nMenor N�mero: %i",menorNumero);
		
		
	return 0;
	
	
}
