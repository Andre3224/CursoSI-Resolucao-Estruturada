#include <stdio.h>
#include <conio.h>

/*Escreva um procedimento que leia seu nome e em uma segunda variável leia seu sobrenome e 
ao final exiba seu nome concatenado com seu sobrenome. 
Este procedimento deverá ser chamado através do programa principal.*/

void exibirNome(){
	char nome[50], sobrenome[50];
	
	printf("Digite o seu nome: ");
	scanf("%s", nome);
	printf("Digite o seu sobrenome: ");
	scanf("%s", sobrenome);
	
	printf("Bem vindo Sr. %s %s", nome, sobrenome);
}

void main(){
	exibirNome();
}
