/*
Programa: prestacao em atraso.
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
	float prestacao=0,taxa=0, valor=0,tempo=0;
	printf("informe o valor em atraso:\n");
	scanf("%f",&valor);
	printf("Informe a taxa do produto:\n");
	scanf("%f",&taxa);
	printf("Informe o tempo de atraso em dias:\n");
	scanf("%f",&tempo);
	prestacao=valor +(valor*tempo*(taxa/100));
	printf("O valor da prestação em atraso equivale á %f \n",prestacao);
	system("pause");
}
