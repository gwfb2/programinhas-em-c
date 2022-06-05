#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2;
	
	printf("Insira dois números: ");
	scanf("%d %d",&n1, &n2);
	
	if(n1>n2){
		printf("%d",n1);
	}else{
		printf("%d",n2);
	}
}
