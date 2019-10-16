//Crie um algoritimo que leia dois números e mostre o maior numero digitado pelo usuário
/*
Programa: Leitura de dois números e mostra o maior
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração:16/10/2019
*/
#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int	n1=0,n2=0;
	printf("Informe um número: \n");
	scanf("%i",&n1);
	printf("Informe outro número: \n");
	scanf("%i",&n2);
	if (n1==n2){
		printf("Os números %i e %i são iguais", n1, n2);
	}
	else if(n1>n2){
		printf("O maior número é %i", n1);
	}else{
		printf("O maior número é %i", n2);
	}
}
