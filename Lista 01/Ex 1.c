// 1.	Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.

#include <stdio.h>
#include <conio.h>

void main(){

	float raio, area;
	printf("<<< Calcular area do circulo >>>")
	printf("Digite a medida do raio: ");
	scanf("%f",&raio);
	
	area = (3.14*raio*raio);
	
	printf("A area total eh: %.2f", area);
}
