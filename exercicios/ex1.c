#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	printf("Insira um n�mero: ");
	scanf("%d",&num);
	
	printf("O n�mero inserido foi: %d.",num);
}
