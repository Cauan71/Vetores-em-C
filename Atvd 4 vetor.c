#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int num[6];
	int par=0,impar=0,i;
	
	for(i=0;i<6;i++){
		
		printf("Digite o %i n�mero: ",i+1);
			scanf("%i",&num[i]);
			
		//numeros[i] % 2==0 ? par++ : impar++;
			
		if(num[i] %2== 0){
			par++;
		}else{
			impar++;
			
		}
	}
	printf("\n========== R E S U L T A D O ===========\n");
	
	for(i=0;i<6;i++){
		printf("%i� n�mero : %i \n",i+1,num[i]);
	
}
		printf("\nN�meros Pares: %i",par);
		printf("\nN�meros �mpares: %i",impar);	
	
	
	return 0 ;
	
	}		


