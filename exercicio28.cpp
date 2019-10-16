//Crie um algoritimo que mostre se um número é par ou impar
/*
Programa: par ou impar
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int num=0;
	printf("Informe um número: \n");
	scanf("%i", &num);
	if(num==0){
		printf("O número %i é nulo", num);
	}else if(num%2==0){
		printf("O número %i é par", num);
	}else{
		printf("O número %i é impar",num);
	}
	return 0;
}
