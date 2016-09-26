#include <stdio.h>

int main(){
	int m=1,o=1,p=0,x;
	printf("Digite um numero: ");
	scanf("%d",&x);
	for(int i=1;i<x;i++){
		p=m;
		m=o;
		o+=p;
		if(p<x){
		printf("%d ",p);
	}
		else{
		}
}
	return 0;
}
