#include<stdio.h>
#include<conio.h>

int MedFinal(float med){
	if(med>=0.0 && med<5){
		return 1;
	}else if(med>=5 && med<7){
		return 2;
	}else if(med>=7 && med<9){
		return 3;		
	}else if(med>=9 && med<= 10){
		return 4;
	}
}

void main(){
	float med;
	printf("\nDigite a media: ");
	scanf("%f",&med);
	
	printf("O conceito eh: %d", MedFinal(med));
}
