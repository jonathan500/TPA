/*
Programa: Area de um retangulo.
Autor: Jonathan Ricardo Pereira Izidoro. 
Data: 29/09/2019.
Data da Altera��o: 30/09/2019
*/
#include<stdio.h>
#include <conio.h>
#include <windows.h>
int main(){
	int base=0, altura = 0, area=0;
	printf("Informe a base do ret�ngulo:\n");
	scanf("%i", &base);
	printf("Informe a altura do ret�ngulo:\n");
	scanf("%i", &altura);
	area  = base*altura;
	printf("A area do ret�ngulo corresponde �: %i \n", area);
	system("pause");
}
