// Escreva um algoritimo que leia 2 numeros mostre todos os numeros pares entre eles
/*
Programa: Le 2 numeros e mostra os pares
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1=0, n2=0, troca;
	printf("Informe o número: \n");
	scanf("%i",&n1);
	printf("Informe outro número: \n");
	scanf("%i",&n2);
	if(n1>n2){
		troca= n2;
		n2=n1;
		n1=troca;
	}
	while(n1<=n2){
		if(n1%2==0){
			printf("Este número é par : %i \n",n1);
		}
		n1=n1+1;
	}
}
