#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void calc(float num, float num2, char op){
	float resultado;
	if (op == '*'){
		resultado = num * num2;
		printf("%.2f * %.2f = %.2f \n\n", num, num2, resultado);
	}else if(op == '/'){
		resultado = num / num2;
		printf("%.2f / %.2f = %.2f \n\n", num, num2, resultado);
	}else if(op == '+'){
		resultado = num + num2;
		printf("%.2f + %.2f = %.2f \n\n", num, num2, resultado);
	}else if(op == '-'){
		resultado = num - num2;
		printf("%.2f - %.2f = %.2f \n\n", num, num2, resultado);
	}else{
		printf("Erro, verifique as opcoes!")
	}
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
					calc(num, num2, op);
					break;
				case '/':
					calc(num, num2, op);
					break;
				case '+':
					calc(num, num2, op);
					break;
				case '-':
					calc(num, num2, op);
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
		scanf(" %d\n\n", &i);
		system("pause");
		system("cls");
	}while(i != 0);
}
