// Crie um algoritimo que some todos os numeros impares de 1 ao numero informado
/*
Programa: soma de numeros impares
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=0,n1=0,n2=1;
	printf("Informe um numero: \n");
	scanf("%i",&n);
	while(n2<=n){
		if(n2%2==1){
			n1=n1+n2;
		}
	n2=n2+1;
	}
	printf("A soma dos números impares é: %i",n1);
}
