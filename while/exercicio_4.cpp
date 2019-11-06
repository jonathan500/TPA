// Crie um algoritimo que calcule o fatorial de um numero digitado pelo usuario
/*
Programa: fatorial de um numero
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=1,n1=0,n2=1;
	printf("Informe um número \n");
	scanf("%i",&n1);
	while(n<=n1){
		n2=n2*n;
		n=n+1;
	}
	printf("O fatorial do numero digitado é: %i",n2);
}
