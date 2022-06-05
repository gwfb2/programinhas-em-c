#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int res=1, n, i;
	
	printf("Insira um número para ver seu fatorial: ");
	scanf("%d",&n);
	printf("%d! = ",n);
	
	for(i=n; i>=1; i--){
		res=res*i;
		if(i==1){
			printf("%d ",i);
		}else{
	    	printf("%d x ",i);
		}
	}
	printf("= %d",res);
}
