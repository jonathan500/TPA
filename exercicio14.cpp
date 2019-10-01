/*
Programa: Média entre as alturas de duas pessoas.
Autor: Jonathan Ricardo Pereira Izidoro. 
Data: 30/09/2019.
Data da Alteração:  01/10/2019
*/
#include<stdio.h>
#include <conio.h>
#include <windows.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"""");
	char nome1[20], nome2[20];
	float a1=0,a2=0,md=0;
	printf("Informe o seu nome: \n");
	scanf("%s", &nome1);
	printf("Informe sua altura: \n");
	scanf("%f", &a1);
	printf("Segunda pessoa informe o seu nome: \n");
	scanf("%s", &nome2);
	printf("Segunda pessoa informe sua altura: \n");
	scanf("%f", &a2);
	md = (a1 + a2 )/2;
	printf("A media de altura de %s e %s é %f \n",nome1,nome2,md);
	system("pause");
}
