#include <stdio.h>
#include <conio.h>

/* Escreva uma função que leia 2 números, após a leitura somar e retornar o resultado. 
Está função deverá ser chamado através do programa principal. Exibir conteúdo retornado.*/


int Ler_Dois_Num(){
	int num1, num2, soma;
	printf("Digite um numero: ");
	scanf("%d",&num1);
	printf("Digite um numero: ");
	scanf("%d",&num2);
	
	soma = num1 + num2;
	
	return soma;
}
void main(){
	int retorno;
	
	retorno = Ler_Dois_Num();
	
	printf("A soma eh: %d", retorno);
}
