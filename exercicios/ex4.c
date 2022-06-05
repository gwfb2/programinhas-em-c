#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float m;
	int cm;
	
	printf("Insira o valor em metros: ");
	scanf("%f",&m);
	
	cm=m*100;
	
	printf("%.2f m --> %d cm",m,cm);
}
