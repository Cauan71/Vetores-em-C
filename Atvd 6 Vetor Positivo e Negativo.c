#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define SIZE 2


int main(){
	setlocale(LC_ALL,"");
	
	int num[SIZE];
	int i;
	int soma = 0, negativo = 0, positivo= 0;
	
	
	for(i=0;i<SIZE;i++){
	printf("Digite um n�mero: ");
		scanf("%i",&num[i]);
		
		
	if(num[i]>=0){
		soma = soma+num[i];
		positivo++;
		
	}else{
		negativo++;
		
	}			
}

	system("cls || clear");
	
	
	printf("\nA soma dos N�meros Positivos: %i",soma);
	printf("\nQuantidade de N�meros negativos: %i",negativo);
	printf("\nQuantidade de N�meros Positivos: %i",positivo);
	
	
	
	return 0 ;
	
}
