//Escreva um algoritmo para apresentar o nome de um m�s do ano, considerando a rela��o abaixo:
//   C�digo |    1    |    2    |   3   |  ...  |   12
//    M�s   | Janeiro | Feveiro | Mar�o | ...  | Dezembro 
/*
Programa: Programa para escolher um m�s
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de altera��o: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int mes=0;
	printf("Informe o n�mero de um m�s: \n");
	scanf("%i", &mes);
	switch(mes){
		case 1: printf("Janeiro");
		break;
		
		case 2: printf("Fevereiro");
		break;
		
		case 3: printf("Mar�o");
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
