#include <stdio.h>
#include <conio.h>

/*Escreva um procedimento que leia 4 n�meros, ap�s a leitura multiplique todos e exibir o resultado. 
Este procedimento dever� ser chamado atrav�s do programa principal.*/

void LerQuatroNum(){
	int num1, num2, num3, num4, resultado;
	
	printf("Digite um numero: ");
	scanf("%d",&num1);
	printf("Digite um outro numero: ");
	scanf("%d",&num2);
	printf("Digite um outro numero: ");
	scanf("%d",&num3);
	printf("Digite um outro numero: ");
	scanf("%d",&num4);
	
	resultado = num1 * num2 * num3 * num4;
	printf("A multiplicacao entre os numeros digitados eh: %d", resultado);
}
void main(){
	LerQuatroNum();	
}
