//Escreva um algoritmo em que receba 2 valores reais e a partir de menu de op��es permita o usuario a fazer opera��es correspondente a tabela abaixo
// C�digo | Opera��o
// 1      |    +
// 2      |    -
// 3      |    X
// 4      |    �
/*
Programa: Programa para escolher uma opera��o
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de altera��o: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1=0,n2=0;
	int n3=0;
	printf("Informe o n�mero: \n");
	scanf("%f",&n1);
	printf("Informe outro n�mero: \n");
	scanf("%f",&n2);
	printf("Escolha uma op��o da Tabela");
	printf("C�digo | Opera��o \n 1      |    + \n 2      |    - \n 3      |    X \n 4      |    � \n");
	scanf("%i",&n3);
	switch(n3){
		case 1:
			n1=n2+n1;
			printf("A soma dos n�meros �: %f",n1);
		break;
			
		case 2: n1=n1-n2;
			printf("A subtra��o dos n�meros �: %f",n1);
		break;
		
		case 3: n1=n1*n2;
			printf("A multiplica��o dos n�meros �: %f",n1);
		break;
		
		case 4: n1=n1/n2;
			printf("A divis�o dos n�meros �: %f",n1);
		break;
		
		default: printf("C�digo invalido");
		break;
		
}
}
