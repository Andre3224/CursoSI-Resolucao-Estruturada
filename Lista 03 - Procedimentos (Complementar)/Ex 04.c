#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*Fa�a um procedimento que leia o tempo de dura��o de uma f�brica 
expressa em segundos e exiba esse tempo em horas, minutos e segundos.*/

void seg(){
	int entrada,h,m,s ,resto;
	printf("Digite o tempo de dura��o em segundos: ");
	scanf("%d",&entrada);
	
	h=entrada/3600;
	resto = entrada%3600;
	m = resto/60;
	s = resto%60;
	
	printf("O tempo de duracao eh: %d:%d:%d",h,m,s);
}
void main(){
	seg();
}
