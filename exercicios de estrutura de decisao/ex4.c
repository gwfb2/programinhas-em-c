#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char l;
	
	printf("Digite uma letra: ");
	scanf("%c",&l);
	
	if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'){
		printf("� uma vogal.");
	}else{
		printf("� uma consoante.");
	}
}
