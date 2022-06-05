#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float valorH, horasT, salario;
	
	printf("Quanto você ganha por hora? ");
	scanf("%f",&valorH);
	printf("Quantas horas trabalhou este mês? ");
	scanf("%f",&horasT);
	
	salario=valorH*horasT;
	
	printf("Seu salário no referido mês é R$ %.2f. ",salario);
}
