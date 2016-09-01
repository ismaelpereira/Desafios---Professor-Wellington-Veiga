#include <stdlib.h>
#include <stdio.h>

char Tabela(float altura,float peso){
	if(altura<1.20 && peso<60){
		return 'A';
	}
	else if(altura<=1.20 && peso>=60 && peso<=90){
		return 'D';
	}
	else if(altura<=1.20 && peso>90){
		return 'G';
	}
	else if(altura>=1.20 && altura<=1.70 && peso<60){
		return 'B';
	}
	else if(altura>=1.20 && altura<=1.70 && peso>=60 && peso<=90){
		return 'E';
	}
	else if(altura>=1.20 && altura<=1.70 && peso>90){
		return 'H';
	}
	else if(altura>1.70 && peso<60){
		return 'C';
	}
	else if(altura>1.70 && peso>=60 && peso<=90){
		return 'F';
	}
	else if(altura>1.70 && peso>90){
		return 'I';
	}
}

int main(){
	char resultado;
	float altura, peso;
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	resultado=Tabela(altura,peso);
	printf("%c\n",resultado);
	return 0;
}
