#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float media, sum, n[5];
	
	for(i=0; i<=4; i++){
		printf("Insira o %d� n�mero: ",i+1);
		scanf("%f",&n[i]);
		
		sum=sum+n[i];
	}
	media=sum/5;
	
	printf("\nA soma dos n�meros: %.1f \nA m�dia: %.1f",sum,media);
}
