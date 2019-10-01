/*
Programa: Quadrado da soma de 3 valores.
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
	int n1=0, n2=0, num3=0, resulto=0;
	printf("Informe o primeiro número:\n");
	scanf("%i",&n1);
	printf("Informe o segundo número:\n");
	scanf("%i",&n2);
	printf("Informe o terceiro número:\n");
	scanf("%i",&num3);
	resulto=(n1+n2+num3)*(n1+n2+num3);
	printf("O resultado do quadrado do numero e igual há: %i \n",resulto);
	system("pause");
}
