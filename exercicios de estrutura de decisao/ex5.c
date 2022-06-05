#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, media;
	
	printf("Digite as duas notas: ");
	scanf("%f %f",&n1, &n2);
	
	media=(n1+n2)/2;
	
	if(media<0 || media>10){
		printf("Dados inválidos.");
	}else{
	    printf("\nMédia: %.1f\n",media);
	    if(media>=0 && media<6){
		    printf("Reprovado.");
	    }else if(media==10){
		    printf("Aprovado com distinção.");
    	}else{
    		printf("Aprovado.");
    	}
	}
	
}
