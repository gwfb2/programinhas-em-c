#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float area, totalLitros, totalLatas, totalGaloes, litrosLatas, litrosGaloes, restoLitrosLata, restoLitrosGaloes;
	int latasArr, galoesArr, precoLatas, precoGaloes, latasFloor, galoesCeil, precoMix;
	
	printf("Insira o valor da área a ser pintada em m2: ");
	scanf("%f",&area);
	
	//cálculo de litros, latas e galões necessários
	totalLitros=area/6;
	
	totalLatas=totalLitros/18;
	totalGaloes=totalLitros/3.6;
	//arredondamento
	double ceil(double totalLatas);
	latasArr=ceil(totalLatas);
	
	double ceil(double totalGaloes);
	galoesArr=ceil(totalGaloes);
	
	litrosLatas=latasArr*18;
	litrosGaloes=galoesArr*3.6;
	
	//preço das latas e galões
	precoLatas=latasArr*80;
	precoGaloes=galoesArr*25;
	
	//printf infos e desperdicio
	printf("\nLitros necessários: %.1f L",totalLitros);
	
	//situ 1 - latas
	printf("\n\nLatas: \n - Quantidade: %d \n - Preço total: R$ %d",latasArr, precoLatas);
	//situ 2 - galoes
	printf("\n\nGalões: \n - Quantidade: %d \n - Preço total: R$ %d",galoesArr, precoGaloes);
	//situ 3 - latas e galoes
	double floor(double totalLatas);
	latasFloor=floor(totalLatas);//floor da qtd de latas p/ dar espaço p/os galões
	
	restoLitrosLata=totalLitros-(latasFloor*18);
	restoLitrosGaloes=restoLitrosLata/3.6;
	
	double ceil(double restoLitrosGaloes);
	galoesCeil=ceil(restoLitrosGaloes);//ceiling da qtd de galões p/ não faltar tinta
	
	printf("\n\nMix de galões e latas: \n - Qtd. latas: %d \n - Qtd. galões: %d",latasFloor, galoesCeil);
	precoMix=(latasFloor*80)+(galoesCeil*25);
	printf("\n - Preço Total: R$ %d",precoMix);
}
