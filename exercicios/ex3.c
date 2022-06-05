#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, n3, n4, sum, media;
	
	printf("Insira a 1a nota: ");
	scanf("%f",&n1);
	
	printf("Insira a 2a nota: ");
	scanf("%f",&n2);
	
	printf("Insira a 3a nota: ");
	scanf("%f",&n3);
	
	printf("Insira a 4a nota: ");
	scanf("%f",&n4);
	
	sum=n1+n2+n3+n4;
	media=sum/4;
	
	printf("A média das notas é: %.1f",media);
}
