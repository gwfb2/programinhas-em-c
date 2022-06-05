#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, n[5], maior;
	
	for(i=0; i<=4; i++){
		printf("Insira o %d° número: ",i+1);
		scanf("%d",&n[i]);
	}
	for(i=0; i<=4; i++){
		for(j=1; j<=5; j++){
	    	if(n[i]>n[j] && n[i]>maior){
		    	maior=n[i];
	    	}else if(n[j]>n[i] && n[j]>maior){
		    	maior=n[j];
		    }
		}	
	}printf("\nO maior número é: %d.",maior);
}
        //j=i+1;
		//if(i<j || j!=0){
			//maior=j;
		//comparar o valor de i na celula atual com a proxima
		//se n[i] > n[i+1], maior=n[i]
