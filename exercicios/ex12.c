#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float kg, exc, multa;
	
	printf("João Papo-de-Pescador Peixes & etc.");
	printf("\n----------------------------------------------");
	printf("\nQuantidade de kg pescados: ");
	scanf("%f",&kg);
	
	if(kg>50){
		exc=kg-50;
		multa=exc*4;
		printf("\nQtd de kgs além do limite: %.2f kg",exc);
		printf("\nValor da multa a pagar: R$ %.2f",multa);
	}
	else{
		printf("\nParabéns, João Papo-de-Pescador, está dentro do limite. ");
	}
}
