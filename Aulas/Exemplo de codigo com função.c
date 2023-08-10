#include <stdio.h>
#include <conio.h>

/*
tipo_da_funcao nome_da_funcao(tipo var1, tipo var2,... tipo varN){
	
	corpoda função
	Return valor_de_retorno
}
Utilidade da funçao: Facilitar a leitura do codigo. Pensar no programa por pequenos blocos. Reaproveitamento de codigo.
*/

int soma_dois_numeros(){
	int n1, n2, soma;
	n1= 10;
	n2= 20;
	soma = n1 + n2;
	printf("\nSoma: %d", soma);
	
}
int Subtracao(){
	int n1, n2, sub;
	n1 = 20;
	n2 = 5;
	sub = n1 - n2;
	printf("\nSubtracao: %d", sub);
	
}

void main(){
	soma_dois_numeros();
	Subtracao();
}
