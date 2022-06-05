#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char s;
	
	printf("Informe seu sexo: (M-Masc, F-Fem) ");
	scanf("%c",&s);
	
	if(s=='m'||s=='M'){
		printf("Masculino.");
	}else if(s=='f'||s=='F'){
		printf("Feminino.");
	}
	
	
}
