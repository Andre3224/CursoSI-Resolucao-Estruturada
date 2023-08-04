#include <stdio.h>
#include <conio.h>
//5.[FOR] Criar um algoritmo em que leia dez números inteiros e imprima o maior 
//e o segundo maior número da lista.
void main(){
	int maior= 0, maior2= 0, i, num=0;
	
	for (i=0;i<4;i++){
		printf("Entre com um numero: ");
		scanf("%d",&num);
		
		if (num > maior){
			
			maior = num;
			maior2 =maior;
		}else{
			if(num < maior || num > maior2)
				maior2 = num;
		}
		
	}
	printf("\nmaior: %d", maior);
	printf("\nmaior2: %d", maior2);
	
}
