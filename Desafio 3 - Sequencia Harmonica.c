#include <stdio.h>
#include <stdlib.h>

float Harmonia(int n){
 double resultado=0;
	for(int i=1;i<=n;i++){
  resultado+= (double) 1/i;
	}
	return resultado;
}

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%i",&n);
	printf("%lf\n",Harmonia(n));
	system("pause");
}
