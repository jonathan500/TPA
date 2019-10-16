//Elabore um algoritimo que dada a idade de um nadador classifique-o em uma das seguintes categorias
// entre 5 a 11 = infantil
// entre 12 a 17 = juvenil
// entre 18 a N =  Adulta
/*
Programa: Classifica um nadador em categorias=
Autor 01: Henrique Queiroz de Paula
Autor 02: Jonathan Ricardo Pereira Izidoro
Data: 09/10/2019
Data de alteração:16/10/2019
*/
#include<iostream>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int idade=0;	
	printf("Informe sua idade: ");
	scanf("%i",&idade);
	if(idade<9){
		printf("Você não possui idade suficente para competir \n");
	}else if(idade<=11 && idade>=9){
		printf("Sua faxietaria é de 9 a 11 anos, categoria Infantil \n");
	}else if(idade>=12 && idade<=17){
		printf("Sua faxietaria é de 12 a 17 anos, categoria Juvenil \n");
	}else{
		printf("Sua idade é igual ou acima de 18 anos, categoria Adultos \n \n");
	}
	return 0;
}
