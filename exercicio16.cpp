/*
Programa: Calcula a quantia de potencia nesses�ria para iluminar um comodo.
Autor: Jonathan Ricardo Pereira Izidoro. 
Data: 29/09/2019.
Data da Altera��o: 30/09/2019
*/
#include<stdio.h>
#include <conio.h>
#include <windows.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"""");
	int compri=0, altura = 0,watz=0;
	printf("informe o comprimento\n");
	scanf("%i", &compri);
	printf("informe a altura \n");
	scanf("%i", &altura);
	watz = compri*altura*18;
	printf("A quantidade nesses�ria em watz de potencia para iluminar este comodo �: %i \n",watz);
	system("pause");
}
