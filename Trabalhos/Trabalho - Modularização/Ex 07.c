#include <stdio.h>
#include <conio.h>

/*POR REFER�NCIA: Escreva um procedimento que receba 2 par�metros (Nota1 e Nota2) 
calcule e retorne tamb�m por par�metro a m�dia (Media).*/

#include <stdio.h>
#include <conio.h>

calcMed(float *nota1, float *nota2, float *media){
	*media = (*nota1 + *nota2)/2;
}

void main(){
	float nota1, nota2, media=0;
	
	printf("\nDigite a nota 1: ");
	scanf("%f",&nota1);
	printf("\nDigite a nota 2: ");
	scanf("%f",&nota2);
	
	calcMed(&nota1, &nota2, &media);
	
	printf("\nA media eh: %.2f", media);
}
