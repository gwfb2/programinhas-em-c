#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float sum=0, preco;
	
	printf("Panificadora do Sr. Manuel - Tabela de Preços\n");
	printf("------------------------------------------------------------------\n\n");
	printf("Informe o preço do pão: ");
	scanf("%f",&preco);
	printf("\n");
	
	for(i=1; i<=50; i++){
		sum+=preco;
		printf("%d unidade(s): R$ %.2f\n",i,sum);
	}
}
