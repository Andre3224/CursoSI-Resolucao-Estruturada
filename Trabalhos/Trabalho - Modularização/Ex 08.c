#include <stdio.h>
#include <conio.h>

/*POR REFER�NCIA: Escreva um procedimento que receba a Largura e o 
Comprimento do quadrado/ret�ngulo por par�metro, 
calcule e retorne tamb�m por par�metro a �rea (Area).*/

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

