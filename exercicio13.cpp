/*
Programa: Média ponderada.
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
	float n1=0,n2=0,n3=0,n4=0,med=0,p1=0,p2=0,p3=0,p4=0;
	printf("Informe a primeira nota:\n");
	scanf("%f", &n1);
	printf("Informe a segunda nota:\n");
	scanf("%f", &n2);
	printf("Informe a terceira nota:\n");
	scanf("%f", &n3);
	printf("Informe a quarta nota:\n");
	scanf("%f", &n4);
	printf("Informe o peso da primeira nota:\n");
	scanf("%f", &p1);
	printf("Informe o peso da segunda nota:\n");
	scanf("%f", &p2);
	printf("Informe o peso da terceira nota:\n");
	scanf("%f", &p3);
	printf("Informe o peso da quarta nota:\n");
	scanf("%f", &p4);
	med = (n1*p1+n2*p2+n3*p3+n4*p4)/(p1+p2+p3+p4);
	printf("A média ponderada das notas é %f \n",med);
	system("pause");
}
