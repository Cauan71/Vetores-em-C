#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
void carregar(){
	printf("CARREGANDO.....");
	
}

int main(){
	char nome[5];
	int i, idade[5];
	
	
	for(i=0;i<5;i++){
		printf("\nDigite o seu nome: ");
			scanf("%s",&nome[i]);
			
		printf("Digite a sua idade: ");
			scanf("%i",&idade[i]);
			
			system("cls || clear");
			
	}
	carregar();
	sleep(4);
	system("cls || clear");
	
	
	
		for(i=0;i<5;i++){
		
		printf("\nNomes e Idades digitadas respectivamente : %c , %i",nome[i],idade[i]);
}
	return 0 ;

}
