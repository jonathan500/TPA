//Escreva um algoritmo em que o usuario informa o numero do mês e mostra a quantidade de dias do mês
//   Código |    1    |    2    |   3   |  ...  |   12
//    Mês   | Janeiro | Feveiro | Março | ...  | Dezembro 
/*
Programa: Programa para escolher um mês e informar seus dias
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int dias=0;
	printf("Informe o número de um mês: \n");
	scanf("%i", &dias);
	switch(dias){
		case 1: printf("Janeiro -- 31");
		break;
		
		case 2: printf("Fevereiro -- 28");
		break;
		
		case 3: printf("Março -- 31");
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
