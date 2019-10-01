/*
Programa: transforma hora minutos e segundos em segundos.
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
	int hora=0,min=0,seg=0,segf=0,minf=0;
	printf("Informe a quantia em horas: \n");
	scanf("%i",&hora);
	printf("Informe a quantia em minutos: \n");
	scanf("%i",&min);
	printf("Informe a quantia em segundos: \n");
	scanf("%i",&seg);
	minf=hora*60;
	segf=minf*60+min*60+seg;
	printf("O resultado é : %i segundos",segf);
	system("pause");
}
