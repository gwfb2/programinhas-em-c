#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2, n3, maior, menor;
	
	printf("Insira três números:\n");
	scanf("%d %d %d",&n1, &n2, &n3);
	
	if(n1>n2 && n1>n3){
	    maior=n1;
	    if(n2>n3){
		    menor=n3;
        }else{
    	    menor=n2;
		}
	}else if(n2>n3 && n2>n1){
		maior=n2;
	    if(n1>n3){
	    	menor=n3;
		}else{
			menor=n1;
		}
	}else{
		maior=n3;
		if(n1>n2){
			menor=n2;
		}else{
			menor=n1;
		}
	}
	printf("\nMaior número: %d",maior);
	printf("\nMenor número: %d",menor);

}
