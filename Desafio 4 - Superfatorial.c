#include <stdio.h>
#include <stdlib.h>

int Fatorial(int n){
	if(n==1){
		return 1;
	}
	else{
		return (n*Fatorial(n-1));
    }
}

int SuperFatorial(int n){
	int i,resultado=1;
	
	for(i=0;i<n;i++){
		resultado*=Fatorial(n-i);
 }
 return resultado;
}

int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("%d\n",SuperFatorial(n));
	system("pause");
}
