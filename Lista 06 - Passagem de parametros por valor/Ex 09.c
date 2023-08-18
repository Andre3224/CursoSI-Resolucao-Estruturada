#include<stdio.h>
#include<conio.h>

float PesIdeal(float alt){
	float pes;
	int op;
	printf("Voce e Homem (1) ou Mulher (2): ");
	scanf("%d", &op);
	
	if(op == 1){
		pes = 72.7;
		return pes;
	}else if(op == 2){
		pes = 44.7;
		return pes;
	}else{
		printf("Opcao invalida...");
	}
}

void main(){
	float alt;
	
	printf("Digite a altura: ");
	scanf("%f", &alt);
	
	
	printf("O peso ideal eh: %f", PesIdeal(alt));
}
