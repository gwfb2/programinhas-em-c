#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2, sum;
	
	printf("Insira o 1o n�mero: ");
	scanf("%d",&n1);
	
	printf("Insira o 2o n�mero: ");
	scanf("%d",&n2);
	
	sum=n1+n2;
	
	printf("A soma dos n�meros �: %d",sum);
}
