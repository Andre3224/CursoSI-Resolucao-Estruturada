#include <stdio.h>
#include <conio.h>

/*Escreva um procedimento que leia seu nome e após a leitura e exiba o nome lido. 
Este procedimento deverá ser chamado através do programa principal.*/

void lernome(){
	char nome;
	printf("Digite o seu nome: ");
	scanf("%c",&nome);
	printf("O nome lido foi: %d", nome);
}

void main(){
	lernome();
}
