#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	for(i=1; i<=20; i++){
		printf("%d ",i);
	}
}
