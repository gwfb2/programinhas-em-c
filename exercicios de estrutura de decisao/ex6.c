#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2, n3;
	
	printf("Insira tr�s n�meros: ");
	scanf("%d %d %d",&n1, &n2, &n3);
	
	printf("\nMaior n�mero: ");
	
	if(n1>n2 && n1>n3){
		printf("%d",n1);
	}else if(n2>n1 && n2>n3){
		printf("%d",n2);
	}else{
		printf("%d",n3);
	}
}
