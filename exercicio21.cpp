//Ler um número e mostrar se ele é positivo ou negativo 
/*
Programa: Positivo ou negativo
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	int n=0;
	setlocale(LC_ALL,"");
	printf("Informe um número: \n");
	scanf("%i", &n);
	if(n<0){
		printf("O numero digitado é negativo \n");
	};
	if(n>=0){
		printf("O numero é positivo");
	};
	return 0;
}
