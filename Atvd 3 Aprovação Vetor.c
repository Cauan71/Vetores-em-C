#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#define SIZE 3
int main(){
	setlocale(LC_ALL,"");
	
	
	int i;
	float nota[SIZE],media=0, soma=0, contador=0;
	
	
	for(i=0;i<SIZE;i++){
	
	printf("Digite a %iº nota: ",i+1);
		scanf("%f",&nota[i]);
		contador++;
	soma = soma+nota[i];
	
}

system("cls || clear");

	media = soma/contador;
	
	
	
	printf("\n========= M E N U =========");
	for(i=0;i<SIZE;i++){
	
	printf("\n%iº Notas Digitadas: %.1f\n",i+1,nota[i]);
}
	printf("\nMédia dos Números: %.1f",media);
	
	if(media>=7){
		printf("\nAprovado!!");
	}else if(media>=5){
		printf("\nEm Recuperação!!");
	}else{
		printf("\nReprovado!!");
		
		
	}
	return 0;
	
}
