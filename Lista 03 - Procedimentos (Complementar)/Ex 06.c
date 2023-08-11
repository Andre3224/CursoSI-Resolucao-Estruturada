#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void posNeg(){
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if (num > 0){
		printf("\nPositivo");
	}else if(num<0){
		printf("\nNegativo");
	}else{
		printf("\nNumero Neutro (0)");
	}
}

void main(){
	posNeg();
}
