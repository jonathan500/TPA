//Crie um algoritimo que leia dois n�meros e mostre o maior numero digitado pelo usu�rio
/*
Programa: Leitura de dois n�meros e mostra o maior
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de altera��o:16/10/2019
*/
#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int	n1=0,n2=0;
	printf("Informe um n�mero: \n");
	scanf("%i",&n1);
	printf("Informe outro n�mero: \n");
	scanf("%i",&n2);
	if (n1==n2){
		printf("Os n�meros %i e %i s�o iguais", n1, n2);
	}
	else if(n1>n2){
		printf("O maior n�mero � %i", n1);
	}else{
		printf("O maior n�mero � %i", n2);
	}
}
