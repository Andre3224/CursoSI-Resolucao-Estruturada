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
	
	areaC = 2*comprimento*largura + 2*comprimento*largura + 2*comprimento*altura;
	// AT = 2ab + 2ac + 2bc
	printf("\n A area total da sala eh: %.2f", areaC);
	quantidadeAz = areaC/1.5;
	
	printf("\n A quantidade de azulejos necessario eh: %.2f", quantidadeAz);

}
