#include <stdio.h>
#include <conio.h>

/*Escreva um procedimento que leia 2 n�meros, ap�s a leitura somar e exibir o resultado. 
Este procedimento dever� ser chamado atrav�s do programa principal.*/

void Somar(){
	int num1, num2, soma;
	printf("Digite um numero: ");
	scanf("%d",&num1);
	printf("\nDigite um outro numero: ");
	scanf("%d",&num2);	
	
	soma = num1 + num2;
	
	printf("A soma de %d por %d resulta em %d", num1, num2, soma);
}

void main(){
	Somar();
}
