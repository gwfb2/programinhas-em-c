#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float f,c;
	
	printf("Insira a temperatura em Fahrenheit: ");
	scanf("%f",&f);
	
	c=5*((f-32)/9);
	
	printf("%.1f Fahrenheit --> %.1f Celsius",f,c);
}
