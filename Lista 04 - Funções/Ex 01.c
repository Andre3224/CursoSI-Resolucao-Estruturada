#include <stdio.h>
#include <conio.h>

/* Escreva uma fun��o que leia 2 n�meros, ap�s a leitura somar e retornar o resultado. 
Est� fun��o dever� ser chamado atrav�s do programa principal. Exibir conte�do retornado.*/


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
