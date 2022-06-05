#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, maior, menor, sum, grava=0;
	char op;
	
	do{
		printf("Insira um número inteiro entre 0 e 1000: ");
		scanf("%d",&num);
		
		if(num<0 || num>1000){
			printf("Número inválido. ");
		}else{
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
		}
		printf("Deseja repetir? (S/N) \n");
		scanf(" %c",&op);
	}while(op=='S'||op=='s');
	
	printf("\nMaior: %d",maior);
	printf("\nMenor: %d",menor);
	printf("\nSoma: %d",sum);
}	

