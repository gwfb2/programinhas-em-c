#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float p1, p2, p3, barato;
	
	printf("Insira o preço dos produtos: R$ ");
	scanf("%f %f %f",&p1, &p2, &p3);
	
	if(p1<p2 && p1<p3){
		barato=p1;
	}else if(p2<p3 && p2<p1){
		barato=p2;
	}else{
		barato=p3;
	}
	printf("\nCompre o produto com o valor R$ %.2f.",barato);
}
