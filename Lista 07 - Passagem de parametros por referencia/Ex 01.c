#include <stdio.h>
#include <conio.h>
/*1.	Escreva um procedimento que receba por parâmetro 
os valores de A e  B e retorne os valores invertidos, ou seja,
 A receberá o conteúdo de B e B receberá o conteúdo de A. 
O parâmetros deverão ser por referência.*/


void invert(int *A, int *B){
	int aux;
	aux = *A;
	*A = *B;
	*B = aux;
}
void main(){
	int A, B, C, D;
	printf("Passagem parametros por REFERENCIA");
	printf("\nDigite um valor para A: ");
	scanf("%d",&A);
	printf("\nDigite um valor para B: ");
	scanf("%d",&B);
	
	printf("\nValor antes da INVERSAO");
	printf("\n A = %d", A);
	printf("\n B = %d", B);
	
	invert(&A, &B);
	
	printf("\nValor apos da INVERSAO");
	printf("\n A = %d", A);
	printf("\n B = %d", B);
}
