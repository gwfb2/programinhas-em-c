#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	do{
	    printf("Insira um n�mero de 0 a 10 ou -1 para parar: ");
	    scanf("%d",&n);
	
	    if(n<-2||n>10){
		    printf("Valor inv�lido. ");
	    }
    }while(n!=-1);
}
