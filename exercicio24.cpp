//Ler 3 números e informar qual é o maior
/*
Programa: Lê três números e mostrar o maior
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n1=0,n2=0,n3=0,maior=0;
	printf("Informe o 1º número: \n");
	scanf("%i",&n1);
	printf("Informe o 2º número: \n");
	scanf("%i",&n2);
	if (n1>n2){
		maior=n1;
	}else{
		maior=n2;
	}
	printf("Informe o 3º número: \n");
	scanf("%i",&n3);
	if (n3>maior){
		maior=n3;
	}
	printf("O maior número é %i", maior);
	return 0;
}
