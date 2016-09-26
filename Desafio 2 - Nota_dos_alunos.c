#include <stdio.h>

int main(){
	int n,contMaior=0,contMenor=0,contAprovados=0,contTalvez=0;
	float soma=0,maior=0,menor=0;
	printf("Digite o numero de alunos: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		float notas[n];
		printf("Digite a nota dos alunos: ");
		scanf("%f",&notas[i]);
		soma+=notas[i];
		maior=notas[0];
		menor=notas[0];
		if(notas[i]>maior){
			maior=notas[i];
			contMaior=i;
		}
		else if(notas[i]<menor){
			menor=notas[i];
			contMenor=i;
		}
		if(notas[i]>=7){
			contAprovados++;
		}
		else if(notas[i]>=5 && notas[i]<7){
			contTalvez++;
		}
		
	}
	printf("A media aritimetica das notas eh: %.2f\n",soma/n);
	
	if(contAprovados==0){
		printf("Nao ha nenhum aprovado\n");
	}
	
	else{
	printf("Total de alunos aprovados: %d\n",contAprovados);
	}
	
	if(contTalvez==0){
		printf("Nao ha alunos com chance de recuperacao\n");
	}
	
	else{
	printf("Total de alunos com chance de recuperacao: %d\n",contTalvez);
	}
	return 0;
}
