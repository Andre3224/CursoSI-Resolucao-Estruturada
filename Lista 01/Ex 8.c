#include <stdio.h>
#include <conio.h>

void main(){
	
	int num, soma;
	num = 0;
	soma = 0;
	
	while(soma<100){
		soma = soma + num;
		if (soma < 100)
			printf("\nSoma: %d", soma);
		
		num++;
		
	}
}
