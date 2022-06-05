#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2, n3, maior, medio, menor;
	
	printf("Insira três números: ");
	scanf("%d %d %d",&n1, &n2, &n3);
	
	if(n1<n2 && n1<n3){
		menor=n1;
		if(n2<n3){
			maior=n3;
			medio=n2;
		}else{
			maior=n2;
			medio=n3;
		}
	}else if(n2<n3 && n2<n1){
		menor=n2;
		if(n1<n3){
			maior=n3;
			medio=n1;
		}else{
			maior=n1;
			medio=n3;
		}
	}else{
		menor=n3;
		if(n1<n2){
			maior=n2;
			medio=n1;
		}else{
			maior=n1;
			medio=n2;
		}
	}printf("\nEm ordem decrescente: %d, %d, %d.",maior, medio, menor);
}
