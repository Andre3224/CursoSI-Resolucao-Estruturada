#include <stdio.h>
#include <conio.h>

void calcidd(int *anoNascimento,int *anoAtual,int *idade){
	printf("\nDigite o ano de NASCIMENTO: ");
	scanf("%d",&*anoNascimento);
	printf("\nDigite o ano de ATUAL: ");
	scanf("%d",&*anoAtual);
	*idade = *anoAtual - *anoNascimento;
}

void medQuatro(float *media){
	float nota1, nota2, nota3, nota4;
	
	printf("\nDigite a nota 1: ");
	scanf("%f",&nota1);
	printf("\nDigite a nota 2: ");
	scanf("%f",&nota2);
	printf("\nDigite a nota 3: ");
	scanf("%f",&nota3);
	printf("\nDigite a nota 4: ");
	scanf("%f",&nota4);
	
	*media=(nota1+nota2+nota3+nota4)/4;
}

void div(float *num1, float *num2,float *resp){
	printf("\nDigite o numero que quer dividir: ");
	scanf("%f",&*num1);
	printf("\nDigite o divisor: ");
	scanf("%f",&*num2);
	
	*resp = *num1 / *num2;
}
void mult(float *num1, float *num2,float *resp){
	printf("\nDigite o numero 1: ");
	scanf("%f",&*num1);
	printf("\nDigite o numero 2: ");
	scanf("%f",&*num2);
	
	*resp = *num1 * *num2;
}


void menu(){
	int op, anoNascimento, anoAtual, idade;
	float media=0, resp=0, num1, num2;
	
	printf("\n1 - Calcular Idade");
	printf("\n2 - Media de 4 Notas");
	printf("\n3 - Multiplicação de 2 Numero");
	printf("\n4 - Divisao de 2 Número");
	printf("\n5 - Sair");
	printf("\nDigite a opcao escolhida: ");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			calcidd(&anoNascimento,&anoAtual,&idade);
			printf("\n A idade eh: %d", idade);
			break;
		case 2:
			medQuatro(&media);
			printf("\n A media das notas eh: %.2f", media);
			break;
		case 3:
			mult(&num1, &num2, &resp);
			printf("\n %.2f * %.2f: %.2f",num1, num2, resp);
			break;
		case 4:
			div(&num1, &num2, &resp);
			printf("\n %.2f / %.2f: %.2f",num1, num2, resp);
			break;
		case 5:
			break;
		default:
			printf("\n A opcao eh invalida\n \n");
			system("cls");
			menu();
			break;
	}
}

void main(){
	int i;
	do{
	system("cls");
	menu();
	printf("\nDeseja fazer outra operacao? 0-Sair \n");
	scanf("%d",&i);
	}while(i!=0);
}
