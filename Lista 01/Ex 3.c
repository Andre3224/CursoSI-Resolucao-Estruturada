#include <stdio.h>
#include <conio.h>

void main(){
	int code;
	
	printf("Digite o codigo de regiao: ");
	scanf("%i",&code);
	
	switch (code){
		
		case 1:
			printf("Regiao Sul");
			break;
			
		case 2:
			printf("Regiao Norte");
			break;
			
		case 3:
			printf("Regiao Leste");
			break;
			
		case 4:
			printf("Regiao Oeste");
			break;
			
		case 5:
			printf("Regiao Nordeste");
			break;
			
		case 6:
			printf("Regiao Nordeste");
			break;
			
		case 7:
			printf("Regiao Sudeste");
			break;
			
		case 8:
			printf("Regiao Sudeste");
			break;
			
		case 9:
			printf("Regiao Sudeste");
			break;
			
		case 10:
			printf("Regiao Centro-oeste");
			break;
			
		case 11:
			printf("Regiao Noroeste");
			break;
			
		default:
			printf("Importado");
			break;
	}
}
