// Crie um algoritimo que receba 5 numeros e mostre a metade de cada um
/*
Programa: le 5 numeros e mostra a metade
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de altera��o: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n=0;
	for(int i=0;i<5;i++){
		printf("Informe um numero: \n");
		scanf("%f",&n);
		printf("A metade � %f: %f \n",n,n/2);
	}
}

