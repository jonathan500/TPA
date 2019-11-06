// Crie um algoritimo que leia e mostre o nome de 50 pessoas;
/*
Programa: Lê e mostra 50 nomes 
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1=1;
	char nome[50];
	while(n1<=50){
		printf("Informe o nome da %i Pessoa \n",n1);
		scanf("%s",&nome);
		n1= n1+1;
		printf("O nome da %i pessoa é %s \n \n ",n1-1,nome);
	}
}
