#include <stdio.h>
#include <conio.h>
/*2.	Escreva uma função que receba a data de nascimento de uma pessoa (DataNascimento), calcule e retorne a idade.*/

int calcIdd(int aa, int an){
	int idd;
	idd = aa - an;
	return idd;	
}

void main(){
	int aa, an;
	printf("Digite o ano atual: ");
	scanf("%d",&aa);
	printf("Digite o ano de nascimento: ");
	scanf("%d",&an);
	
	printf("A sua idade eh: %d", calcIdd(aa, an));
}
