//ler 10 numeros e informar o maior n�mero e o menor n�mero
/*
Programa: ler 10 numeros e informar o maior e o menor
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de altera��o: 23/10/2019
*/
#include<iostream>
#include<locale.h>

int main(){
	int n1=0,maior=0,menor=0;
	setlocale(LC_ALL,"Portuguese");
	for(int i=0; i<10;i++){
		printf("Informe um numero \n");
		scanf("%i",&n1);
		if(i==0){
			maior=n1;
			menor=n1;
		}
		if(n1>maior){
			maior=n1;
		}if(n1<menor){
			menor=n1;
		}
	}
	printf("O maior n�mero � %i e o menor n�mero � %i",maior,menor);
}
