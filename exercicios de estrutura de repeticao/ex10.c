#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int i, n1, n2, maior, menor;
	
	printf("Please enter two numbers: \n");//oh o frances do carajkkkkkkkkkkkkkk
	scanf("%d %d",&n1,&n2);
	
	if(n1<n2){
		menor=n1;
		maior=n2;
	}else{
		menor=n2;
		maior=n1;
	}
	for(i=menor+1; i<maior; i++){
		printf("\n%d",i);
	}
}
