/*
Programa: Transforma graus celcius em fahrenheit.
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
	float c=0,f=0;
	printf("informe os graus celcius:\n");
	scanf("%f", &c);
	f= (c*1.8)+32;
	printf("O resltado é : %f \n",f);
	system("pause");
}
	
