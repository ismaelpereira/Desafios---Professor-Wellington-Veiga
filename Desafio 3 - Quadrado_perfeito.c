#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n=0,i=0,m=0,soma=0;
	scanf("%d",&n);
 	for(i=0;i<=n;i++){
		if(i%2==1){
	   		soma+=i;
	   		m++;
	   		if(soma==n){
				break;
			}
		}
	}
	printf("soma:%d\n",soma);
	if(n==soma && m==sqrt(n)){
		printf("Eh quadrado perfeito\n");
	}
	else{
		printf("Nao eh quadrado perfeito\n");
	}
	system("pause");
}


Quadrado_Perfeito.cpp
Open with Google Docs
