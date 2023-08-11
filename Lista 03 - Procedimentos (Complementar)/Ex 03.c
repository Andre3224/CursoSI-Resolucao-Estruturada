#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void ehpar(){
	int num, ParImp;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	ParImp = num%2;
	if (ParImp == 0){
		printf("O numero eh par!");
	}else{
		printf("O numero eh Impar!");
	}
}
void main(){
	ehpar();
}
