//ler 10 numeros e ver quantos deles sao negativos
/*
Programa: le 10 numeros e ve quantos sao negativos
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>

int main(){
	int n1=0,c=0;
	setlocale(LC_ALL,"Portuguese");
	for(int i=0; i<10;i++){
		printf("Informe um numero \n");
		scanf("%i",&n1);
		if(n1<0){
			c=c+1;
		}
	}
	printf("%i números são negativos \n",c);
}
