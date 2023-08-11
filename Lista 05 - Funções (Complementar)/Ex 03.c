#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*3. Escreva uma função para ler uma temperatura em graus Fahrenheit 
e retorne o valor correspondente em graus Celsius.*/

float ConvertTemp(){
	float C, entrada;
	
	printf("<<< Converter Fahrenheit para Celsius >>>");
	printf("\nEntre com a temperatura em F: ");
	scanf("%f",&entrada);
	
	C = ((entrada-32)/9)*5;
	system("pause");
	system("cls");
	return C;
	
}
void main(){
	float retorno;
	retorno = ConvertTemp();
	printf("<<< Converter Fahrenheit para Celsius >>>");
	printf("\nA temperatura Convertida eh: %.1f", retorno);
}
