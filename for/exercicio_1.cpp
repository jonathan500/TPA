// Crie um algoritimo que calcule e mostre a tabuada do 7
/*
Programa: tabuada do 7
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	for(int n1=0;n1<=10;n1++){
		printf("%i x 7 = %i \n",n1,n1*7);
	}
}
