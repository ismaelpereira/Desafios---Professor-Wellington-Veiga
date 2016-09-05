#include <stdio.h>
#include <stdlib.h>
#define MAX 2016

int Dia(int day,int month,int year){
	if(month==2){
		if(day>0 && day<29 && year%4!=0){
		return 0;
		}
		else if(day>0 && day<30 && year%4==0){
		return 0;
		}
		else{
            return 1;
		}
 }
	  else if(month==4 || month== 6 || month==9 || month==11){
		if(day>0 && day<31){
			return 0;
		 }
		 else{
             return 1;
		 }
	  }
	  else if(month==1|| month==3 || month==5 || month==7 || month==8|| month==10 || month==12){
		if(day>0 && day<32){
			return 0;
		}
		else{
			return 1;
		  }
		}
	}
	
int Mes(int day,int month,int year){
	if(month>0 && month<13){
		return 0;
		}
	else{
		return 1;
		}
	}
	  
 int Ano(int day,int month,int year){
	if(year>0 && year<=MAX){
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
    int day,month,year;
    int resultado;
    printf("Digite o dia: ");
    scanf("%d",&day);
    printf("Digite o mes: ");
    scanf("%d",&month);
    printf("Digite o ano: ");
    scanf("%d",&year);
    resultado=Dia(day,month,year);
    resultado+=Mes(day,month,year);
    resultado+=Ano(day,month,year);
    if(resultado==0){
		printf("Data valida\n");
	}
	else{
		printf("Data invalida\n");
	}
	system("pause");
}
