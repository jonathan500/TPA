//Jogo da Velha

#include <iostream>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int l=0,c=0,con=0,v1=0,v2=0,decisao=0,j1=0,j2=0,forma=0;
	char nome1[50],nome2[50],posi[3][3], teste;
	int i=0, h=0;
	
//Explicação das Regras
	printf("JOGO DA VELHA\n \n");
	printf("	1 - O Jogo acontece em uma matriz de 3 linhas por 3 colunas; \n ");
	printf("	2 - Cada jogador seleciona uma forma de sua preferência, sendo 'X' ou 'O'; \n");
	printf("	3 - As jogadas se intercalam entre os jogadores, onde cada um pode escolhar uma posição na matriz (informando o valor de uma coluna e uma linha) para posicionar sua forma; \n");
	printf("	4 - Vence aquele jogador que fechar uma reta com 3 formas iguais primeiro, podendo ser na horizontal, vertical ou nas diagonais. \n \n ");
	printf("Regras explicadas, vamos para o jogo. \n \n");
	system("pause");
	system("cls");
	
//Nome dos Jogadores
		printf("Informe o nome do 1º Jogador: ");
		scanf("%s",&nome1);
		system("cls");
		printf("Informe o nome do 2º Jogador: ");
		scanf("%s",&nome2);
		system("cls");
			
