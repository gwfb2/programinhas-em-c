#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char t;
	
	printf("Insira a inicial do turno em que você estuda (Matutino/Vespertino/Noturno): ");
	scanf("%c",&t);
	
	if(t=='M'){
		printf("Bom dia!");
	}else if(t=='V'){
		printf("Boa tarde!");
	}else if(t=='N'){
		printf("Boa noite!");
	}else{
		printf("Valor inválido. ");
	}
}
