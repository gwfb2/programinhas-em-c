#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int turmas, alunos, aux=0;
	float total=0;
	
	printf("Quantas turmas? ");
	scanf("%d",&turmas);
	printf("\n");
	
	do{
		printf("Qtd de alunos para a turma %d: ",aux+1);
		scanf("%d",&alunos);
		
		if(alunos>40){
			printf("Cada turma pode apenas conter até 40 alunos.\n");
		}else{
			total=total+alunos;
			aux++;
		}
	}while(aux<turmas);
	
	total=total/aux;
	printf("\nMédia de %.1f alunos por turma. ",total);

}
