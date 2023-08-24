#include <stdio.h>
#include <conio.h>

/*8.	Faça um procedimento que receba dois números inteiros 
positivos por parâmetro e retorne a soma dos 
N números inteiros existentes entre eles.*/

void cont(int *n1, int *n2, int *soma){
	int i;
	
	for(i=*n1+1;i<*n2;i++){
		*soma=*soma+(i);
	}
}

void main(){
	int n1, n2, soma=0;
	
	printf("Digite o numero 1: ");
	scanf("%d",&n1);
	
	printf("Digite o numero 2: ");
	scanf("%d",&n2);
	
	cont(&n1, &n2, &soma);
	
	printf("A soma dos numeros entre %d e %d eh: %d", n1, n2, soma);
}
