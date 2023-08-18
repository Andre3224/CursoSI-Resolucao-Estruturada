#include <stdio.h>
#include <conio.h>

int somar(int num, int num2){ //declaração de parametro (mesma funçao da variavel) -> Passagem por valor
	int soma;
	soma = num + num2;
	return soma;
}
int mult(int *num, int *num2){
	int prod;
	*num = *num + 2;
	prod = *num * *num2;	
	return prod;
}
void main(){
	int num, num2;
	//A passagem de parametro eh enviar os valores de uma variavel para outro lugar
	
	printf("Digite o n1: ");
	scanf("%d",&num);
	printf("\nDigite o n2: ");
	scanf("%d",&num2);
	printf("Antes da alteraao \nnum = %d \n num2 = %d", num, num2);
	printf("\nA soma eh: %d", somar(num, num2)); //"Teletransportar" COPIA valor da variavel para o modulo somar, o conteudo original é mantido
	//Passagem por referencia
	printf("\nO produto eh: %d", mult(&num, &num2)); //Para enviar por referencia é preciso enviar com &
	printf("\n Apos a passagem: num1 = %d", num); //passagem por Referencia
}
