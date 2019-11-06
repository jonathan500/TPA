//Escreva um algoritmo em que receba 2 valores reais e a partir de menu de opções permita o usuario a fazer operações correspondente a tabela abaixo
// Código | Operação
// 1      |    +
// 2      |    -
// 3      |    X
// 4      |    ÷
/*
Programa: Programa para escolher uma operação
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1=0,n2=0;
	int n3=0;
	printf("Informe o número: \n");
	scanf("%f",&n1);
	printf("Informe outro número: \n");
	scanf("%f",&n2);
	printf("Escolha uma opção da Tabela");
	printf("Código | Operação \n 1      |    + \n 2      |    - \n 3      |    X \n 4      |    ÷ \n");
	scanf("%i",&n3);
	switch(n3){
		case 1:
			n1=n2+n1;
			printf("A soma dos números é: %f",n1);
		break;
			
		case 2: n1=n1-n2;
			printf("A subtração dos números é: %f",n1);
		break;
		
		case 3: n1=n1*n2;
			printf("A multiplicação dos números é: %f",n1);
		break;
		
		case 4: n1=n1/n2;
			printf("A divisão dos números é: %f",n1);
		break;
		
		default: printf("Código invalido");
		break;
		
}
}
