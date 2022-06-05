#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float area, totalLitros, totalLatas, totalGaloes, litrosLatas, litrosGaloes, restoLitrosLata, restoLitrosGaloes;
	int latasArr, galoesArr, precoLatas, precoGaloes, latasFloor, galoesCeil, precoMix;
	
	printf("Insira o valor da �rea a ser pintada em m2: ");
	scanf("%f",&area);
	
	//c�lculo de litros, latas e gal�es necess�rios
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
	
	//pre�o das latas e gal�es
	precoLatas=latasArr*80;
	precoGaloes=galoesArr*25;
	
	//printf infos e desperdicio
	printf("\nLitros necess�rios: %.1f L",totalLitros);
	
	//situ 1 - latas
	printf("\n\nLatas: \n - Quantidade: %d \n - Pre�o total: R$ %d",latasArr, precoLatas);
	//situ 2 - galoes
	printf("\n\nGal�es: \n - Quantidade: %d \n - Pre�o total: R$ %d",galoesArr, precoGaloes);
	//situ 3 - latas e galoes
	double floor(double totalLatas);
	latasFloor=floor(totalLatas);//floor da qtd de latas p/ dar espa�o p/os gal�es
	
	restoLitrosLata=totalLitros-(latasFloor*18);
	restoLitrosGaloes=restoLitrosLata/3.6;
	
	double ceil(double restoLitrosGaloes);
	galoesCeil=ceil(restoLitrosGaloes);//ceiling da qtd de gal�es p/ n�o faltar tinta
	
	printf("\n\nMix de gal�es e latas: \n - Qtd. latas: %d \n - Qtd. gal�es: %d",latasFloor, galoesCeil);
	precoMix=(latasFloor*80)+(galoesCeil*25);
	printf("\n - Pre�o Total: R$ %d",precoMix);
}
