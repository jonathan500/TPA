// Calcule a media anual de 5 alunos sabendo que eles possuem 2 notas por semestre
/*
Programa: Calcula a media anual
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 23/10/2019
Data de alteração: 23/10/2019
*/
#include<iostream>
#include<locale.h>
int main(){
	char nome[50];
	int n1=0, n2=0;
	setlocale(LC_ALL,"Portuguese");
	for(int i=0; i<5;i++){
		printf("Informe o nome do aluno: \n");
		scanf("%s",&nome);
		printf("Informe a nota 1º Semestre: \n");
		scanf("%i",&n1);
		printf("Informe a nota 2º Semestre: \n");
		scanf("%i",&n2);
		printf("A média do aluno(a) %s é %i \n",nome,(n1+n2)/2);
	} 
}
