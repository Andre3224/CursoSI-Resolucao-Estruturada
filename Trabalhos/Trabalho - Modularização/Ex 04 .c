#include <stdio.h>
#include <conio.h>

float salBruto(){
	float sal;
	printf("\nDigite o valor do sal bruto: ");
	scanf("%f",&sal);
	
	return sal;
}

int H_extras(){
	int h;
	printf("\nDigote a quantidade de horas extras: ");
	scanf("%d",&h);
	
	return h;

}
float h_extras_recebe(int rec){
	float recT;
	
	
	recT = rec*20.00;
	return recT;
}
float descontos(){
	float desc;
	printf("Digite o valor de descontos (Impostos...): ");
	scanf("%f",&desc);
	return desc;
}
void SalBruto(float ret_salBruto,float rb_hora_v,float descontos_sal){
	float salarioL;
	salarioL = (ret_salBruto - descontos_sal)+ rb_hora_v;
	printf("O total do salario liquido eh: R$%.2f sendo R$%.2f de horas extras e retirado as tributacoes de R$ %.2f\n\n",	salarioL, rb_hora_v, descontos_sal);
	
	system("pause");
}
void main(){
	float ret_salBruto, rb_hora_v, salarioL, descontos_sal;
	int q_horas_e,i;
	
	for(i=0; i<5;i++){
		ret_salBruto = salBruto();
		q_horas_e = H_extras();
		rb_hora_v = h_extras_recebe(q_horas_e);
		descontos_sal = descontos();
		
		SalBruto(ret_salBruto, rb_hora_v, descontos_sal);
	}

}
