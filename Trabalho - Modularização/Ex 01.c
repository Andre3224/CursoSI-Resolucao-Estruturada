#include <stdio.h>
#include <conio.h>
/*Faça um procedimento que receba por parâmetros 2 valores. 
O usuário deverá escolher qual opção aritmética deverá ser realizado. 
(criar um menu com as opções dentro do procedimento)*/

void Calculadora(float num, float num2){
	int op;
	float resultado, resto;
	
	do{
		printf("1 - Somar \n2 - Subtracao \n3 - Multiplicacao \n4 - Divisao \n0 - Sair");
		printf("\nEscolha uma opcao: ");
		scanf("%d",&op);
		
		switch (op){
			case 1:
				resultado = num + num2;
				printf("\n%.2f + %.2f = %.2f", num, num2, resultado);
				break;
			case 2:
				resultado = num - num2;
				printf("\n%.2f - %.2f = %.2f", num, num2, resultado);
				break;
			case 3:
				resultado = num * num2;
				printf("\n%.2f * %.2f = %.2f", num, num2, resultado);
				break;
			case 4:
				resultado = num / num2;
				printf("\n%.2f / %.2f = %.2f", num, num2, resultado);
				break;
			default:
				break;
		}
		printf("\n\n");
		system("pause");
		system("cls");
	}while(op!=0);
	
}

void main(){
	float num, num2;
	int cont;
	do{	
		printf("\n <<< Calculadora >>>");
		
		printf("\nDigite o numero N1: ");
		scanf("%f",&num);
		
		printf("\nDigite o numero N2: ");
		scanf("%f",&num2);
		
		Calculadora(num, num2);
		
		printf("\nOutro numero? Clique qualquer tecla para continuar ou 0 - Nao\n");
		scanf("%d",&cont);
		
		system("pause");
		system("cls");
		
	}while(cont!=0);
}
