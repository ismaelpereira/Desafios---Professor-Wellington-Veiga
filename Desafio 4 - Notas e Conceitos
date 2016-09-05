#include <stdio.h>
#include <stdlib.h>

char Conceito(float nota,int faltas){
	if(nota>0 && nota<4){
		return 'E';
	}
	else if(nota>=4 && nota<5 && faltas<=20){
		return 'D';
	}
	else if(nota>=4 && nota<5 && faltas>20){
		return 'E';
	}
	else if(nota>=5 && nota<7.5 && faltas<=20){
		return 'C';
	}
    else if(nota>=5 && nota<7.5 && faltas>20){
		return 'D';
	}
	else if(nota>=7.5 && nota<9 && faltas<=20){
		return 'B';
	}
	else if(nota>=7.5 && nota<9 && faltas>20){
		return 'C';
	}
	else if(nota>=9 && nota<=10 && faltas<=20){
	    return 'A';
	}
	else if(nota>=9 && nota<=10 && faltas>20){
		return 'B';
	}
}

int main(){
	float nota;
	int faltas;
	printf("Digite a nota do aluno: ");
	scanf("%f",&nota);
	printf("Digite o numero de faltas do aluno: ");
	scanf("%d",&faltas);
	printf("%c\n",Conceito(nota,faltas));
	system("pause");
}
	
