#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float area, totalLitros, totalLatas, totalGaloes, totalLitrosGaloes;
	int latasArr, galoesArr, precoLatas, precoGaloes, precoTotal, totalLitrosLatas;
	
	printf("Valor em metros quadrados da área a ser pintada: ");
	scanf("%f",&area);
	
	totalLitros=(area/6)*1.1;
	
	totalLatas=totalLitros/18;
	totalGaloes=totalLitros/3.6;
	
	double ceil(double totalLatas);
	latasArr=ceil(totalLatas);
	
	double ceil(double totalGaloes);
	galoesArr=ceil(totalGaloes);
	
	precoLatas=latasArr*80;
	precoGaloes=galoesArr*25;
	
	totalLitrosLatas=18*latasArr;
	totalLitrosGaloes=3.6*galoesArr;
	
	while(totalLitros<=totalLitrosLatas){
	    totalLitrosLatas=totalLitros-18;
	}
	while(totalLitrosGaloes<=totalLitrosLatas){
	    totalLitrosGaloes=totalLitrosLatas-3.6;
	}
	precoTotal=precoLatas+precoGaloes;
	
	printf("Apenas latas: \n - Qtd de latas: %d \n - Preço total: R$ %d",latasArr,precoLatas);
	printf("\n\nApenas galões: \n - Qtd de galões: %d \n - Preço total: R$ %d",galoesArr,precoGaloes);
	printf("\n\nMix: \n - Latas: %d \n - Galões: %d \n - Preço total: R$ %d",latasArr, galoesArr,precoTotal);
	
	
}
