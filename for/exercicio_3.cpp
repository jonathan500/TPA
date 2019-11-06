//Faça um algoritmo que leia e mostre o nome de 5 pessoas
/*
Programa: leitura de nomes
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[50];
	for(int n=1; n<=5;n++){
		printf("Informe um nome: \n");
		scanf("%s",&nome);
		printf("%s \n",nome);	
	}
}
