#include <stdio.h>
#include <conio.h>
/*     Fa�a um programa que:
        a. leia os valores de A, B;
        b. se o n�mero A e B for pares, fazer o procedimento soma;
        c. se o n�mero A e B forem impares, fazer a fun��o subtra��o;
        d. se o n�mero A for PAR e B for IMPAR, fazer a m�dia de ambos os n�meros;
        e. se o n�mero A for IMPAR e B for PAR, fazer uma fun��o para exibir 
		o maior n�mero;*/

void soma(int A, int B){
	int resultado;
	
	resultado = A + B;
	
	printf("\nComo A e B sao pares -> A + B = %d", resultado);
}




void main(){
	int A, B, TIPOA, TIPOB;
	
	printf("\nDigite um numero: ");
	scanf("%d",&A);
	
	if (A%2 == 0){
		TIPOA = 0;
	}else{
		TIPOA = 1;
	}
	
	printf("\nDigite um numero: ");
	scanf("%d",&B);
	
	if (A%2 == 0){
		TIPOB = 0;
	}else{
		TIPOB = 1;
	}
	
	if (TIPOA == 0 && TIPOB == 0 ){
		soma(A, B);
	}
}
