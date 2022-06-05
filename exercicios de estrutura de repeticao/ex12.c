#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	int i, n, op;
	
	printf("Insira a tabuada desejada (1-10): ");
	scanf("%d",&n);
	
	if(n<1||n>10){
		printf("Número inválido. ");
	}
	else{
		for(i=1; i<=10; i++){
			op=n*i;
			printf("%d x %d = %d\n",n,i,op);
		}
	}
	
}