//Repetição de Partidas
	while(decisao==0){
		con=0;
		
	//Preenchimento do Tabuleiro
		for (i=0;i<3;++i){
			for (h=0;h<3;++h){
				posi[i][h] = ' ';
			}
		}
		
		//Decisão do 1º Jogador
		printf("Quem será o 1º Jogador ? \n \n");
		printf("Digite 0 para %s \n", nome1);
		printf("Digite 1 para %s \n \n", nome2);
		scanf("%i",&j1);
		system("cls");
		while (j1!=1 and j1!=0){
			printf("Número inválido, Digite um número válido \n \n");
			printf("Quem será o 1º Jogador ? \n \n");
			printf("Digite 0 para %s \n", nome1);
			printf("Digite 1 para %s \n \n", nome2);
			scanf("%i",&j1);
			system("cls");
		}
		if(j1==0){
			j2=1;
		}else{
			j2=0;
		}
		
	//Decisão da forma utilizada
		printf("Deseja usar qual forma ? \n \n");
		printf("Digite 0 para X \n");
		printf("Digite 1 para O \n \n");
		scanf("%i",&forma);
		system("cls");
		while (forma!=1 and forma!=0){
			printf("Número inválido, Digite um número válido \n \n");
			printf("Deseja usar qual forma ? \n \n");
			printf("Digite 0 para X \n");
			printf("Digite 1 para O \n \n");
			scanf("%i",&forma);
			system("cls");
		}
		
	//Contagem das rodadas da Partida
		while(con<9){
			
		//Apresentação do Tabuleiro
			printf("  1 2 3 \n");
			for (i=0;i<3;++i){
				for (h=0;h<3;++h){
					
					if(h==2){
						printf("%c",posi[i][h]);
					}else if(h==0){
						printf("%i %c|",i+1,posi[i][h]);
					}
					else{
						printf("%c|",posi[i][h]);
					}
				}
				printf("\n");
			}
			printf("\n");	
			
		//Jogadas
			printf("Informe a coluna desejada \n");
			scanf("%i",&c);
			c--;
			while (c<0 or c>2){
				printf("\nColuna inválida\n");
				printf("Informe uma coluna válida \n");
				scanf("%i",&c);
				c--;
			}
			
			printf("Informe a linha desejada \n");
			scanf("%i",&l);
			l--;
			while (l<0 or l>2){
				printf("\nLinha inválida\n");
				printf("Informe uma linha válida \n");
				scanf("%i",&l);
				l--;
			}
			system("cls");
		//Verificação de casa disponivel
			while(posi[l][c]!=' '){
				printf("  1 2 3 \n");
				for (i=0;i<3;++i){
					for (h=0;h<3;++h){
						if(h==2){
							printf("%c",posi[i][h]);
						}else if(h==0){
							printf("%i %c|",i+1,posi[i][h]);
						}else{
							printf("%c|",posi[i][h]);
						}
					}
					printf("\n");
				}
				printf("\n");
				
				printf("Posição já ocupada, selecione outra \n");
				printf("Informe a coluna desejada \n");
				scanf("%i",&c);
				c--;
				while (c<0 or c>2){
					printf("\nColuna inválida\n");
					printf("Informe uma coluna válida \n");
					scanf("%i",&c);
					c--;
				}
				
				printf("Informe a linha desejada \n");
				scanf("%i",&l);
				l--;
				while (l<0 or l>2){
					printf("\nLinha inválida\n");
					printf("Informe uma linha válida \n");
					scanf("%i",&l);
					l--;
				}
				system("cls");
			}
			
		//Adição da Forma
			if(forma==0 and con%2==0){
					posi[l][c] = 'X';
				}
				else if(forma==0 and con%2==1){
					posi[l][c]= 'O';
				}
				else if(forma==1 and con%2==0){
					posi[l][c]= 'O';
				}
				else{
					posi[l][c]= 'X';
				}
				
		//Teste de Vitória
			if(con>=4){
				//teste na diagonal
				if(con%2==0){
					if(posi[0][0]==posi[1][1] and posi[1][1]==posi[2][2] and posi[0][0]!=' '){
						con=10;
						if(j1==0){
							v1++;
							printf("O Jogador %s ganhou essa rodada!! \n \n",nome1);
							system("pause");
							system("cls");
						}else{
							v2++;
							printf("O Jogador %s ganhou essa rodada!! \n \n",nome2);
							system("pause");
							system("cls");
						}
					}
					if(posi[2][0]==posi[1][1] and posi[1][1]==posi[0][2] and posi[0][2]!=' '){
						con=10;
						if(j1==0){
							v1++;
							printf("O Jogador %s ganhou essa rodada!! \n \n",nome1);
							system("pause");
							system("cls");
						}else{
							v2++;
							printf("O Jogador %s ganhou essa rodada!! \n \n",nome2);
							system("pause");
							system("cls");
						}
					}
					//teste em coluna
					for(int i=0; i<3;i++){
						if(posi[i][0]==posi[i][1] and posi[i][1]==posi[i][2] and posi[i][0]!=' '){
							con=10;
							if(j1==0){
								v1++;
								printf("O Jogador %s ganhou essa rodada!! \n \n",nome1);
								system("pause");
								system("cls");
							}else{
								v2++;
								printf("O Jogador %s ganhou essa rodada!! \n \n",nome2);
								system("pause");
								system("cls");
							}
						}
					}
					//teste em linha
					for(int h=0; h<3;h++){
						if(posi[0][h]==posi[1][h] and posi[1][h]==posi[2][h] and posi[0][h]!=' '){
							con=10;
							if(j1==0){
								v1++;
								printf("O Jogador %s ganhou essa rodada!! \n \n",nome1);
								system("pause");
								system("cls");
							}else{
								v2++;
								printf("O Jogador %s ganhou essa rodada!! \n \n",nome2);
								system("pause");
								system("cls");
							}
						}
					}
				}else{
					//teste na diagonal
					if(posi[0][0]==posi[1][1] and posi[1][1]==posi[2][2] and posi[0][0]!=' '){
						con=10;
						if(j2==0){
							v1++;
							printf("O Jogador %s ganhou essa rodada!! \n \n",nome1);
							system("pause");
							system("cls");
						}else{
							v2++;
							printf("O Jogador %s ganhou essa rodada!! \n \n",nome2);
							system("pause");
							system("cls");
						}
					}
					if(posi[2][0]==posi[1][1] and posi[1][1]==posi[0][2] and posi[0][2]!=' '){
						con=10;
						if(j2==0){
							v1++;
							printf("O Jogador %s ganhou essa rodada!! \n \n",nome1);
							system("pause");
							system("cls");
						}else{
							v2++;
							printf("O Jogador %s ganhou essa rodada!! \n \n",nome2);
							system("pause");
							system("cls");
						}
					}
					//teste em coluna
					for(int i=0; i<3;i++){
						if(posi[i][0]==posi[i][1] and posi[i][1]==posi[i][2] and posi[i][0]!=' '){
							con=10;
							if(j2==0){
								v1++;
								printf("O Jogador %s ganhou essa rodada!! \n \n",nome1);
								system("pause");
								system("cls");
							}else{
								v2++;
								printf("O Jogador %s ganhou essa rodada!! \n \n",nome2);
								system("pause");
								system("cls");
							}
						}
					}
					//teste em linha
					for(int h=0; h<3;h++){
						if(posi[0][h]==posi[1][h] and posi[1][h]==posi[2][h] and posi[0][h]!=' '){
							con=10;
							if(j2==0){
								v1++;
								printf("O Jogador %s ganhou essa rodada!! \n \n",nome1);
								system("pause");
								system("cls");
							}else{
								v2++;
								printf("O Jogador %s ganhou essa rodada!! \n \n",nome2);
								system("pause");
								system("cls");
							}
						}
					}				
				}
			}
			
		//Teste de Empate
			if(con==8){
					printf("Deu Velha!! \n \n");
					system("pause");
				}
			con++;
		}
		printf("PLACAR: \n");
		printf("%s | %i X %i | %s \n \n", nome1,v1,v2,nome2);
		
		printf("Deseja jogar outra partida ? \n \n");
		printf("Digite 0 para SIM \n");
		printf("Digite 1 para NÃO \n \n");
		scanf("%i",&decisao);
		system("cls");
		
		while (decisao!=1 and decisao!=0){
			printf("Número inválido, Digite um número válido \n \n");
			printf("Deseja jogar outra partida ? \n \n");
			printf("Digite 0 para SIM \n");
			printf("Digite 1 para NÃO \n \n");
			scanf("%i",&decisao);
			system("cls");
		}
	}
	if(v1>v2){
		printf("O vencedor da Batalha foi o %s !! \n",nome1);
		printf("Com %i vitoria(s)!! \n \n",v1);
	}
	else if(v2>v1){
		printf("O vencedor da Batalha foi o %s !! \n",nome2);
		printf("Com %i vitoria(s)!!  \n \n",v2);
	}else{
		printf("A grande batalha terminou em Empate !! \n");
		printf("As habilidades de %s e %s são equiparaveis. \n \n", nome1, nome2);
	}
	system("pause");
	return 0;
}
