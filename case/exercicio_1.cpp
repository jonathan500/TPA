//Usando a estrutura (escolha/caso) elabore um algoritmo que leia o número do dia da semana (1 a 7) sendo que domingo corresponde ao número 1. Caso o número digitado não corresponda a nenhum dia da semana, mostre uma mensagem de erro correspondente
/*
Programa: Ler um número de 1 a 7 e dizer o dia da semana correspondente
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num=0;
	printf("Informe o número do dia da semana (1 a 7): \n");
	scanf("%i", &num);
	
	switch(num){
		case 1: printf("Domingo");
		break;
		
		case 2: printf("Segunda-Feira");
		break;
		
		case 3: printf("Terça-Feira");
		break;
		
		case 4: printf("Quarta-Feira");
		break;
		
		case 5: printf("Quinta-Feira");
		break;
		
		case 6: printf("Sexta-Feira");
		break;
		
		case 7: printf("Sábado");
		break;
		
		default: printf("Informe um número valido");
		break;
	}
	return 0;
}

