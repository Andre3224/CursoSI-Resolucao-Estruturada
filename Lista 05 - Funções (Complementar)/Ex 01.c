#include <stdio.h>
#include <conio.h>

/*. Faça uma função que leia um número inteiro e retorne 1 se ele for par ou 2 se for ímpar.*/

int numI(){
	int num, ehp;
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	ehp = num%2;
	if (ehp == 0){
		return 1;
	}else{
		return 2;
	}
}

void main(){
	int retorno;
	retorno = numI();
	printf("%d", retorno);
}
