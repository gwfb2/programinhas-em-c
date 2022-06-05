#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int aux=0;
	float sum=0;
	
	printf("Lojas Quase Dois - Tabela de preços\n");
	printf("------------------------------------\n\n");
	
	do{
		sum=sum+1.99;
		printf("%d itens: R$ %.2f\n",aux+1,sum);
		aux++;
	}while(aux<50);
	
}
