//Ler um n�mero e verificar se ele � maior que 100. Se for, somar 150 a esse n�mero. Exibir o valor do n�mero.
/*
Programa: Soma 150 ao numero que for maior que 100
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de altera��o:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	int variavel=0;
	setlocale(LC_ALL,"");
	printf("Informe um numero: \n");
	scanf("%i",&variavel);
	if(variavel>100){
		variavel= variavel + 150;
		printf("O numero digitado foi somado a 150 resultando em: %i \n",variavel);
	}else{
		printf("O numero digitado foi: %i \n",variavel);
	}
	system("pause");
}
