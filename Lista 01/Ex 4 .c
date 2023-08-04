#include <stdio.h>
#include <conio.h>

void main(){
	int totalneg=0, somapos=0, i, num;
	
	for(i=0;i<20;i++){
		printf("Digite um numero: ");
		scanf("%d",&num);
		
		if (num < 0){
			totalneg++;
		}
		else{
			somapos = somapos + num;	
		};

	};
	
	printf("\nO total de num negativos sao: %d",totalneg);
	printf("\nA soma dos num pos eh: %d", somapos);
}
