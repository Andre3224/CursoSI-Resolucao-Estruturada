#include <stdio.h>
#include <conio.h>

/*Escreva um procedimento que lei 3 números e ao final subtraia o primeiro do segundo e dívida o resultado pelo terceiro. 
Fazer a chamada no programa principal*/

void Calcular(){
	int num1, num2, num3, resultado1, resultadoF;
	
	printf("Digite um numero: ");
	scanf("%d",&num1);
	printf("Digite um numero: ");
	scanf("%d",&num2);
	printf("Digite um numero: ");
	scanf("%d",&num3);
	
	resultado1 = num1 - num2;
	resultadoF = resultado1/num3;
	
	printf("O resultado eh: %d", resultadoF);
	
}

void main(){
	Calcular();
}
