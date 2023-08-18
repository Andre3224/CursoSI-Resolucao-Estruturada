#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
/*7.	Escreva uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. 
A função deve retornar um valor booleano. */

bool ParImpar(int num){
	bool t = true;
	if (num%2== 0){
		t = true;
	}else{
		t = false;
	}
	return t;
}

void main(){
	int num, op;
	bool retorno;
	do{	
		printf("Digite um numero: ");
		scanf("%d",&num);
		retorno = ParImpar(num);
		
		if (retorno == true){
			printf("\nO numero eh par!");
		}else{
			printf("\nO numero eh impar!");
		}
		printf("\nDeseja repetir? (0 - NAO ou 1 - SIM)\n\n");
		scanf("%d",&op);
		
		if (op != 0){
			system("pause");
			system("cls");
		}else{
			printf("Saindo...");
		}
	}while(op != 0);
}
