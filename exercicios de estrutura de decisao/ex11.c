#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float sal, valAum, salAum, aum;
	int percAum;
	
	printf("Insira o seu salário: R$ ");
	scanf("%f",&sal);
	
	if(sal<=0){
		printf("\n\nValor inválido.");
	}else{
	    if(sal>0 && sal<=700){
		    aum=0.2;
	    }else if(sal>700 && sal<=900){
		    aum=0.15;
	    }else if(sal>900 && sal<=1500){
		    aum=0.1;
	    }else{
	    	aum=0.05;
		}
		valAum=sal*aum;
	    salAum=sal+valAum;
    	percAum=aum*100;
    	
    	printf("\n\nSalário antes do reajuste: R$ %.2f",sal);
    	printf("\nPercentual de aumento aplicado: %d",percAum);
    	printf("\nValor do aumento: R$ %.2f",valAum);
    	printf("\nSalário após o aumento: R$ %.2f",salAum);
	}
	
	
	
	
}
