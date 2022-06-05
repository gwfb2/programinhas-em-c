#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float h, w;
	char s;
	
	printf("Insira sua altura em metros: ");
	scanf("%f",&h);
	
	printf("Insira seu sexo (M-Masc/F-Fem): ");
	scanf(" %c",&s);
	
	if(s=='M'||s=='m'){
		w=(72.7*h)-58;
	}
	else if(s=='F'||s=='f'){
		w=(62.1*h)-44.7;
	}
	printf("Seu peso ideal é %.2f kg.",w);
}
