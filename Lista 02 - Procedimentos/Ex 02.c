#include <stdio.h>
#include <conio.h>

/*Escreva um procedimento que leia seu nome e ap�s a leitura e exiba o nome lido. 
Este procedimento dever� ser chamado atrav�s do programa principal.*/

void lerNome(){
	char nome[50];
	printf("Informe seu nome: ");
	scanf("%s", nome);
	printf("O nome lido foi: %s", nome);
}

void main(){
	lerNome();
}
