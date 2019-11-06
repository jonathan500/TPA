// Crie um algoritimo que calcule e mostre a tabuada do numero informado pelo usuario
/*
Programa: tabuada
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	int n2=0;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe um numero: \n");
	scanf("%i",&n2);
	for(int n1=0;n1<=10;n1++){
		printf("%i x %i = %i \n",n1,n2,n1*n2);
	}
}
