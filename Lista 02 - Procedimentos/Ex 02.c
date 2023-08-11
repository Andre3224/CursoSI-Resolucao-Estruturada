#include <stdio.h>
#include <conio.h>

/*Escreva um procedimento que leia seu nome e após a leitura e exiba o nome lido. 
Este procedimento deverá ser chamado através do programa principal.*/

void lerNome(){
	char nome[50];
	printf("Informe seu nome: ");
	scanf("%s", nome);
	printf("O nome lido foi: %s", nome);
}

void main(){
	lerNome();
}
