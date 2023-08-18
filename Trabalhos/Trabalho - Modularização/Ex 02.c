#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void mult(float num,float num2){
	float resp;
	
	resp = num * num2;
	
	printf("\n %.2f * %.2f = %.2f\n\n", num, num2, resp);
}

void divisao(float num,float num2){
	float resp;
	
	resp = num / num2;
	
	printf("\n %.2f / %.2f = %.2f\n\n", num, num2, resp);
}

void soma(num, num2){
	float resp;
	
	resp = num + num2;
	
	printf("\n %.2f + %.2f = %.2f\n\n", num, num2, resp);
}

void subtracao(num, num2){
	float resp=0;
	
	resp = num - num2;
	
	printf("\n %.2f - %.2f = %.2f\n\n", num, num2, resp);
}


void main(){
	float num, num2;
	char op='1';
	int i;
	do{
		printf("\nDigite o Num1: ");
		scanf("%f",&num);
		printf("\nDigite o Num2: ");
		scanf("%f",&num2);
		
		do{
	
			printf("\nDigite a Operacao: \n * - Multiplicacao \n / - Divisao \n + - Adicao \n - - Subtracao");
			printf("\nDeseja fazer outra operacao? 0 - Sair \n");
			scanf(" %c",&op);
			
			
			switch (op){
				case '*':
					mult(num, num2);
					break;
				case '/':
					divisao(num, num2);
					break;
				case '+':
					soma(num, num2);
					break;
				case '-':
					subtracao(num, num2);
					break;
				case '0':
					break;
				default:
					printf("Opcao Invalida \n\n");
					break;	
			}
		
			system("pause");
			system("cls");
		
		}while(op != '0');
		
		printf("Deseja continuar? 0 - Sair: ");
		scanf("%d\n\n", &i);
		system("pause");
		system("cls");
	}while(i != '0');
}

