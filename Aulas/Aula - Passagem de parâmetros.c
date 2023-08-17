#include <stdio.h>
#include <conio.h>

int somar(int num, int num2){ //declaração de parametro (mesma funçao da variavel)
	int soma;
	soma = num + num2;
	return soma;
}

void main(){
	int num, num2;
	//A passagem de parametro eh enviar os valores de uma variavel para outro lugar
	
	printf("Digite o n1: ");
	scanf("%d",&num);
	printf("\nDigite o n2: ");
	scanf("%d",&num2);
	
	printf("\nA soma eh: %d", somar(num, num2)); //"Teletransportar" valor da variavel
	
}
