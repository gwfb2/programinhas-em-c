#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float pA, pB, tA, tB;
	
	printf("Insira as popula��es dos pa�ses A e B respectivamente: ");
	scanf("%f %f",&pA,&pB);
	
	printf("Insira as taxas de crescimento de A e B respectivamente: ");
	scanf("%f %f",&tA,&tB);
	
	if(pA<pB && tA<tB){
		printf("\nA popula��o de A n�o ultrapassar� a de B. ");
	}
	else if(pB<pA && tB<tA){
		printf("\nA popula��o de B n�o ultrapassar� a de A. ");
	}
	else if(pA>pB && tB>tA || pB>pA && tA>tB){
    	printf("\nANO 0 --- POP. INICIAL de A - %.0f ---------- POP. INICIAL de A - %.0f\n",pA,pB);
	   	if(pA<pB){
	    	for(i=1; pA<=pB; i++){
				pA=pA*tA;
				pB=pB*tB;
				printf("ANO %d --- POP. FINAL de A - %.0f ---------- POP FINAL de B - %.0f\n",i,pA,pB);
			}
		}else if(pB<pA){
	    	for (i=1; pB<=pA; i++){
				pA=pA*tA;
				pB=pB*tB;
				printf("ANO %d --- POP. FINAL de A - %.0f ---------- POP FINAL de B - %.0f\n",i,pA,pB);
	    	}
		}
		printf("\n\n");
	
		if(pA>pB){
			printf("A popula��o de A ultrapassar� a de B em %d anos. ",i-1);
		}
		else if(pB>pA){
			printf("A popula��o de B ultrapassar� a de A em %d anos. ",i-1);
		}
	}
	
	/*printf("Insira a taxa de A: ");
	scanf("%f",&tA);
	printf("De B: ");
	scanf("%f",&tB);*/
	
	/*if(menor>=Maior){
    	printf("\n\nSer�o necess�rios %d anos para que a pop. de %d ultrapasse a pop. de %d. ",i-1, paism, paisM);
	}
	else{
		printf("A popula��o do pa�s %d n�o ultrapassar� a pop. do pa�s %d.",paism,paisM);
	}*/
	
	
	/*for(i=1; popA<=popB; i++){
		popA=popA*taxaA;
		popB=popB*taxaB;
		printf("ANO %d --- POP. FINAL A - %.0f ---------- POP FINAL B - %.0f\n",i,popA,popB);
	}printf("\n\nSer�o necess�rios %d anos para que a pop. de A ultrapasse a pop. de B. ",i-1);*/
	
		/*if(p1<p2){
		paism=1;
		paisM=2;
		menor=p1;
		taxaCorrm=t1;
		Maior=p2;
		taxaCorrM=t2;
	}
	else{
		paism=2;
		paisM=1;
		menor=p2;
		taxaCorrm=t2;
		Maior=p1;
		taxaCorrM=t1;
	}*/
	
	
}
