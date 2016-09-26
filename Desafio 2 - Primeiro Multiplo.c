#include <stdio.h>
#include <stdlib.h>

int Multiplos(int x){
	int i;
	for(i=x;i<100;i++){
		if(i%11==0 || i%13==0 || i%17==0){
			return i;
		}
		else{
		}
	}
}

int main(){
	int x;
	printf("Digite um numero: ");
	scanf("%i",&x);
	printf("%d\n",Multiplos(x));
	system("pause");
}
	
