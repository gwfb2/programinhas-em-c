#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int paisA=80000, paisB=200000, i;
	
	for(i=0; paisA<=paisB; i++){
		paisA=paisA*1.03;
		paisB=paisB*1.015;
		printf("\nANO %d --- POP. FINAL A - %d ---------- POP FINAL B - %d",i,paisA,paisB);
	}
	
	printf("\n\nSer�o necess�rios %d anos para que a pop. do pa�s A ultrapasse a pop. do pa�s B. ",i);
}
