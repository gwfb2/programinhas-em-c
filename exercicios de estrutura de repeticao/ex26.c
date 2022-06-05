#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n_eleit, voto, c1=0, c2=0, c3=0, aux=0;
	
	printf("Quantos eleitores votarão? ");
	scanf("%d",&n_eleit);
	printf("\n");
	
	do{
    	printf("Digite o número do candidato no qual deseja votar: ");
    	scanf("%d",&voto);
    	
    	if(voto==1){
    		c1++;
		}else if(voto==2){
			c2++;
		}else if(voto==3){
			c3++;
		}
		aux++;
	}while(aux<n_eleit);
	
	printf("\nTotal de votos:");
	printf("\n--------------------");
	printf("\nCandidato 1 - %d votos\nCandidato 2 - %d votos\nCandidato 3 - %d votos",c1,c2,c3);
}
