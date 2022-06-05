#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int base, ex, res=1, i;
	
	printf("Insira a base e o expoente: ");
	scanf("%d %d",&base,&ex);
	
	for(i=1; i<=ex; i++){
		res*=base;
	}
	printf("%d elevado a %d é %d.",base,ex,res);
}
