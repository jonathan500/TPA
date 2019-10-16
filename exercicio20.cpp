//Crie um algoritmo que troque o valor de a para o valor de b
/*
Programa: Troca de número
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração:16/10/2019
*/

#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n1=0,n2=0,n3=0;
	printf("Informe o 1º número: \n");
	scanf("%i",&n1);
	printf("Informe o 2º número: \n");
	scanf("%i",&n2);
	n3=n2;
	n2=n1;
	n1=n3;
	printf("Os valores %i e %i foram trocados", n1,n2);	
	return 0;
}
