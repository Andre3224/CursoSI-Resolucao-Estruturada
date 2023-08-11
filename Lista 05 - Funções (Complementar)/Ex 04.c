#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void CalcMedSem(){
	float n1, n2, n3, med;
	printf("\nDigite a nota 1: ");
	scanf("%f",&n1);
	printf("\nDigite a nota 2: ");
	scanf("%f",&n2);
	printf("\nDigite nota 3: ");
	scanf("%f",&n3);
	
	med = (n1+n2+n3)/3;
	
	if(med >= 7){
		printf("\n Aprovado! \n Media: %.2f \n \n", med);
	}else{
		printf("\n Reprovado! Tente outra vez! \n \n");
	}
	system("pause");
	system("cls");
}

void main(){
	int i;
	
	for(i=0; i<3;i++){
		CalcMedSem();
	}
}
