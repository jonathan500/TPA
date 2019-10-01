/*
Programa: Anos e dias.
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
	int ano=0,idade=0,dias=0;
	printf("Infome o ano do eu nascimento: \n");
	scanf("%i",&ano);
	idade= 2019-ano;
	dias = idade*365;
	printf("Você têm %i ano e já viveu %i dias \n",idade,dias);
	system("pause");
}
