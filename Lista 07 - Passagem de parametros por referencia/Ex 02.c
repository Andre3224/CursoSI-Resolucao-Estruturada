#include <stdio.h>
#include <conio.h>


void calcidd(int *anoNascimento,int *anoAtual,int *idade){
	*idade = *anoAtual - *anoNascimento;
}

void main(){
	int anoNascimento, anoAtual, idade=0, op;
	
	do{
		printf("\nDigite o ano de NASCIMENTO: ");
		scanf("%d",&anoNascimento);
		printf("\nDigite o ano de ATUAL: ");
		scanf("%d",&anoAtual);
		calcidd(&anoNascimento, &anoAtual,&idade);
		printf("\nA idade eh: %d", idade);
		
		printf("\n\nDeseja continuar? 0 - Sair\n");
		scanf("%d",&op);
		system("pause");
		system("cls");
	}while(op!=0);
}
