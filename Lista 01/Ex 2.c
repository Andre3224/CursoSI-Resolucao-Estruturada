#include <stdio.h>
#include <conio.h>

void main(){
	
	float areaC, comprimento, largura, altura,quantidadeAz;
	
	printf("<<< Entrada de medidas >>>");
	printf("\nDigite a medida do comprimento: ");
	scanf("%f",&comprimento);
	printf("\nDigite a medida do largura: ");
	scanf("%f",&largura);
	printf("\nDigite a medida do altura: ");
	scanf("%f",&altura);
	
	areaC = comprimento*largura*altura;
	
	quantidadeAz = areaC/1.5;
	
	printf("\n A quantidade de azulejos necessario eh: %0.2f", quantidadeAz);

}
