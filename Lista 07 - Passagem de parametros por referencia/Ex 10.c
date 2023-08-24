#include <stdio.h>
#include <conio.h>

void qmaior(int *n1, int *n2, int *maior){
	if(*n1>*n2){
		*maior = *n1;
	}else if(*n2>*n1){
		*maior = *n2;
	}else{
		*maior = 0;
	}
}
void main(){
	int n1, n2, maior;
	
	printf("Digite o n1: ");
	scanf("%d",&n1);
	printf("Digite o n2: ");
	scanf("%d",&n2);
	
	qmaior(&n1, &n2, &maior);
	
	if (maior!=0){
		printf("O maior eh: %d", maior);
	}else{
		printf("%d = %d", n1, n2);
	}
}
