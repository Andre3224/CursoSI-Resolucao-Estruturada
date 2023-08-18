/*4.	Escreva uma função que receba a Largura e o Comprimento do quadrado/retângulo, calcule e retorne a área.*/

#include <stdio.h>
#include <conio.h>

float calcarea(int Larg, int Comp){
	float area;
	area = (Larg * Comp);
	return area;
}

void main(){
	float Larg, Comp;
	
	printf("\nDigite a medida da Largura: ");
	scanf("%f",&Larg);
	printf("\nDigite a medida do Comprimento: ");
	scanf("%f",&Comp);
	
	printf("A area do quadrado/retangulo eh: %.2f", calcarea(Larg, Comp));
}
