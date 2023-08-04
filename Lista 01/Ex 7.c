#include <stdio.h>
#include <conio.h>

void main(){
	int i, num, soma=0,par=0;
	
	num = 50;
	while (num <= 80){
		printf("\n%d", num);
		par = num%2;
		
		if (par == 0){
			soma = soma + num;
		}
	
		num++;
	}
	
	printf("\nA soma dos numeros pares eh: %d", soma);
}
