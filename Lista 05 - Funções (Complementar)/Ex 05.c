#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float VolEsfera(){
	float PI=3.1415, raio, resp;
	printf("Digite o valor do Raio: ");
	scanf("%f",&raio);
	
	resp = (4.0/3.0)*PI*(raio*raio*raio);
	return resp;
	
}

void main(){
	float retorno;
	retorno = VolEsfera();
	printf("O retorno eh: %.2f", retorno);
}
