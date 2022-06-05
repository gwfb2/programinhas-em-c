#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int prod=0, op, loop;
	float valor, sum=0, valorCl, troco;
	
	do{
		do{
			printf("\nInsira o valor do produto %d: R$ ",prod+1);
			scanf("%f",&valor);
			
			sum+=valor;
			prod++;
			
	    	printf("Aperte 1 p/ continuar ou 0 para parar: ");
	    	scanf("%d",&op);
		}while(op!=0);
		
		printf("\nValor Total: R$ %.2f",sum);
		printf("\nInsira o valor em R$ fornecido pelo cliente: ");
		scanf("%f",&valorCl);
		
		troco=valorCl-sum;
		printf("Troco: R$ %.2f",troco);
		
		printf("\n\nDigite 1 para registrar a próx. compra: ");
		scanf("%d",&loop);
		
		prod=0, troco=0, sum=0;
	}while(loop==1);
}
