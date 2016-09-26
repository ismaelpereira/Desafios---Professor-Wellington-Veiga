#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
	int vet[MAX];
	int aux = 0;
	int teste = 0;
	for(int i=0;i<10;i++){
		printf("Digite um numero:");
		scanf("%d",&vet[i]);

 	}
	for (int i = 9; i >=1 ; i-- ){
		for(int j = 0; j < i ; j++){
				if(vet[j] > vet[j+1]){
					aux = vet[j];
					vet[j] = vet[j+1];
					vet[j+1] = aux;
			    }
	    }
    }
            while(teste < 10){
	   			printf("%d\n\n", vet[teste]);
	   			teste++;
    		}
	 system("pause");
	}

