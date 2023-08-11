#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void menu(){
	int op;
	system("cls");
	do{
		printf("\nDigite o COD da media (1 - Aritmetica ou 2 - Ponderada ou 3 - Somar ou 4 - Sair): ");
		scanf("%d",&op);
		switch (op){
			case 1:
				MedSimples();
				break;
			case 2:
				MedPond();
				break;
			case 3:
				Somar();
				break;
			default:
				printf("\nOpcao invalida");
				break;
		}
	}while(op!=4);
}
void MedSimples(){
	float med, n1, n2,n3;
	system("cls");
	printf("<<< Calcular media SIMPLES >>>");
	
	printf("\nDigite a nota 1: ");
	scanf("%f",&n1);
	printf("\nDigite a nota 2: ");
	scanf("%f",&n2);
	printf("\nDigite a nota 3: ");
	scanf("%f",&n3);
	
	med = (n1+n2+n3)/3;
	printf("\n A media eh: %.2f \n \n", med);
	system("pause");
	system("cls");
}
void MedPond(){
	float med, n1, n2,n3, p1, p2, p3;
	system("cls");
	printf("<<< Calcular media PONDERADA >>>");
	
	printf("\nDigite a nota 1: ");
	scanf("%f",&n1);
	printf("\nDigite o peso da nota 1: ");
	scanf("%f",&p1);
	
	printf("\nDigite a nota 2: ");
	scanf("%f",&n2);
	printf("\nDigite o peso da nota 2: ");
	scanf("%f",&p2);
	
	printf("\nDigite a nota 3: ");
	scanf("%f",&n3);
	printf("\nDigite o peso da nota 3: ");
	scanf("%f",&p3);
	
	med = ((n1*p1) + (n2*p2) + (n3*p3))/(p1+p2+p3);
	printf("\n A media eh: %.2f \n \n", med);
	system("pause");
	system("cls");
}
void Somar(){
	float Rsomar, n1, n2,n3;
	system("cls");
	printf("<<< Somatoria de Notas >>>");
	
	printf("\nDigite a nota 1: ");
	scanf("%f",&n1);
	printf("\nDigite a nota 2: ");
	scanf("%f",&n2);
	printf("\nDigite a nota 3: ");
	scanf("%f",&n3);
	
	Rsomar = n1+n2+n3;
	printf("A somatoria das notas eh: %.2f \n \n ", Rsomar);
	system("pause");
	system("cls");
}
void main(){
	menu();
}
