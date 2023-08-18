#include <stdio.h>
#include <conio.h>

int RetornaCat(int idd){
	if (idd> 5 && idd <= 7){
		return 1;
	}else if(idd > 7 && idd <=10){
		return 2;
	}else if(idd > 10 && idd <= 13){
		return 3;
	}else if(idd> 13 && idd<=17){
		return 4;
	}else if(idd>=18){
		return 5;
	}else{
		printf("\nIdade nao categorizada!\n\n");
		return 0;
	}
	
}
void main(){
	int idd;
	
	do{
		printf("\nDigite a idade (0 - Sair): ");
		scanf("%d",&idd);
		
		printf("\nA categoria eh: %d \n\n", RetornaCat(idd));
		system("pause");
		system("cls");	
	}while(idd != 0);
}
