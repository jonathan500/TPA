// Crie um algoritimo que calcule o quadrado de um numero informado pelo usuario e sai do programa quando o usuario digitar 0;
/*
Programa: quadrado do numero e sai quando digita 0
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float na=0, n1=1;
	while(n1==1){
		printf("Informe um número \n");
		scanf("%f",&na);
		if(na==0){
			n1=0;
		}else{
		
		printf("O quadrado do número é %f \n \n",na*na);
	}
	}
}

