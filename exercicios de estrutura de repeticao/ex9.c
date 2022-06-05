#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	for(i=1; i<=50; i+=2){
		printf("%d\n",i);
	}
}
