//Ler um n�mero e mostrar se ele � positivo ou negativo 
/*
Programa: Positivo ou negativo
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de altera��o:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	int n=0;
	setlocale(LC_ALL,"");
	printf("Informe um n�mero: \n");
	scanf("%i", &n);
	if(n<0){
		printf("O numero digitado � negativo \n");
	};
	if(n>=0){
		printf("O numero � positivo");
	};
	return 0;
}
