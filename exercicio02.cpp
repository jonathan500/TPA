/*
Programa: �rea de um triangulo.
Autor: Jonathan Ricardo Pereira Izidoro. 
Data: 29/09/2019.
Data da Altera��o: 30/09/2019
*/
#include<stdio.h>
#include <conio.h>
#include <windows.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"""");
	int base = 0, altura = 0, area = 0;
	printf("Informe  o tamanho da base do tri�ngulo:\n");
	scanf("%i",&base);
	printf("Informe a altura do tri�ngulo:\n");
	scanf("%i", &altura);
	area = (base*altura)/2;
	printf("A area do tri�ngulo corresponde �: %i \n",area);
	system("pause");
}
