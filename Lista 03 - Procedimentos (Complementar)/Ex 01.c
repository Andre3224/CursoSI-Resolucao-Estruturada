#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void VolEsf(){
	float PI=3.14, raio, resp;
	printf("Entre com o valor do raio: ");
	scanf("%f",&raio);
	resp = (4.0/3.0)*PI*pow(raio, 3);
	printf("O valor do volume da esfera eh: %.2f", resp);
}
void main(){
	VolEsf();
}
