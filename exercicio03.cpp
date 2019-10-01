/*
Programa: área de um circulo.
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
	float area=0, raio=0;
	const float pi=3.14;
	printf("Informe o tamanho do raio do circulo: \n");
	scanf("%f",&raio);
	area=(raio*raio)*pi;
	printf("A área do circulo corresponde á aproximadamente: %f \n", area);
	system("pause");
}
