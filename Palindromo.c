#include <stdio.h>
#define MAX 5

char verificarPalindromo(char *vet){
	int i,j=MAX;
	for(i=0;i<MAX;i++){
		j--;
			if(vet[i]==vet[j]){
				return 'y';
			}
			else{
				return 'n';
			}
		}
	}

int main(){
	char letra[MAX];
	char resultado,i;
	for(i=0;i<MAX;i++){
		scanf("%s",&letra[i]);
	}
	resultado=verificarPalindromo(letra);
	if(resultado=='y'){
		printf("Eh Palindromo\n");
	}
	else{
		printf("Nao eh palindromo\n");
	}
	return 0;
}

