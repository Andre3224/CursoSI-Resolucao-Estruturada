#include <stdio.h>
#include <conio.h>
/* Escreva uma fun��o que leia 4 n�meros, ap�s a leitura multiplique todos e retorne o resultado. 
Est� fun��o dever� ser chamada atrav�s do programa principal. Exibir conte�do retornado.*/

int LerQuatro(){
	int n1, n2, n3, n4, resl;
	printf("\nDigite um numero: ");
	scanf("%d",&n1);
	printf("\nDigite um outro numero: ");
	scanf("%d",&n2);
	printf("\nDigite um outro numero: ");
	scanf("%d",&n3);
	printf("\nDigite um outro numero: ");
	scanf("%d",&n4);
	
	resl = n1*n2*n3*n4;
	
	return resl;
}


void main(){
	int retorno;
	retorno = LerQuatro();
	printf("\nA multiplicacao dos numeros eh: %d", retorno);
}
