#include <stdio.h>
#include <conio.h>


CalcIdade(){
	int anoFinal, anoInicial, resp;
	printf("Digite o ano de nascimento: ");
	scanf("%d",&anoInicial);
	printf("Digite o ano atual: ");
	scanf("%d",&anoFinal);
	
	resp = anoFinal - anoInicial;
	printf("A idade da pessoa eh: %d", resp);
	
}


void main(){
	int op;
	
	printf("Escolha uma opcao: \n 1- Calcular Idade \n 2 - Média de 3 notas \n 3 - Maior Numero \n 4 - Menor Numero \n 5 - Sair \n");
	scanf("%d",&op);
	switch (op){
	
		case 1:
			CalcIdade();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			break;
	}
}
