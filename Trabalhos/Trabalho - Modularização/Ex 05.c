#include <stdio.h>
#include <conio.h>

/*POR REFERÊNCIA: Escreva um procedimento que receba por parâmetro os 
valores de A e  B e retorne os valores invertidos, ou seja, A receberá oconteúdo de B 
e B receberá o conteúdo de A. Os parâmetros deverão ser por referência.*/


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
