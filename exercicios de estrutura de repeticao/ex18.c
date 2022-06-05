#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//oferecimento tematica de nerd!!!! obrigado pela ajuda

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, maior, menor, sum, grava=0;
	char op;
	
	do{
		printf("Insira um número inteiro: ");
		scanf("%d",&num);
		
		sum=sum+num;
		
		if(grava==0){
			maior=num;
			menor=num;
		}
		grava++;
		
		if(num>maior){
			maior=num;
		}else if(num<menor){
			menor=num;
		}
		printf("Deseja repetir? (S/N) ");
		scanf(" %c",&op);
	}while(op=='S'||op=='s');
	
	printf("\nMaior: %d",maior);
	printf("\nMenor: %d",menor);
	printf("\nSoma: %d",sum);
}	

