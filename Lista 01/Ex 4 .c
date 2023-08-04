#include <stdio.h>
#include <conio.h>

void main(){
	int totalneg=0, somapos=0, i, num;
	
	for(i=0;i<20;i++){
		printf("Digite um numero: ");
		scanf("%i",&num);
		
		if (num < 0){
			totalneg++;
		}
		else{
			somapos = somapos + num;	
		};

	};
	
	printf("\nO total de num negativos sao: %i",totalneg);
	printf("\nA soma dos num pos eh: %i", somapos);
}
