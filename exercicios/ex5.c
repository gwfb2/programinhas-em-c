#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float raio, area, per;
	
	printf("Insira o valor do raio do c�rculo: ");
	scanf("%f",&raio);
	
	area=3.14*(raio*raio);
	per=raio*(3.14*2);
	
	printf("A �rea do c�rculo � %.2f.",area);
	printf("\nO per�metro do c�rculo � %.2f.",per);
}
