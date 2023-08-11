#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float CalcArea(){
	float PI=3.14, raio, resul;
	printf("Digite o valor do raio do circulo: ");
	scanf("%f",&raio);
	
	resul = PI * raio * raio;
	
	return resul;
}
float CalcPer(){
	float PI=3.14, raio, resul;
	
	printf("Digite o valor do raio do circulo: ");
	scanf("%f",&raio);
	
	resul = PI * 2 * raio;
	
	return resul;
	
}
void menu(){
	int op;
	float retorno;
	
	do{
		retorno = 0;
		system("cls");
		printf("\n1 - Calcular Area do Circulo");
		printf("\n2 - Calcular Perimetro do Circulo");	
		printf("\n3 - Finalizar \n");
		scanf("%d", &op);
		
		switch (op){
			case 1:
				retorno = CalcArea();
				printf("A area do circulo eh: %.2f \n \n", retorno);
				system("pause");
				system("cls");
				break;
			case 2:
				retorno = CalcPer();
				printf("O perimetro do circulo eh: %.2f \n \n", retorno);
				system("pause");
				system("cls");
				break;
			case 3:
				break;
			default:
				printf("Opcao Invalida");
				system("pause");
				system("cls");
				break;	
		};
		
	}while(op != 3);
	
	
	
}
void main(){
	menu();
}
