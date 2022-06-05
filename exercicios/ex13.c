#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float valorH, salB, IR, INSS, sind, totalDesc, salL;
	int horasT;
	
	printf("Quanto você ganha por hora? ");
	scanf("%f",&valorH);
	
	printf("Quantas horas trabalhou nesse mês? ");
	scanf("%d",&horasT);
	
	salB=valorH*horasT;
	
	IR=salB*0.11;
	INSS=salB*0.08;
	sind=salB*0.05;
	
	totalDesc=IR+INSS+sind;
	salL=salB-totalDesc;
	
	printf("\n + Salário Bruto: R$ %.2f",salB);
	printf("\n\n - IR (11%%): R$ %.2f",IR);
	printf("\n - INSS (8%%): R$ %.2f",INSS);
	printf("\n - Sindicato (5%%): R$ %.2f",sind);
	printf("\n\n = Salário Líquido: R$ %.2f",salL);
	
}
