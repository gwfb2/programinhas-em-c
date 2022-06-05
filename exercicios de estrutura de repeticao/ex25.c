#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade, x;
	float totalIdade, media;
	char op;
		
	do{
		printf("Insira a idade: ");
		scanf("%d",&idade);
		
		totalIdade=totalIdade+idade;
		x++;
		
		printf("Deseja repetir? (S/N): ");
		scanf(" %c",&op);
		printf("\n");
	}while(op=='s');
	
	media=totalIdade/x;

	if(media<0){
		printf("\nDados inválidos. ");
	}else{
    	printf("A idade média da turma é: %.1f",media);
		printf("\nA turma é ");
		if(media >= 0 && media <=25){
			printf("jovem. ");
		}else if(media>25 && media<=60){
			printf("adulta. ");
		}else{
			printf("idosa. ");
		}
	}
	
}
