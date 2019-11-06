// Crie um algoritimo que receba 5 numeros e mostre o quadrado de cada um
/*
Programa: le 5 numeros e mostra o quadrado
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n=0;
	for(int i=0;i<5;i++){
		printf("Informe um numero: \n");
		scanf("%f",&n);
		printf("O quadrado do numero %f é : %f \n",n,n*n);
	}
}
