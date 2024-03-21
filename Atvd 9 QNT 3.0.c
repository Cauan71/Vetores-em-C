#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 4
int main(){
	setlocale(LC_ALL,"");
	

	int i,par=0,impar=0, positivo=0, negativo=0;
	int num[SIZE];
	int maiorNumero=0 , menorNumero=9999;
	int mediaPar=0, mediaImpar=0;
	int contadorPar = 0, contadorImpar=0, contador=0;
	
	int somaPar=0, somaImpar=0;
	
	for(i=0;i<SIZE;i++){
	
		
		printf("Digite o %i número: ",i+1);
		scanf("%i",&num[i]);
		contador++;
		
		
		
		
	
	if(num[i] >0){		
		if(num[i]%2==0){
			par++;
			somaPar = somaPar+num[i];
			contadorPar++;
			
		
			
		}else{
			impar++;
			somaImpar = somaImpar+num[i];
			contadorImpar++;
			
			
		}
		
	}
		if(num[i]<0){
			negativo++;
			
			
		}else{
			positivo++;
			
		}
		
		if(num[i]>maiorNumero){
			maiorNumero = num[i];
		}
		if(num[i]<menorNumero){
			menorNumero = num[i];
			
		}
	
				
		}
			mediaPar = somaPar/contadorPar;
			mediaImpar = somaImpar/contadorImpar;
				

	

	printf("\n=========== M E N U ===========");
	
	printf("\nNúmeros Pares: %i",par);
	printf("\nNúmeros Ímpares: %i",impar);
	printf("\nNúmeros Positivos %i",positivo);
	printf("\nNúmeros Negativos: %i",negativo);
	printf("\nQuantidade de Números Digitados: %i",i);
	printf("\nMenor Número: %i",menorNumero);
	printf("\nMaior Número: %i",maiorNumero);
	printf("\nMédia Números Pares: %i",mediaPar);
	printf("\nMédia Números Impares: %i",mediaImpar);
	
	

	

	
		
	return 0;
	
}
