//Receber um valor inteiro e se este valor for maior que 5 e menor que 20, exibir seu cubo
/*
Programa: Exibe o cubo de um numero que esta entre 5 e 20
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração:16/10/2019
*/
#include<iostream>
#include<locale.h>

int main(){
	int n1=0;
	setlocale(LC_ALL,"");
	printf("Informe um numero:\n");
	scanf("%i",&n1);
	if(n1>5 and n1<20){
		n1 = n1*n1;
	}
	printf("O numero é: %i \n",n1);
	system("pause");
}
