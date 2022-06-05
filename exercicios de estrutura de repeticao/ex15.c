#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, n;
	
	printf("---Sequência de Fibonacci---");
	printf("\nInsira o número de termos que deseja ver: ");
	scanf("%d",&n);
	
	printf("\n");
	
	int seq[n];
	seq[0]=1;
	
	for(i=0; i<n; i++){
		seq[i+1]=seq[i]+seq[i-1]; //MANO EU CONSEGUI WTFFFFF AUHAUHAUAHUHUSHUHSUAHSUHUSH
		printf("%d  ",seq[i]);
	}printf("\n\n%d termos. ",i);
}
