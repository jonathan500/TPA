//Escreva um algoritmo em que o usuario informa o numero do m�s e mostra a quantidade de dias do m�s
//   C�digo |    1    |    2    |   3   |  ...  |   12
//    M�s   | Janeiro | Feveiro | Mar�o | ...  | Dezembro 
/*
Programa: Programa para escolher um m�s e informar seus dias
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de altera��o: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int dias=0;
	printf("Informe o n�mero de um m�s: \n");
	scanf("%i", &dias);
	switch(dias){
		case 1: printf("Janeiro -- 31");
		break;
		
		case 2: printf("Fevereiro -- 28");
		break;
		
		case 3: printf("Mar�o -- 31");
		break;
		
		case 4: printf("Abril -- 30");
		break;
		
		case 5: printf("Maio -- 31");
		break;
		
		case 6: printf("Junho -- 30");
		break;
		
		case 7: printf("Julho -- 31");
		break;
		
		case 8: printf("Agosto -- 31");
		break;
		
		case 9: printf("Setembro -- 30");
		break;
		
		case 10: printf("Outubro -- 31");
		break;
		
		case 11: printf("Novembro -- 30");
		break;
		
		case 12: printf("Dezembro -- 31");
		break;
		
		default: printf("Codigo invalido");
		break;
	}
}
