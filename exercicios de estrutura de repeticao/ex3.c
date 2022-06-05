#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>//converter minusculo em maiusculo

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char nome[15], sexo, estC, sexoM, estCM;
	int tam, idade, sal;
	
	do{
		printf("\nInsira seu nome: ");
    	fgets(nome, 15, stdin);
    	tam=strlen(nome);//armazena a qtd de caracteres na string referida
	
    	if(tam<4){//incluindo a contagem do caracter nulo no fim do vetor
    		printf("O nome deve conter 3 ou mais caracteres. ");
    	}
	}while(tam<4);
	
	do{
		printf("\nInsira sua idade: ");
		scanf("%d",&idade);
		
		if(idade<0 || idade>150){
			printf("Idade inválida. ");
		}
	}while(idade<0 || idade>150);
	
	do{
		printf("\nInsira seu salário: R$ ");
		scanf("%d",&sal);
		
		if(sal<0){
			printf("Salário inválido. ");
		}
	}while(sal<0);
	
	do{
		printf("\nInsira seu sexo (M/F): ");
		scanf(" %c",&sexo);
		sexoM=toupper(sexo);//ctype. a funcao toUpper converte de min. pra mai.
		
		if(sexoM!='M' && sexoM!='F'){
			printf("Sexo inválido. ");
		}
	}while(sexoM!='M' && sexoM!='F');
	
	do{
		printf("\nInsira seu estado civil (S/C/V/D): ");
		scanf(" %c",&estC);
		estCM=toupper(estC);
		
		if(estCM!='S' && estCM!='C' && estCM!='V' && estCM!='D'){
			printf("Valor inválido. ");
		}
	}while(estCM!='S' && estCM!='C' && estCM!='V' && estCM!='D');
	
}
