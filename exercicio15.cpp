/*
Programa: Comprimento area e volume de uma esfera.
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
	float area=0, raio=0,volume=0,comprimento=0;
	const float pi=3.14,div= 3/4;
	printf("Informe o tamanho do raio do circulo: \n");
	scanf("%f",&raio);
	area=(raio*raio)*pi;
	comprimento = 2*raio*pi;
	volume=pi*raio*raio*raio*0.75;
	printf("A área do esfera corresponde á aproximadamente: %f \n O comprimento do esfera corresponde á aproximadamente: %f \n O volume da esfera corresponde a aproximadamente á: %f", area,comprimento,volume);
	system("pause");
}
