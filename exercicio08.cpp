/*
Programa: calcula a media de 4 notas.
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
	float n1=0,n2=0,n3=0,n4=0,med=0;
	printf("Informe a primeira nota:\n");
	scanf("%f", &n1);
	printf("Informe a segunda nota:\n");
	scanf("%f", &n2);
	printf("Informe a terceira nota:\n");
	scanf("%f", &n3);
	printf("Informe a quarta nota:\n");
	scanf("%f", &n4);
	med = (n1+n2+n3+n4)/4;
	printf("A média das notas é %f \n",med);
	system("pause");
}
