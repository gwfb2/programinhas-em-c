#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char op;
	int n, x=0;
	float media, sum;
	
	do{
		printf("Insira um n�mero: ");
		scanf("%d",&n);
		
		sum=sum+n;
		x++;
		
	    printf("\nDeseja continuar? (s / n): ");
	    scanf(" %c",&op);
	    printf("\n");
	}while(op=='s');
	
	media=sum/x;
	printf("\nM�dia aritm�tica dos %d n�meros: %.2f",x,media);
}
