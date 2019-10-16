//Faça um algoritimo para colocar em ordem crescente 3 números
/*
Programa: coloca 3 numeros em ordem crescente
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração:16/10/2019
*/
#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n1=0,n2=0,n3=0, maior=0, meio=0,menor=0;
	printf("Informe o 1º número: \n");
	scanf("%i",&n1);
	printf("Informe o 2º número: \n");
	scanf("%i",&n2);
	if (n1>n2){
		maior=n1;
		menor=n2;
	}else{
		maior=n2;
		menor=n1;
	}
	printf("Informe o 3º número: \n");
	scanf("%i",&n3);
	if (n3>maior){
		meio=maior;
		maior=n3;
	}else if(n3>menor){
		meio=n3;
	}else{
		meio=menor;
		menor=n3;
	}
	printf("A ordem crescente é %i %i %i", menor, meio, maior);
	return 0;
}
