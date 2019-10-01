/*
Programa: calcula o preco de um terreno em metros.
Autor: Jonathan Ricardo Pereira Izidoro. 
Data: 29/09/2019.
Data da Alteração: 30/09/2019
*/
#include<stdio.h>
#include <conio.h>
#include <windows.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"""");
	float frente=0, lado=0, preco=0, total=0;
	printf("Informe a frente do terreno em metros:\n");
	scanf("%f",&frente);
	printf("Informe o lado do terreno em metros:\n");
	scanf("%f",&lado);
	printf("Informe o preço do terreno a cada metro quadrado:\n");
	scanf("%f",&preco);
	total = (frente*lado)*preco;
	printf("O preco do terreno equivale á: %f \n",total);
	system("pause");
}
