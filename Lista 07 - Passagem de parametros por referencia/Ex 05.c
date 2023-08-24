/*5.	Faça um procedimento que recebe a idade de um nadador 
por parâmetro e retorne também por parâmetro, 
a categoria desse nadador de acordo com a tabela abaixo:   */

#include <stdio.h>
#include <conio.h>

void descCat(int *idd, char *cat){
	if (*idd >= 5 && *idd <= 7){
		*cat = 'A';
	}else if(*idd >= 8 && *idd <= 10){
		*cat = 'B';
	}else if(*idd >= 11 && *idd <= 13){
		*cat = 'C';
	}else if(*idd >= 14 && *idd <= 17){
		*cat = 'D';
	}else if(*idd >= 18){
		*cat = 'E';
	}else{
		printf("\nIdade nao categorizada");
	}
}
	
void main(){
	int idd, i;
	char cat;
	
	do{
		printf("\nDigite a idade do nadador: ");
		scanf("%d",&idd);
		
		descCat(&idd, &cat);
		
		printf("\nA categoria do nadador eh: %c", cat);
	
	
		printf("\n\nDeseja continuar? 0 - Sair\n");
		scanf("%d",&i);
		system("pause");
		system("cls");
	}while(i != 0);
}
