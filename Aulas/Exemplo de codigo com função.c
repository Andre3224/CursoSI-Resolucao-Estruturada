#include <stdio.h>
#include <conio.h>
/*
tipo_da_funcao nome_da_funcao(tipo var1, tipo var2,... tipo varN){
	
	corpoda função
	Return valor_de_retorno
}
Utilidade da funçao: Facilitar a leitura do codigo. Pensar no programa por pequenos blocos. Reaproveitamento de codigo.
*/

void soma_dois_numeros(){ //Procedimento
	int n1, n2, soma;
	n1= 10;
	n2= 20;
	soma = n1 + n2;
	printf("\nSoma: %d", soma);
	
}
int Subtracao(){   //Funçao
	int n1, n2, sub;
	n1 = 20;
	n2 = 5;
	sub = n1 - n2;
	return sub; //retorna um valor para o programa principal
	
	
}

void main(){
	int retorno;
	soma_dois_numeros();
	retorno = Subtracao();
	printf("\nA subtracao eh: %d", retorno); //A variavel recebe a função
	
}
