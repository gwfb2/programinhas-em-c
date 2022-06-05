#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float raio, area, per;
	
	printf("Insira o valor do raio do círculo: ");
	scanf("%f",&raio);
	
	area=3.14*(raio*raio);
	per=raio*(3.14*2);
	
	printf("A área do círculo é %.2f.",area);
	printf("\nO perímetro do círculo é %.2f.",per);
}
