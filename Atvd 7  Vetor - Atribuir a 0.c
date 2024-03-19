#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

#define SIZE 5

int main(){
	setlocale(LC_ALL,"");
	
	int num[SIZE];
	int i;
	
	
	for(i=0;i<SIZE;i++){
		printf("\nDigite o %i valor: ",i+1);
			scanf("%i",&num[i]);
			
			
		if(num[i]<0){
			num[i] = 0;
		}
			
	}
	
	system("cls || clear");
	
		for(i=0;i<SIZE;i++){
		
		printf("\n %iº Número Informado: %i",i+1,num[i]);
	}
	return 0 ;
	
}

