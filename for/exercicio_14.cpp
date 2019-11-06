// receba um valor inteiro e exiba todos os numeros primos de 1 até ele
/*
Programa: exibe todos os numeros primos de 1 até ele
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 28/10/2019
Data de alteração: 28/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=0,s=0,j=0,p=0;
	printf("Informe um numero \n");
	scanf("%i",&n);
	if(n>=1){
		printf("1 \n");
	}
	if(n>=2){
		printf("2 \n");
	}
	for(s=3;s<=n;s++){
		for(j=2;j<s;j++){
			if(s%j==0){
				p=1;
			}
		}
			if(p==0){
			printf("%i \n",s);
			}
		p=0;
	}
}
