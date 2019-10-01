/*
Programa: calcula o novo salario de um funcionario
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
	float salario=0, aumento=0, tot=0;
	printf("Informe o salário do funcionário:\n");
	scanf("%f",&salario);
	printf("Informe o percentual de aumento/100:\n");
	scanf("%f",&aumento);
	tot= salario+(salario*(aumento/100));
	printf("O novo salário do funcionário e %f \n",tot);
	system("pause");
	
}
