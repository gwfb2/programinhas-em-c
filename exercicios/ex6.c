#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float l, area, areaDobro;
	
	printf("Insira a medida do lado do quadrado: ");
	scanf("%f",&l);
	
	area=l*l;
	areaDobro=area*2;
	
	printf("A �rea �: %.2f cm quadrados. ",area);
	printf("\nO dobro da �rea �: %.2f cm quadrados. ",areaDobro);
}
