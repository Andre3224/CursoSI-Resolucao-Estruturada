#include <stdio.h>
#include <conio.h>

void main(){
	int i, num, soma=0,par=0;
	
	num = 50;
	while (num <= 80){
		
		par = num%2;
		
		if (par == 0){
			soma = soma + num;
		}
	
		num++;
	}
	
	printf("A soma dos numeros pares eh: %.2f", soma);
}
