#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float valorH, horasT, salario;
	
	printf("Quanto voc� ganha por hora? ");
	scanf("%f",&valorH);
	printf("Quantas horas trabalhou este m�s? ");
	scanf("%f",&horasT);
	
	salario=valorH*horasT;
	
	printf("Seu sal�rio no referido m�s � R$ %.2f. ",salario);
}
