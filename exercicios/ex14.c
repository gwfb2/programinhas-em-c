#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float areaT, totalLitros, totalLatas;
	int valorT, latasArr;
	
	printf("Valor da área a ser pintada (em metros quadrados): ");
	scanf("%f",&areaT);
	
	totalLitros=areaT/3;
	totalLatas=totalLitros/18;
	
	double ceil(double totalLatas);
	latasArr=ceil(totalLatas);
	
	valorT=latasArr*80;
	
	printf("\nQtd de latas de 18L a serem compradas: %d",latasArr);
	printf("\nValor total: R$ %d",valorT);
	

}
