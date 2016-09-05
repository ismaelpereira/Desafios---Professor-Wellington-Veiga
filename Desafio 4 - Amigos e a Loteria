#include <stdio.h>

int Proporcao(int premio,int aposta1,int aposta2,int aposta3){
	int resultado;
	int aposta_total;
	aposta_total=aposta1+aposta2+aposta3;
	resultado=premio/aposta_total;
	return resultado;
}

int Premio1(int resultado,int premio,int aposta1,int total_premio1){
	total_premio1=resultado*aposta1;
	return total_premio1;
}

int Premio2(int resultado,int premio,int aposta2,int total_premio2){
	total_premio2=resultado*aposta2;
	return total_premio2;
}

int Premio3(int resultado,int premio,int aposta3,int total_premio3){
	total_premio3=resultado*aposta3;
	return total_premio3;
}

int main(){
	int premio,aposta1,aposta2,aposta3;
	int i;
	int resultado;
	int total_premio1,total_premio3,total_premio2;
	printf("Digite o premio da loteria: ");
	scanf("%d",&premio);
	printf("Digite a aposta do amigo 1: ");
	scanf("%d",&aposta1);
	printf("Digite a aposta do amigo 2: ");
	scanf("%d",&aposta2);
	printf("Digite a aposta do amigo 3: ");
	scanf("%d",&aposta3);
	resultado=Proporcao(premio,aposta1,aposta2,aposta3);
	total_premio1=Premio1(resultado,premio,aposta1,total_premio1);
	total_premio2=Premio2(resultado,premio,aposta2,total_premio2);
	total_premio3=Premio3(resultado,premio,aposta3,total_premio3);
	printf("O amigo 1 ganhou:%d\n",total_premio1);
	printf("O amigo 2 ganhou:%d\n",total_premio2);
	printf("O amigo 3 ganhou:%d\n",total_premio3);
	return 0;
}
	
	
