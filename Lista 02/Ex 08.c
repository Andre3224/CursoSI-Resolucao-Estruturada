#include <stdio.h>
#include <conio.h>


void CalcIdade(){
	int anoFinal, anoInicial, resp;
	printf("Digite o ano de nascimento: ");
	scanf("%d",&anoInicial);
	printf("Digite o ano atual: ");
	scanf("%d",&anoFinal);
	
	resp = anoFinal - anoInicial;
	printf("A idade da pessoa eh: %d", resp);
	
}

void MediaTres(){
	int n1, n2, n3, media;
	printf("Digite a nota 1: ");
	scanf("%d", &n1);
	printf("Digite a nota 2: ");
	scanf("%d", &n2);
	printf("Digite a nota 3: ");
	scanf("%d", &n3);
	
	media = (n1 + n2 + n3)/3;
	
	printf("A media dos alunos eh: %d", media);
}

void NumMaior(){
	int num, maior=0, i;
	for(i=0;i<3;i++){
		printf("Digite um numero: ");
		scanf("%d",&num);
		
		if (num > maior){
			maior = num;
		}
	}
	printf("O maior numero eh: %d", maior);
}

void NumMenor(){
	int menor=999999999, num, i;
	for(i=0;i<3;i++){
		printf("Digite um numero: ");
		scanf("%d",&num);
		
		if (num < menor){
			menor = num;
		}
	}
	printf("O menor numero eh: %d", menor);




}



void main(){
	int op;
	
	printf("\nEscolha uma opcao: \n 1- Calcular Idade \n 2 - Média de 3 notas \n 3 - Maior Numero \n 4 - Menor Numero \n 5 - Sair \n");
	scanf("%d",&op);
	while (op != 5){
		switch (op){
			case 1:
				CalcIdade();
				break;
			case 2:
				MediaTres();
				break;
			case 3:
				NumMaior();
				break;
			case 4:
				NumMenor();
				break;
			case 5:
				printf("Saindo...");
				break;
			default:
				printf("Opcao Invalida");
				break;
		}
		printf("\nEscolha uma opcao: \n 1- Calcular Idade \n 2 - Média de 3 notas \n 3 - Maior Numero \n 4 - Menor Numero \n 5 - Sair \n");
		scanf("%d",&op);
	}
}
