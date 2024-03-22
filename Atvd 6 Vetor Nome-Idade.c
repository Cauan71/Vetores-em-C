#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

 #define SIZE 5
void carregar(){
	printf("CARREGANDO.....");
	
}

int main(){
	setlocale(LC_ALL,"");
	
	char nome[SIZE][200];
	int idade[SIZE];
	int i;
	
	for(i=0;i<SIZE;i++){
		printf("\nDigite o %i nome: ",i+1);
			scanf("%s",&nome[i]);
			
		printf("Digite a %i idade: ",i+1);
			scanf("%i",&idade[i]);
			
			system("cls || clear");
			
	}
	carregar();
	sleep(4);
	system("cls || clear");
	
	
	
		for(i=0;i<SIZE;i++){
			printf("%iº Nome : %s\n",i+1,nome[i]);
			printf("%iº Idade: %i \n\n",i+1,idade[i]);
	}
	
	return 0 ;

}
