#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
/*6.Escreva fun��o que recebe um valor inteiro e verifica se o 
valor � positivo ou negativo. A fun��o deve retornar um valor booleano. */

bool Pos_Neg(int num){
	bool t = true;
	if (num >= 0){
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
		retorno = Pos_Neg(num);
		
		if (retorno == true){
			printf("\nO numero eh positivo!");
		}else{
			printf("\nO numero eh negativo!");
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
