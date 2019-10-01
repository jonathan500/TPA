/*
Programa: transforma segundos em horas minutos e segundos.
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
	printf("Informe a quantia em segundos: \n");
	scanf("%i",&seg);
	hora=seg/3600;
	min= (seg-hora*3600)/60;
	segf= ((seg-hora*3600)-min*60);
	printf("O resultado é : %i hora(s) %i minuto(s) %i segundo(s) \n",hora,min,segf);
	system("pause");
}
