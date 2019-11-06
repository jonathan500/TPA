// Crie um algoritimo que receba 50 numeros e mostre a media deles
/*
Programa: le 50 numeros e mostra a media
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n=0,n1=0;
	for(int i=0;i<50;i++){
		printf("Informe um numero: \n");
		scanf("%f",&n);
		n1=n1+n;
	}
	printf("A média dos numeros é: %f",n1/50);
}
