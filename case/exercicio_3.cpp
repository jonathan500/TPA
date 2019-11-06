//Escreva um algoritmo para apresentar o nome de um mês do ano, considerando a relação abaixo:
//   Código |    1    |    2    |   3   |  ...  |   12
//    Mês   | Janeiro | Feveiro | Março | ...  | Dezembro 
/*
Programa: Programa para escolher um mês
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int mes=0;
	printf("Informe o número de um mês: \n");
	scanf("%i", &mes);
	switch(mes){
		case 1: printf("Janeiro");
		break;
		
		case 2: printf("Fevereiro");
		break;
		
		case 3: printf("Março");
		break;
		
		case 4: printf("Abril");
		break;
		
		case 5: printf("Maio");
		break;
		
		case 6: printf("Junho");
		break;
		
		case 7: printf("Julho");
		break;
		
		case 8: printf("Agosto");
		break;
		
		case 9: printf("Setembro");
		break;
		
		case 10: printf("Outubro");
		break;
		
		case 11: printf("Novembro");
		break;
		
		case 12: printf("Dezembro");
		break;
		
		default: printf("Codigo invalido");
		break;
	}
}
