#include <stdio.h>
#include <conio.h>

/* Escreva um procedimento que ao realizar a leitura de um n�mero qualquer, 
seja capaz de verificar se o mesmo � positivo ou negativo. Fazer a chamada no programa principal.*/

void Ehpos(){
	float num;
	
	printf("Digite um numero: ");
	scanf("%f",&num);
	
	if (num > 0){
		printf("Positivo");
	}else{
		printf("Negativo");
	}
	
}
void main(){
	Ehpos();
}
