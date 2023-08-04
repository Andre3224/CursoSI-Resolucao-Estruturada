#include <stdio.h>
#include <conio.h>

void main(){
	float ava1, ava2, med;
	
	printf("\nEntre com a nota 1: ");
	scanf("%f",&ava1);
	printf("\nEntre com a nota 2: ");
	scanf("%f",&ava2);
	
	med = (ava1+ava2)/2;
	
	printf("A media semestral eh: %.2f", med);
}
