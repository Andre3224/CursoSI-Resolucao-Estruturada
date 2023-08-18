/*3.	Escreva uma função que receba 2 parametros (Nota1 e Nota2) calcule e retorne a média.*/
#include <stdio.h>
#include <conio.h>

float calcMed(int nota1, int nota2){
	int med;
	med = (nota1 + nota2)/2;
	return med;	
}

void main(){
	float nota1, nota2;
	printf("\nDigite a nota 1: ");
	scanf("%f",&nota1);
	printf("\nDigite a nota 2: ");
	scanf("%f",&nota2);
	
	printf("\nA media das notas eh: %.2f", calcMed(nota1, nota2));
}
