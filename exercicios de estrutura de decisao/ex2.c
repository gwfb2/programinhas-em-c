#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	printf("Insira um número: ");
	scanf("%d",&n);
	
	if(n<0){
		printf("Negativo.");
	}else{
		printf("Positivo.");
	}
}
