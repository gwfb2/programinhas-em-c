#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>//biblioteca de manipula��o de strings

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char user[15], pass[15];
	int equal;
	
	do{
		printf("Insira seu nome de usu�rio: ");
    	fgets(user, 15, stdin);//func. de leitura de string(nome da string, no. de caracteres a serem lidos, disp. de entrada)
	
    	printf("Insira sua senha: ");
    	fgets(pass, 15, stdin);
    	
    	//printf("\nNome de usu�rio: %s",user);
    	//printf("Senha: %s",pass);
    	
    	equal=strcmp(user,pass);//funcao de comparacao de duas strings
    	
		if(equal==0){
    		printf("Nome de usu�rio e senha n�o podem ser iguais. \n\n");
		}
	}while(equal==0);//repetir enquanto o nome e senha forem iguais
	
	printf("\nLogado(a). ");
	
	
}
