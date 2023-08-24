#include <stdio.h>
#include <conio.h>
//Passagem por referencia
void invert(int *A, int *B){
	int aux;
	aux = *A;
	*A = *B;
	*B = aux;
}
//passagem por valor
void invert2(int C, int D){
	int aux;
	aux = C;
	C = D;
	D = aux;
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
	
	printf("\n\n\n-------------------------------------");
	printf("\nPassagem parametros por VALOR");
	
	printf("\nDigite um valor para A: ");
	scanf("%d",&C);
	printf("\nDigite um valor para B: ");
	scanf("%d",&D);
	
	printf("\nValor antes da INVERSAO");
	printf("\n C = %d", C);
	printf("\n D = %d", D);
	
	invert2(C, D);
	
	printf("\nValor apos da INVERSAO");
	printf("\n C = %d", C);
	printf("\n D = %d", D);
}
