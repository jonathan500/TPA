//Crie um algoritimo que mostre se um n�mero � par ou impar
/*
Programa: par ou impar
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de altera��o:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int num=0;
	printf("Informe um n�mero: \n");
	scanf("%i", &num);
	if(num==0){
		printf("O n�mero %i � nulo", num);
	}else if(num%2==0){
		printf("O n�mero %i � par", num);
	}else{
		printf("O n�mero %i � impar",num);
	}
	return 0;
}
