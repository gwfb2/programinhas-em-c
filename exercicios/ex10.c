#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, n3, op1, op2, op3;
	
	printf("Insira dois números inteiros: ");
	scanf("%f %f",&n1, &n2);
	
	printf("Insira um número real: ");
	scanf("%f",&n3);
	
	op1=(n1*2)*(n2/2);
	op2=(n1*3)+n3;
	op3=n3*n3*n3;
	
	printf("\n1. O produto do dobro do primeiro com a metade do segundo: %.2f",op1);
	printf("\n2. A soma do triplo do primeiro com o terceiro: %.2f",op2);
	printf("\n3. O terceiro elevado ao cubo: %.2f",op3);
}
