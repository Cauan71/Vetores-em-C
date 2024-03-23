#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#define SIZE 3
int main(){
	setlocale(LC_ALL,"");
	
	
	int i;
	float nota[SIZE];
	
	for(i=0;i<SIZE;i++){
	
	printf("Digite a %iº nota: ",i+1);
		scanf("%f",&nota[i]);
		
}
	system("cls || clear");	
	
	
	printf("\n========= M E N U =========");
	for(i=0;i<SIZE;i++){
	
	printf("\n%iº Notas Digitadas: %.1f",i+1,nota[i]);
}
	return 0;
	
}
