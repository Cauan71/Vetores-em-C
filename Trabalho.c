#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include<stdbool.h>

#define SIZE 5
void carregar(){
	printf("CARREGANDO.....");
	sleep(3);
	system("cls || clear");
	
}

int main(){
	setlocale(LC_ALL,"");
	

	int i,par=0,impar=0, positivo=0, negativo=0;
	int num[SIZE];
	float mediaTotal=0,somar=0;
	int maiorNumero=0 , menorNumero=9999;
	float mediaPar=0, mediaImpar=0;
	int contadorPar = 0, contadorImpar=0, contador=0;
	float contadorTotal=0,somaTotal=0;
	
	float somaPar=0, somaImpar=0;
	
	for(i=0;i<SIZE;i++){
	
		printf("Digite o %i� n�mero: ",i+1);
		scanf("%i",&num[i]);
		contador++; 
			

	if(num[i] >0){		
		if(num[i]%2==0){
			contadorPar++;
			par++;
			somaPar =somaPar +num[i];
		}else{
			contadorImpar++;
			impar++;
			somaImpar = somaImpar+num[i];
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

		contadorTotal++;
		somaTotal =somaTotal+num[i];
		
		}
		mediaImpar = somaImpar/contadorImpar;
		
		mediaPar = somaPar/contadorPar;
		
		mediaTotal = somaTotal/i;
	
	system("cls || clear");
	carregar();

	printf("\n=========== M E N U ===========");
	
	
	
	printf("\nN�meros Pares: %i",par);
	printf("\nN�meros �mpares: %i",impar);
	printf("\nN�meros Positivos %i",positivo);
	printf("\nN�meros Negativos: %i \n",negativo);
	printf("\nMenor N�mero: %i",menorNumero);
	printf("\nMaior N�mero: %i \n",maiorNumero);
	printf("\nmedia par: %.1f ",mediaPar);
	printf("\nmedia impar: %.1f ",mediaImpar);
	printf("\nM�dia Total: %.1f\n",mediaTotal);
	
	for(i=SIZE;i>0;i--){
		printf("\nValor do %d� n�mero: %i",i,num[i-1]);
	
	}
	
	return 0;
	
}
