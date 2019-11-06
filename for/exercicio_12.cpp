// Coloca 5 numeros em ordem crescente
/*
Programa: 5 numeros em ordem crescente
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
Data de alteração: 06/11/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n[5],i,t,ordem=4;
	for(i=0;i<5;i++){
		printf("Informe o %i º número: \n", i+1);
		scanf("%i",&n[i]);
	}
	while(ordem>=0){
		for(i=0;i<4;i++){
			if(n[i]>n[i+1]){
				t=n[i];
				n[i]=n[i+1];
				n[i+1]=t;
			}	
		}
		ordem--;
	}
	printf("\nA Ordem Crescente é: \n");
	for(i=0;i<5;i++){
		printf("%i \n",n[i]);
	}
	
	printf("\nA Ordem Decrescente é: \n");
	for(i=4;i>-1;i--){
		printf("%i \n",n[i]);
	}
	system("pause");
}

