//Fa�a um algoritimo para ler o nome de um aluno e sua m�dia final.O resultado desse algoritimo deve ser uma mensagem informando se o aluno foi aprovado ou n�o. O crit�rio de aprova��o � ter m�dia igual ou maior que 7.0
/*
Programa: calculo de meida se foi aprovado ou n�o
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de altera��o:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int media=0;
	char nome[50];
	printf("Informe o nome do aluno: \n");
	gets(nome);
	printf("Informe a m�dia do aluno: \n");
	scanf("%i", &media);
	if (media>=7){
		printf("O aluno %s foi aprovado", nome);
	}else{
		printf("O aluno foi reprovado");
	}
	return 0;
}
