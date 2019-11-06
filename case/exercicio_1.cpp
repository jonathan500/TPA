//Usando a estrutura (escolha/caso) elabore um algoritmo que leia o n�mero do dia da semana (1 a 7) sendo que domingo corresponde ao n�mero 1. Caso o n�mero digitado n�o corresponda a nenhum dia da semana, mostre uma mensagem de erro correspondente
/*
Programa: Ler um n�mero de 1 a 7 e dizer o dia da semana correspondente
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de altera��o:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num=0;
	printf("Informe o n�mero do dia da semana (1 a 7): \n");
	scanf("%i", &num);
	
	switch(num){
		case 1: printf("Domingo");
		break;
		
		case 2: printf("Segunda-Feira");
		break;
		
		case 3: printf("Ter�a-Feira");
		break;
		
		case 4: printf("Quarta-Feira");
		break;
		
		case 5: printf("Quinta-Feira");
		break;
		
		case 6: printf("Sexta-Feira");
		break;
		
		case 7: printf("S�bado");
		break;
		
		default: printf("Informe um n�mero valido");
		break;
	}
	return 0;
}

