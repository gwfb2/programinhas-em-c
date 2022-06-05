#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, res, i=5, naoPrimo=0, j, ini, div;
	
	printf("Deseja ver os números primos de 1 a: ");
	scanf("%d",&n);
    printf("\n");
    printf("2, 3, ");
    
    //determinar os primos no intervalo
    while(i<=n){
    	ini=3;
    	for(j=ini; j<i; j+=2){
    		res=i%j;
    		div++;
    		if(res==0){
    			naoPrimo++;
			}
		}if(naoPrimo==0){
	    	printf("%d, ",i);
		}
		i+=2;
		naoPrimo=0;
   	}
   	printf("\nNúmero de divisões: %d",div);
}
