//Sabendo que 6 é um nº perfeito, exiba todos os perfeitos de 1 a 10000.
//Nº perfeito = divisores naturais com exeção dele, somados resultam nele.
//6 = 1+2+3
/*
Programa: Exiba os números perfeitos de 1 a 10000
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 28/10/2019
Data de alteração: 28/10/2019
Data de alteração: 06/11/2019
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
