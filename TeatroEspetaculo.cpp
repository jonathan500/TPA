//Programa Teatro
//programa finalizado no dia 03/12/2019 e inicializado no dia 20/11/2019
// 9 vesões foram criadas porem a ultima que é esta tem todas as funcionalidades "FUNCIONANDO"
//Este programa foi realizado em dupla por Henrique Queiroz de Paula & Jonathan Ricardo Pereira Izidoro
//RM: 19015 e 19018




#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int escolha=0,linhaU=0,linhaU2=0,colunaU=0,colunaU2=0,escolha3=0,disponivel=0,reservado=0,meia=0,inteiro=0,faltam=0; 
	float preco=0,pagamento=0,pagamento2=0,soma=0,area=0, toto=0;
	char teatro[500][500];
	bool verdadeiro=true,sim=true;
	
	while(verdadeiro){
		printf("-- Informe o número da ação desejada \n\n");
		printf(" +====================================================+\n");	
		printf(" | [1].Informar o valor do ingresso e tamanho da sala |\n");
		printf(" | [2].Abrir um espetáculo                            |\n");
		printf(" | [3].Reservar ou cancelar a reserva de um lugar     |\n");
		printf(" | [4].Vender um lugar - inteira                      |\n");
		printf(" | [5].Vender um lugar - meia                         |\n");
		printf(" | [6].Verificar mapa do teatro                       |\n");
		printf(" | [7].Encerrar o espetáculo                          |\n");
		printf(" | [8].Verificar parciais                             |\n");
		printf(" +====================================================+\n   :");
		scanf("%i",&escolha);
		switch(escolha){
			case 1:
				printf(" +=============================+\n");
				printf(" |  Informe o tamanho da sala  |\n");
				printf(" +=============================+\n");
				printf("-- Informe o numero de linhas:  \n   :");
				scanf("%i",&linhaU);
				printf("\n-- Informe o numero de colunas: \n   :");
				scanf("%i",&colunaU);
				while(colunaU*linhaU>500 or colunaU*linhaU<=0 or colunaU<0 or linhaU<0){
					system("cls");
					printf("\n +===================================+\n");
					printf(" |  O número de lugares é invalido   |\n");
					printf(" +===================================+\n");
					printf("-- Informe o número de linhas: \n   :");
					scanf("%i",&linhaU);
					printf("\n-- Informe o número de colunas \n   :");
					scanf("%i",&colunaU);
				}
				printf("\n +===================================+\n");
				printf(" |    Informe o valor do ingresso    |\n");
				printf(" +===================================+\n   :");
				scanf("%f",&preco);
				
				printf("\n +=====================+\n");
				printf(" |  Valor do ingresso  |\n");
				printf(" +=====================+\n");
				printf("-- Inteira: %.2f \n", preco);
				printf("-- Meia: %.2f \n\n\n", preco/2);
			//Reset visual
				system("pause");
				system("cls");
				for(int c=0;c<colunaU;c++){
						for(int l=0;l<linhaU;l++){
							teatro[l][c]=' ';
						}
					}
			break;
			
			case 2:
				if(colunaU==0 or linhaU==0){
					printf("\n +=====================+\n");
					printf(" |  Processo inválido  |\n");
					printf(" +=====================+\n");
				}else{
					printf("\n +=========================================+\n");
					printf(" |   Todas as cadeiras estão disponiveis   |\n");
					printf(" +=========================================+\n\n\n");
					for(int c=0;c<colunaU;c++){
						for(int l=0;l<linhaU;l++){
							teatro[l][c]='D';
						}
					}
				}
				
			//Reset visual
				system("pause");
				system("cls");
			break;
			
			case 3:
				if(colunaU==0 or linhaU==0 or teatro[colunaU-1][linhaU-1]==' '){
					printf("\n +=====================+\n");
					printf(" |  Processo inválido  |\n");
					printf(" +=====================+\n");
				}else{
					printf("\n +=======================================+\n");
					printf(" |Escolha sua opção:                      |\n");
					printf(" |1 - Para reservar um lugar              |\n"); 
					printf(" |2 - Para cancelar a reserva de um lugar |\n");
					printf(" +========================================+\n   :");
					scanf("%i",&escolha3);
					while(escolha3!=1 and escolha3!=2){
						printf("\n +=============================================+\n");
						printf(" |Escolha inválida digite novamente sua opção:  |\n");
						printf(" |1 - Para reservar um lugar                    |\n"); 
						printf(" |2 - Para cancelar a reserva de um lugar       |\n");
						printf(" +==============================================+\n   :");
						scanf("%i",&escolha3);
					}
					if(escolha3==1){
						while(sim){
							
							//SELEÇÃO DO LUGAR DESEJADO
							printf("\n +=========================+\n");
							printf(" |  Escolha o(s) lugar(es)  |\n");
							printf(" +==========================+\n");
							printf("-- Informe a linha desejada:\n   :");
							scanf("%i",&linhaU2);
							printf("-- Informe a coluna desejada:\n   :");
							scanf("%i",&colunaU2);
							while(teatro[linhaU2-1][colunaU2-1]!='D' or linhaU2>linhaU or colunaU2>colunaU){
								printf("\n +===============================+\n");
								printf(" | Lugar inválido, informe outro  |\n");
								printf(" +================================+\n");
								printf("-- Informe a linha desejada:\n   :");
								scanf("%i",&linhaU2);
								printf("-- Informe a coluna desejada:\n   :");
								scanf("%i",&colunaU2);
							}
							
							//PAGAMENTO
						
							printf("\n +=================================+\n");
							printf(" |  Digite o quanto você irá pagar  |\n");
							printf(" +==================================+\n   :");
							scanf("%f",&pagamento);
							soma=soma+pagamento;
							pagamento = preco*0.6 - pagamento;
							while(pagamento>0){
								printf("\n +============================================+\n");
								printf(" |       Ainda faltam %.2f a serem pagos       |\n",pagamento);
								printf(" |    Digite novamente quanto você irá pagar:  |\n");
								printf(" +=============================================+\n   :");
								scanf("%f",&pagamento2);
								pagamento= pagamento - pagamento2;
								soma=soma+pagamento2;
							}
							if(pagamento==0){
								printf("\n +==============================+\n");
								printf(" |  Lugar reservado com sucesso  |\n");
								printf(" +===============================+\n");						
							}else{
								printf("\n +============================================+\n");
								printf(" |         Lugar reservado com sucesso         |\n");
								printf(" |    		 Seu troco é de RS %.2f            |\n",pagamento*-1);
								printf(" +=============================================+\n   :");
								soma=soma+pagamento;
							}
							pagamento=0;
							pagamento2=0;
							teatro[linhaU2-1][colunaU2-1]='R';
							
							//SELEÇÃO DE MAIS LUGARES OU NÃO
							
							printf("\n +======================================+\n");
							printf(" |Você deseja selecionar mais lugares?   |\n");
							printf(" |1 - Para Sim                           |\n"); 
							printf(" |2 - Para Não                           |\n");
							printf(" +=======================================+\n   :");
							scanf("%i",&escolha3);
							while(escolha3!=1 and escolha3!=2){
								printf("\n +=======================+\n");
								printf(" |Escolha inválida        |\n");
								printf(" |1 - Para Sim            |\n"); 
								printf(" |2 - Para Não            |\n");
								printf(" +========================+\n   :");
								scanf("%i",&escolha3);
							}
							if(escolha3==2){
								sim=false;
							}
						}
						sim=true;
					}else{
						while(sim){
							printf("\n +=========================+\n");
							printf(" |  Escolha o(s) lugar(es)  |\n");
							printf(" +==========================+\n");
							printf("-- Informe a linha desejada:\n   :");
							scanf("%i",&linhaU2);
							printf("-- Informe a coluna desejada:\n   :");
							scanf("%i",&colunaU2);
							while(teatro[linhaU2-1][colunaU2-1]!='R' or linhaU2>linhaU or colunaU2>colunaU){
								printf("\n +===============================+\n");
								printf(" | Lugar inválido, informe outro  |\n");
								printf(" +================================+\n");
								printf("-- Informe a linha desejada:\n   :");
								scanf("%i",&linhaU2);
								printf("-- Informe a coluna desejada:\n   :");
								scanf("%i",&colunaU2);
							}
							printf("\n +================================+\n");
							printf(" |  Reserva cancelada com sucesso  |\n");
							printf(" +=================================+\n\n");
							printf("\n +=======================+\n");
							printf(" |Escolha inválida        |\n");
							printf(" |1 - Para Sim            |\n"); 
							printf(" |2 - Para Não            |\n");
							printf(" +========================+\n   :");
							scanf("%i",&escolha3);
							while(escolha3!=1 and escolha3!=2){
								printf("\n +=======================+\n");
								printf(" |Escolha inválida        |\n");
								printf(" |1 - Para Sim            |\n"); 
								printf(" |2 - Para Não            |\n");
								printf(" +========================+\n   :");
								scanf("%i",&escolha3);
							}
							if(escolha3==2){
								sim=false;
							}
						}
						sim=true;					
					}
				}
			//Reset visual
				system("pause");
				system("cls");
			break;
			
			case 4:
				if(colunaU==0 or linhaU==0 or teatro[colunaU-1][linhaU-1]==' '){
					printf("\n +=====================+\n");
					printf(" |  Processo inválido  |\n");
					printf(" +=====================+\n");
				}else{
					//VENDA DE LUGARES INTEIRA
						//SELEÇÃO DO LUGAR
						printf("\n +=========================+\n");
						printf(" |  Escolha o(s) lugar(es)  |\n");
						printf(" +==========================+\n");
						printf("-- Informe a linha desejada:\n   :");
						scanf("%i",&linhaU2);
						printf("-- Informe a coluna desejada:\n   :");
						scanf("%i",&colunaU2);
						while(linhaU2==0 or colunaU2==0 or teatro[linhaU2-1][colunaU2-1]=='C' or linhaU2>linhaU or colunaU2>colunaU){
							printf("\n +===============================+\n");
							printf(" | Lugar inválido, informe outro  |\n");
							printf(" +================================+\n");
					 	    printf("-- Informe a linha desejada:\n   :");
							scanf("%i",&linhaU2);
							printf("-- Informe a coluna desejada:\n   :");
							scanf("%i",&colunaU2);
						}
						
						//VERIFICAÇÃO DO LUGAR SE ELE É RESERVADO OU NÃO
						if(teatro[linhaU2-1][colunaU2-1]=='R'){
							printf("\n +=================================+\n");
							printf(" |  Digite o quanto você irá pagar  |\n");
							printf(" +==================================+\n   :");
							scanf("%f",&pagamento);
							soma=soma+pagamento;
							pagamento = preco*0.4 - pagamento;
							while(pagamento>0){
								printf("\n +============================================+\n");
								printf(" |       Ainda faltam %.2f a serem pagos       |\n",pagamento);
								printf(" |    Digite novamente quanto você irá pagar:  |\n");
								printf(" +=============================================+\n   :");
								scanf("%f",&pagamento2);
								pagamento= pagamento - pagamento2;
								soma=soma+pagamento2;
							}
							if(pagamento==0){
								printf("\n +===============================+\n");
								printf(" |   Lugar comprado com sucesso   |\n");
								printf(" +================================+\n");								
							}else{
								printf("\n +============================================+\n");
								printf(" |          Lugar comprado com sucesso         |\n");
								printf(" |    		 Seu troco é de RS %.2f            |\n",pagamento*-1);
								printf(" +=============================================+\n   :");
								soma=soma+pagamento;
							}
							teatro[linhaU2-1][colunaU2-1]='C';
							inteiro++;
						}else{
							printf("\n +=================================+\n");
							printf(" |  Digite o quanto você irá pagar  |\n");
							printf(" +==================================+\n   :");
							scanf("%f",&pagamento);
							soma=soma+pagamento;
							pagamento = preco - pagamento;
							while(pagamento>0){
								printf("\n +============================================+\n");
								printf(" |       Ainda faltam %.2f a serem pagos       |\n",pagamento);
								printf(" |    Digite novamente quanto você irá pagar:  |\n");
								printf(" +=============================================+\n   :");
								scanf("%f",&pagamento2);
								pagamento= pagamento - pagamento2;
								soma=soma+pagamento2;
							}
							if(pagamento==0){
								printf("\n +===============================+\n");
								printf(" |   Lugar comprado com sucesso   |\n");
								printf(" +================================+\n");							
							}else{
								printf("\n +============================================+\n");
								printf(" |          Lugar comprado com sucesso         |\n");
								printf(" |    		 Seu troco é de RS %.2f            |\n",pagamento*-1);
								printf(" +=============================================+\n   :");
								soma=soma+pagamento;
							}
							teatro[linhaU2-1][colunaU2-1]='C';
							inteiro++;
						}
				}
			//Reset visual
				system("pause");
				system("cls");
			break;
			
			case 5:
				if(colunaU==0 or linhaU==0 or teatro[colunaU-1][linhaU-1]==' '){
					printf("\n +=====================+\n");
					printf(" |  Processo inválido  |\n");
					printf(" +=====================+\n");
				}else{
					//VENDA DE LUGARES MEIA
						//SELEÇÃO DO LUGAR
						printf("\n +=========================+\n");
						printf(" |  Escolha o(s) lugar(es)  |\n");
						printf(" +==========================+\n");
						printf("-- Informe a linha desejada:\n   :");
						scanf("%i",&linhaU2);
						printf("-- Informe a coluna desejada:\n   :");
						scanf("%i",&colunaU2);
						while(linhaU2==0 or colunaU2==0 or teatro[linhaU2-1][colunaU2-1]!='D' or linhaU2>linhaU or colunaU2>colunaU){
							printf("\n +===============================+\n");
							printf(" | Lugar inválido, informe outro  |\n");
							printf(" +================================+\n");
					 	    printf("-- Informe a linha desejada:\n   :");
							scanf("%i",&linhaU2);
							printf("-- Informe a coluna desejada:\n   :");
							scanf("%i",&colunaU2);
						}
						printf("\n +=================================+\n");
						printf(" |  Digite o quanto você irá pagar  |\n");
						printf(" +==================================+\n   :");
						scanf("%f",&pagamento);
						soma=soma+pagamento;
						pagamento = preco*0.5 - pagamento;
						while(pagamento>0){
                            printf("\n +============================================+\n");
							printf(" |       Ainda faltam %.2f a serem pagos       |\n",pagamento);
							printf(" |    Digite novamente quanto você irá pagar:  |\n");
							printf(" +=============================================+\n   :");
                            scanf("%f",&pagamento2);
                            pagamento= pagamento - pagamento2;
                            soma=soma+pagamento2;
                        }
                        if(pagamento==0){
                            printf("\n +===============================+\n");
							printf(" |   Lugar comprado com sucesso   |\n");
							printf(" +================================+\n");
                        }else{
                            printf("\n +============================================+\n");
								printf(" |          Lugar comprado com sucesso         |\n");
								printf(" |    		 Seu troco é de RS %.2f            |\n",pagamento*-1);
								printf(" +=============================================+\n   :");
                            soma=soma+pagamento;
                        }
                        teatro[linhaU2-1][colunaU2-1]='C';
                        meia++;
				}
			//Reset visual
				system("pause");
				system("cls");
			break;
			
			case 6:
				if(colunaU==0 or linhaU==0 or teatro[colunaU-1][linhaU-1]==' '){
					printf("\n +=====================+\n");
					printf(" |  Processo inválido  |\n");
					printf(" +=====================+\n");
				}else{
					if(colunaU==0 or linhaU==0){
						printf("\n +=====================+\n");
						printf(" |    Opção inválida   |\n");
						printf(" +=====================+\n");
					}else{
						for(int i=0;i<linhaU;i++){
							printf("                                ");
							for(int c=0;c<colunaU;c++){
								printf(" { %c } ",teatro[i][c]);
							}
							printf("\n");
						}
					}
				}
				
			//Reset visual
				system("pause");
				system("cls");
			break;
			
			case 7:
				if(colunaU==0 or linhaU==0 or teatro[colunaU-1][linhaU-1]==' '){
					printf("\n +====================+\n");
					printf(" |  Processo inválido  |\n");
					printf(" +=====================+\n");
				}else{
					area=linhaU*colunaU;
					if(meia+inteiro>=area*0.6){
						printf("+========+\n");
						printf("|  Show  |\n");
						printf("+========+\n");
					}else{
						toto=(area*0.6) - (meia+inteiro);
						faltam=toto;
						if(toto>faltam){
							faltam++;
						}
						
						printf("\n +============================================+\n");
						printf(" |       O teatro não pode ser executado       |\n");
						printf(" |   Faltam %i de lugares para serem ocupados  |\n",faltam); 
						printf(" +=============================================+\n\n");
						printf("\n +===========================================+\n");
						printf(" |Deseja encerrar o espetaculo mesmo assim ?  |\n");
						printf(" |1 - Para Sim                                |\n"); 
						printf(" |2 - Para Não                                |\n");
						printf(" +============================================+\n   :");
						scanf("%i",&escolha3);					
						while(escolha3!=1 and escolha3!=2){
							printf("\n +=======================+\n");
							printf(" |Escolha inválida        |\n ");
							printf(" |1 - Para Sim            |\n"); 
							printf(" |2 - Para Não            |\n");
							printf(" +========================+\n   :");
							scanf("%i",&escolha3);
						}
						if(escolha3==2){
								system("pause");
								system("cls");
							break;
						}else if(escolha3==1){
							printf("+=================+\n");
							printf("|  Show Cancelado |\n");
							printf("+=================+\n");
						}
						sim=true;
					}
					escolha=0,linhaU=0,linhaU2=0,colunaU=0,colunaU2=0,escolha3=0,disponivel=0,reservado=0; 
	 				preco=0,pagamento=0,pagamento2=0,soma=0,faltam=0,area=0,meia=0,inteiro=0;
					verdadeiro=true,sim=true;
			}
			//Reset visual
				system("pause");
				system("cls");
			break;
			
			case 8:
				if(colunaU==0 or linhaU==0 or teatro[colunaU-1][linhaU-1]==' '){
					printf("\n +=====================+\n");
					printf(" |  Processo inválido  |\n");
					printf(" +=====================+\n");
				}else{
					for(int i=0;i<linhaU;i++){
						for(int c=0;c<colunaU;c++){
							if(teatro[i][c]=='D'){
								disponivel++;
							}else if(teatro[i][c]=='R'){
								reservado++;
							}
						}
					}
				printf("\n +===================================+\n");
				printf(" |Verificações Parciais               |\n");
				printf(" |Lugares disponiveis: %i             |\n", disponivel);
				printf(" |Lugares reservados: %i              |\n", reservado);
				printf(" |Lugares comprados: %i               |\n", meia+inteiro);
				printf(" |--- Inteira: %i                     |\n", inteiro);
				printf(" |--- Meia: %i                        |\n", meia);
				printf(" |Total de dinheiro arrecadado: %.2f  |\n", soma);
				printf(" +====================================+\n");
				
				area=linhaU*colunaU;
				if(meia+inteiro>=area*0.6){
					printf("\n +=============================================+\n");
					printf(" |  O teatro pode ser executado tranquilamente  |\n");
					printf(" +==============================================+\n");
					printf("");
				}else{
					toto=(area*0.6) - (meia+inteiro);
					faltam=toto;
					if(toto>faltam){
						faltam++;
					}
					printf("\n +============================================+\n");
					printf(" |       O teatro não pode ser executado       |\n");
					printf(" |   Faltam %i de lugares para serem ocupados  |\n",faltam); 
					printf(" +=============================================+\n\n");
				}
				reservado=0;
				disponivel=0;
			}
		
			//Reset visual
				system("pause");
				system("cls");
			break;
			case 19015 :
					printf("\n +============================================+\n");
					printf(" |               Programa feito por:            |\n");
					printf(" |            Jonathan R. & Henrique Q.         |\n"); 
					printf(" +=============================================+\n\n");
				break;
			case 19018 :
					printf("\n +============================================+\n");
					printf(" |               Programa feito por:            |\n");
					printf(" |            Jonathan R. & Henrique Q.         |\n"); 
					printf(" +=============================================+\n\n");
				break;
			default:
				printf("\n +=============================+\n");
				printf(" |  Opção inválida informe outra  |\n");
				printf(" +================================+\n");
			//Reset visual
				system("pause");
				system("cls");
			break;
		}
	}
}
