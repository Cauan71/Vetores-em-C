#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define SIZE 6

int main(){
	setlocale(LC_ALL,"");
	
	int num[SIZE];
	int i;
	
	
	for(i=0;i<SIZE;i++){
	do{
		printf("Digite o %i valor: ",i+1);
			scanf("%i",&num[i]);
			
	}while(num[i]<0 || num[i] %2 != 0);
	

}

	system("cls ||clear");
	
	for(i=SIZE;i>0;i--){
		printf("\n %iº  Número Digitado: %i",i,num[i-1]);
		
	}

	return 0 ;
	
}
