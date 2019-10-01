/*
Programa: Calcula o imc de uma pessoa.
Autor: Jonathan Ricardo Pereira Izidoro. 
Data: 30/09/2019.
Data da Alteração: 30/09/2019
*/
#include<stdio.h>
#include <conio.h>
#include <windows.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"""");
	float altura=0,peso=0,imc=0;
	printf("Informe a sua altura: \n");
	scanf("%f", &altura);
	printf("Informe o seu peso: \n");
	scanf("%f", &peso);
	imc= (peso/altura) * altura;
	printf("O seu imc é: %f \n", imc);
	system("pause");
}
