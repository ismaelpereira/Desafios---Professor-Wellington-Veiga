#include <stdio.h>

int LePositivo(){
	int positivo;
	printf("Digite um numero: ");
	scanf("%d",&positivo);
	if(positivo>0){
		return positivo;
	}
	else{
		printf("ERROR!! Numero deve ser positivo, digite novamente: ");
		scanf("%d",&positivo);
	}
}

int Somatorio(int positivo){
	int i,resultado=0;
	for(i=1;i<=positivo;i++){
		resultado+=i;
	}
	return resultado;
}

int main(){
	int positivo,resultado=0;
	positivo=LePositivo();
	printf("Somario: %d\n",Somatorio(positivo));
	return 0;
}
