//Sabendo que 6 � um n� perfeito, exiba todos os perfeitos de 1 a 10000.
//N� perfeito = divisores naturais com exe��o dele, somados resultam nele.
//6 = 1+2+3
/*
Programa: Exiba os n�meros perfeitos de 1 a 10000
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 28/10/2019
Data de altera��o: 28/10/2019
Data de altera��o: 06/11/2019
*/
#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=1,p=0,div=1;
	for(n=1;n<=10000;n++){
		for(div=1;div<n;div++){
			if(n%div==0){
				p=p+div;
			}
		}
		if(p==n){
				printf("%i \n",p);
				div=n;
		}
		p=0;
	}
		
	system("pause");
}
