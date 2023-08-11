#include <stdio.h>
#include <conio.h>

/*4 - Escreva uma função que retorne a idade de uma pessoa, para calcular a idade será necessário 
conhecer o ano de nascimento e o ano atual. Retornar e exibir no programa principal.*/

int CalcIdade(){
	int AnoInicial, idade, AnoAtual;
	printf("\nDigite o ano de nascimento: ");
	scanf("%d",&AnoInicial);
	printf("\nDigite o ano atual: ");
	scanf("%d",&AnoAtual);
	
	idade = AnoAtual - AnoInicial;
	
	return idade;
	
}
void main(){
	int retorno;
	retorno = CalcIdade();
	printf("A idade eh: %d", retorno);
}
