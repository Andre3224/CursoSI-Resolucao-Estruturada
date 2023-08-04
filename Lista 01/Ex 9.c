#include <stdio.h>
#include <conio.h>

void main(){
	int i, idd, maioridade=0;
	
	for(i=0;i<10;i++){
		printf("\nEntre com a idade: ");
		scanf("%d",&idd);
		
		if (idd >= 18){
			maioridade++;
		}
	}
	
	printf("A quantidade de pessoas maiores de idade eh: %d", maioridade);
}
