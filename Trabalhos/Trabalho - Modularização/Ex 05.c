#include <stdio.h>
#include <conio.h>

/*POR REFER�NCIA: Escreva um procedimento que receba por par�metro os 
valores de A e  B e retorne os valores invertidos, ou seja, A receber� oconte�do de B 
e B receber� o conte�do de A. Os par�metros dever�o ser por refer�ncia.*/


void troca(int *A, int *B){
	int aux;
	aux = *A;
	*A = *B;
	*B = aux;
}
void main(){
	int A, B;
	
	printf("\nDigite o valor para A: ");
	scanf("%d",&A);
	printf("\nDigite o valor para B: ");
	scanf("%d",&B);
	
	printf("\n--- Antes ---");
	printf("\n A = %d", A);
	printf("\n B = %d", B);
	
	troca(&A,&B);
	
	printf("\n--- Troca ---");
	printf("\n A = %d", A);
	printf("\n B = %d", B);
}
