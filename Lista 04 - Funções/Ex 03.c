#include <stdio.h>
#include <conio.h>

int CalcIdd(){
	int AnoInicial, idade, AnoAtual;
	system("cls");
	printf("\nDigite o ano de nascimento: ");
	scanf("%d",&AnoInicial);
	printf("\nDigite o ano atual: ");
	scanf("%d",&AnoAtual);
	
	idade = AnoAtual - AnoInicial;
	
	return idade;
}
float CalcMed(){
	int n1, n2, n3, n4, med;
	system("cls");
	printf("Digite a nota 1: ");
	scanf("%d",&n1); 
	printf("Digite a nota 2: ");
	scanf("%d",&n2);
	printf("Digite a nota 3: ");
	scanf("%d",&n3);
	printf("Digite a nota 4: ");
	scanf("%d",&n4);
	
	med = (n1 + n2 + n3 + n4)/4;
	
	return med;
}
float MultD(){
	float n1, n2, produto;
	printf("Digite o num1: ");
	scanf("%f",&n1);
	printf("Digite o num2: ");
	scanf("%f",&n2);
	
	produto = n1 * n2;
	
	return produto;
}
int DivD(){
	int n1, n2, res;
	printf("Digite o num1: ");
	scanf("%d",&n1);
	printf("Digite o num2: ");
	scanf("%d",&n2);
	
	res = n1/n2;
	return res;
}
void menu(){
	int op;
	float retorno;
	do{
		retorno = 0;
		system("cls");
		printf("\nEscolha uma opcao: \n 1- Calcular Idade \n 2 - Media de 4 notas \n 3 - Multiplicacao de 2 Número \n 4 - Divisao de 2 Número \n 5 - Sair \n");
		scanf("%d",&op);
		switch (op){
			case 1:
				retorno = CalcIdd();
				printf("A idade eh: %.0f \n \n", retorno);
				break;
			case 2:
				retorno = CalcMed();
				printf("A media eh: %.2f \n \n", retorno);
				break;
			case 3:
				retorno = MultD();
				printf("A multiplicacao entre os dois numeros eh: %.2f \n \n", retorno);
				break;
			case 4:
				retorno = DivD();
				printf("A divisao de N1 por N2 eh: %.0f \n \n", retorno);
				break;
			case 5:
				printf("Saindo...\n\n");
				break;
			default:
				printf("Opcao Invalida\n\n");
				break;
		}
		system("pause");
		system("cls");
	}while(op != 5);
}

void main(){
	menu();
}
