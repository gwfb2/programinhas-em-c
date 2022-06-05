#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, n, j=1, seq[14];
	
	printf("---Sequência de Fibonacci---");
	printf("\n");
	
	seq[0]=1;
	
	for(i=0; i<14; i++){
		seq[i+1]=seq[i]+seq[i-1];
    	printf("%d  ",seq[i]);
	}
}
