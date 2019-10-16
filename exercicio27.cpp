//Faça um algoritimo para ler o nome de um aluno e sua média final.O resultado desse algoritimo deve ser uma mensagem informando se o aluno foi aprovado ou não. O critério de aprovação é ter média igual ou maior que 7.0
/*
Programa: calculo de meida se foi aprovado ou não
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int media=0;
	char nome[50];
	printf("Informe o nome do aluno: \n");
	gets(nome);
	printf("Informe a média do aluno: \n");
	scanf("%i", &media);
	if (media>=7){
		printf("O aluno %s foi aprovado", nome);
	}else{
		printf("O aluno foi reprovado");
	}
	return 0;
}
