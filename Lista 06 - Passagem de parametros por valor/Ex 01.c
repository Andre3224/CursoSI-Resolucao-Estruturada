#include <stdio.h>
#include <conio.h>
/*1.	Escreva uma função, que receba por parâmetro dois valores A e B, calcule e retorne a soma dos valores.*/
int soma(int num1, int num2){
	int resp;
	resp = num1 + num2;
	return resp;
}
void main(){
	int num1, num2;
	
	printf("\nDigite o numero 1: ");
	scanf("%d",&num1);
	printf("\nDigite o numero 2: ");
	scanf("%d",&num2);
	
	printf("A soma entre %d e %d eh: %d", num1, num2, soma(num1, num2));
}
