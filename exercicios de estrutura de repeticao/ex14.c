#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	int i, n[5], par=0, impar;
	float res;
	
	for(i=0; i<=4; i++){
		printf("Insira o %d� n�mero: ",i+1);
		scanf("%d",&n[i]);
	}
	for(i=0; i<=4; i++){
		res=n[i]%2;
		if(res!=0){
			impar++;
		}else{
			par++;
		}
	}
	printf("\n%d n�meros pares e %d n�meros �mpares. ",par,impar);
}
