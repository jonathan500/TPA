// sabendo que a s�rie de fibonacci � a seguinte 0,1,1,2,3,5,8 exiba o en�simo numero informado
/*
Programa: exibe o en�simo numero informado na sequencia de fibonacci
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 28/10/2019
Data de altera��o: 28/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1=0,n2=1,n3=0;
	printf("Informe a posi��o da sequencia: \n");
	scanf("%i",&n1);
	for(int c=0;c<=n1;c++){
		n2=n3+n2;
		n3=n2-n3;
	}
	printf("O numero da posi��o informada �: %i",n2,"\n");
}
