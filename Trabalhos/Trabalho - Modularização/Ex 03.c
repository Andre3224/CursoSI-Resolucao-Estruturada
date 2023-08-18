#include <stdio.h>
#include <conio.h>

void adicao(float A, float B, float C){
	float resp;
	
	resp = A + B + C;
	
	printf("\nA soma de %.2f + %.2f + %.2f = %.2f \n\n", A, B,C, resp);
}

void CalcMed(float A, float B, float C){
	float resp;
	
	resp = (A+B+C)/3;
	
	printf("\nA media dos numeros %.2f, %.2f, %.2f eh %.2f \n\n", A, B,C, resp);
}

void Maior(float A, float B, float C){
	int i;
	
	printf("Os numeros sao: %.2f, %.2f, %.2f", A,B,C);
	if (A>B && A>C){
		printf("\nO numero %.2f eh o maior. \n\n", A);
	}else if(B>A && B>C){
		printf("\nO numero %.2f eh o maior. \n\n", B);
	}else{
		printf("\nO numero %.2f eh o maior. \n\n", C);
	}
}
void Menor(float A, float B, float C){
	int i;
	
	printf("Os numeros sao: %.2f, %.2f, %.2f", A,B,C);
	if (A<B && A<C){
		printf("\nO numero %.2f eh o menor. \n\n", A);
	}else if(B<A && B<C){
		printf("\nO numero %.2f eh o menor. \n\n", B);
	}else{
		printf("\nO numero %.2f eh o menor. \n\n", C);
	}
}

void main(){
	float A, B, C;
	int i;
	
	printf("\nDigite um valor para A: ");
	scanf("%f",&A);
	
	printf("\nDigite um valor para B: ");
	scanf("%f",&B);
	
	printf("\nDigite um valor para C: ");
	scanf("%f",&C);
	
	do{
		printf("Escolha uma opcao: \n1 - ADICAO \n2 - MEDIA \n3 - Maior \n4 - Menor \n0 - Sair\n");
		scanf("%d",&i);
		
		switch(i){
			case 1:
				adicao(A,B,C);
				break;
			case 2:
				CalcMed(A,B,C);
				break;
			case 3:
				Maior(A,B,C);
				break;
			case 4:
				Menor(A,B,C);
				break;
			case 0:
				break;
			default:
				printf("\nOpcao invalida! \n\n");
				break;
		}
		system("pause");
		system("cls");
	}while(i != 0);
}
