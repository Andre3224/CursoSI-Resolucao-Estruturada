#include <stdio.h>
#include <conio.h>

/*POR REFERÊNCIA: Escreva um procedimento que receba a Largura e o 
Comprimento do quadrado/retângulo por parâmetro, 
calcule e retorne também por parâmetro a área (Area).*/

void calcArea(float *larg, float *comp, float *area){
	*area = (*larg * *comp);
}

void main(){
	float larg, comp, area=0;
	
	printf("\nDigite o valor da largura: ");
	scanf("%f", &larg);
	
	printf("\nDigite o valor da comprimento: ");
	scanf("%f", &comp);
	
	calcArea(&larg, &comp, &area);
	
	printf("\nA area do retangulo eh: %.2f",area);
}

