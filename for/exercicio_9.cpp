//ler 10 numeros e informar o maior número
/*
Programa: ler 10 numeros e informar o maior
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>

int main(){
	int n1=0,maior=0;
	setlocale(LC_ALL,"Portuguese");
	for(int i=0; i<10;i++){
		printf("Informe um numero \n");
		scanf("%i",&n1);
		if(i==0){
			maior=n1;
		}
		if(n1>maior){
			maior=n1;
		}
	}
	printf("O maior número é %i",maior);
}
