#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, res, i, naoPrimo=0, j;
	
	printf("Insira um n�mero inteiro: ");
	scanf("%d",&n);

	if((res=n%2)==0){
		printf("N�o � primo. (Par)");
	}else if((res=n%n)==0 && (res=n%1)==0){
		for(i=3; i<n; i+=2){ 
			if((res=n%i)==0){
				naoPrimo++;
			}
		}
	}
    	if(res>0){
		printf("%d %d\n",res,naoPrimo);
		}if(naoPrimo>0){
	    	printf("N�o � primo, apenas �mpar.");	
		}else{
	    	printf("� primo. ");
		}
	}
