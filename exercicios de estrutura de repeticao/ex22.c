#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n, res, i, naoPrimo=0, j, l=0, vet[l];
	
	printf("Insira um n�mero inteiro: ");
	scanf("%d",&n);

	if((res=n%2)==0){
		printf("N�o � primo. (Par)");
	}else if((res=n%n)==0 && (res=n%1)==0){
		for(i=3; i<n; i+=2){ 
			if((res=n%i)==0){
				l++;
				//vet[l];
				for(j=l-1; j<l; j++){
					vet[j]=i;
				}
			}
		}
	}
		if(l>0){
	    	printf("\nN�o � primo, pois � divis�vel por %d n�meros: ",l);
	    	for(i=0; i<l; i++){
	    		printf("%d, ",vet[i]);
			}
		}else{
	    	printf("\n� primo. ");
		}
	}
