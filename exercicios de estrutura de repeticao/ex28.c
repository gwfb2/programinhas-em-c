#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int cds, aux=0;
	float valor, total=0;
	
	printf("Quantos CDs adquiristes, meu querubim? ");
	scanf("%d",&cds);
	
	do{
		printf("\nDigite o valor do CD %d: R$ ",aux+1);
		scanf("%f",&valor);
		
		total=total+valor;
		
		aux++;
		
	}while(aux<cds);
	
	printf("\nValor total dos CDs: R$ %.2f",total);
	total=total/cds;
	printf("\nValor médio dos CDs: R$ %.2f",total);
}
