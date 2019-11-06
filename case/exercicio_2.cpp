//Escreva um programa para apresentar o nome e o pre�o do lanche conforme o n�mero da op��o digitada pelo usu�rio.
// C�digo |        1        |     2     |    7    |    15   |   Outro Valor
// 	Nome  | Cachorro-Quente | X-Salada | X-Burger | X-Tudo  | N�o Cadastrado
// Pre�o  |   	R$3,50      |  R$5,00  |  R$8,90  | R$12,70 | ------------
/*
Programa: Programa para escolher uma op��o do cardapio
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
	printf(" C�digo |        1        |     2     |    7    |    15   |   Outro Valor \n Nome  | Cachorro-Quente | X-Salada | X-Burger | X-Tudo  | N�o Cadastrado \n Pre�o  |   	R$3,50      |  R$5,00  |  R$8,90  | R$12,70 | \n");
	printf("Informe o n�mero do pedido: \n");
	scanf("%i", &num);
	
	switch(num){
		case 1: printf("Cachorro-Quente --- R$3,50");
		break;
		
		case 2: printf(" X-Salada --- R$5,00");
		break;
		
		case 7: printf("X-Burger --- R83,90");
		break;
		
		case 15: printf("X-Tudo  --- R$12,70");
		break;
		
		default: printf("Produto n�o cadastrado");
		break;
	}
	return 0;	
}
