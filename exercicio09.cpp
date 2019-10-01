/*
Programa: Calcula o quociente e o resto.
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
	int divide=0, divisor=0, quoci=0, resto=0;
	printf("Informe o dividendo:\n");
	scanf("%i",&divide);
	printf("Informe o divisor: \n");
	scanf("%i",&divisor);
	quoci=(divide/divisor);
	resto = (divide-(divisor*quoci));
	printf("O Quociente é: %i, e o Resto é: %i \n",quoci,resto);
	system("pause");
}
