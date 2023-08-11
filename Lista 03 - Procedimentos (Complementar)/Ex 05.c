#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void procedimento(){
	int idade;
	do{	
		printf("\nDigite a idade do nadador (0 - Sair): ");
		scanf("%d",&idade);
		
		if (5<=idade && idade<=7){
			printf("\nCategoria: Infantil A \n");
			system("pause");
			system("cls");
		}else if(8<=idade && idade<=10){
			printf("\nCategoria: Infantil B \n");
			system("pause");
			system("cls");
		}else if(11<=idade && idade<=13){
			printf("\nCategoria: Juvenil A \n");
			system("pause");
			system("cls");
		}else if(14<=idade && idade<18){
			printf("\nCategoria: Juvenil A \n");
			system("pause");
			system("cls");	
		}else if(idade >= 18){
			printf("\nCategoria: Adulto \n");
			system("pause");
			system("cls");
		}else if(idade != 0){
			printf("\nCategoria nao aplicada \n");
			system("pause");
			system("cls");
		}else{
			printf("Saindo...");
		}
	}while(idade != 0);
}

void main(){
	procedimento();
}
