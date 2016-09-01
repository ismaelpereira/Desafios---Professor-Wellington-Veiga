#include <stdlib.h>
#include <stdio.h>

float Reajuste(float salario, float resultado){
	if (salario<=500.00){
		resultado=salario+(salario*0.25);
		return resultado;
	}
	else if (salario>500.00 && salario<=1000){
		resultado=salario+(salario*0.20);
		return resultado;
	}
	else if (salario>1000.00 && salario<=1500){
		resultado=salario+(salario*0.15);
		return resultado;
	}
	else if (salario>1500 && salario<=2000){
		resultado=salario+(salario*0.10);
		return resultado;
	}
	else{
		return 0.0;
	}
}	

float Bonus(float salario,float tempo){
	  float resultado;
	 if(tempo>=1.0 && tempo<=3.0){
		resultado=salario+500.0;
		return resultado;
	}
	else if(tempo>=4.0 && tempo<=6.0){
		resultado=salario+200.0;
		return resultado;
	}
	else if(tempo>=7.0 && tempo<=10.0){
		resultado=salario+300;
		return resultado;
	}
	else if(tempo>10.0){
		resultado=salario+500.0;
		return resultado;
	}
	else{
		return 0;
	}
}

int main(){
	float tempo;
	float salario;
	printf("Digite o salario: ");
	scanf("%f",&salario);
	printf("Digite o tempo em anos: ");
	scanf("%f",&tempo);
	salario=Reajuste(salario,tempo);
	salario=Bonus(salario,tempo);
	printf("O salario final eh: %.2f",salario);
	return 0;
}
