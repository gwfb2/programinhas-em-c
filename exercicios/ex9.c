#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float c,f;
	
	printf("Insira a temperatura em graus Celsius: ");
	scanf("%f",&c);
	
	f=(c*1.8)+32;
	
	printf("%.1f graus Celsius --> %.1f graus Fahrenheit",c,f);
}
