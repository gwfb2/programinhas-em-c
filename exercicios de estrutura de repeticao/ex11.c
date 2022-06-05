#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	int i, n1, n2, maior, menor, sum;
	
	printf("Insira dois números: ");//oh o frances do carajkkkkkkkkkkkkkk
	scanf("%d %d",&n1,&n2);
	printf("Números no intervalo entre %d e %d:\n",n1,n2);
	
	if(n1<n2){
		menor=n1;
		maior=n2;
	}else{
		menor=n2;
		maior=n1;
	}
	for(i=menor+1; i<maior; i++){
		printf("%d ",i);
		sum=sum+i;
	}
	printf("\n\nA soma dos números no intervalo é: %d",sum);
}
