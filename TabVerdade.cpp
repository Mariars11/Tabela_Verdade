#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Windows.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int aux;
	char p, q, sair; //representam as proposi��es
	
	printf("\n\n");
	printf("\t _______________________________________________\n");
	printf("\t|\t\t\t\t\t\t|");
	printf("\n\t|  	Bem-vind@ � tabela l�gica em C \t\t|\n");
	printf("\t|\t\t\t\t\t\t|\n");
	//Menu - contextualiza��o do switch case
	printf("\n -> MENU");
	printf("\n\n |1| - Nega��o (N�O/NOT)\n |2| - Conjun��o (E/AND)\n |3| - Disjun��o (OU/OR)\n |4| - Condi��o (SE... ENT�O)\n |5| - Bicondi��o (SE.. SOMENTE SE)\n |0| - Sair do programa\n");
	do{
		printf("\n\n $ Informe a op��o desejada: ");
		scanf("%d", &aux);
		switch(aux){
			case 0:{
				printf("\n Obrigado por utilizar a aplica��o!");
				Sleep(1500);
				system("cls");
				printf("Saindo...");
				break;
			}
			case 1: {
				do{
					printf("\n === NEGA��O ===\n");
					fflush(stdin);
					printf("\n Informe p:(V/F) ");
					scanf("%c", &p);
					fflush(stdin);
	
					if(p == 'v' || p == 'V'){
						printf(" [Resultado: F]");
					}
						else if(p == 'f' || p == 'F'){
							printf(" [Resultado: V]");
						}
							else printf("\n [Indispon�vel!]");
					printf("\n\n Deseja mudar de opera��o?(S/N): ");
					scanf("%c", &sair);
					fflush(stdin);	
					if(sair == 's' || sair == 'S' ){
						break;
					}
				}while(sair != 's' || sair != 'S');
			break;
			}
			case 2: {
				do{
					printf("\n === CONJUN��O ===\n");
					fflush(stdin);
					printf("\n Informe p:(V/F) ");
					scanf("%c", &p);
					fflush(stdin);
					printf(" Informe q:(V/F) ");
					scanf("%c", &q);
					fflush(stdin);
					if((p == 'v' || p == 'V') && (q == 'v' || q == 'V')){
						printf(" [Resultado: V]");
					}
						else if((p == 'v' || p == 'V') && (q == 'f' || q == 'F')){
							printf(" [Resultado: F]");
						}
							else if((p == 'f' || p == 'F') && ( q == 'v' || q == 'V')){
								printf(" [Resultado: F]");
							}
								else if((p == 'f' || p == 'F') && (q == 'f' || q == 'F')){
									printf(" [Resultado: F]");
								}
								else printf("\n [Indispon�vel!]");
					printf("\n\n Deseja mudar de opera��o?(S/N): ");
					scanf("%c", &sair);
					fflush(stdin);
					if(sair == 's' || sair == 'S' ){
						break;
					}	
				}while(sair != 's' || sair != 'S');
				
				break;
			}
			case 3: {
				do{
					printf("\n === DISJUN��O ===\n");
					fflush(stdin);
					printf("\n Informe p:(V/F) ");
					scanf("%c", &p);
					fflush(stdin);
					printf(" Informe q:(V/F) ");
					scanf("%c", &q);
					fflush(stdin);
					if((p == 'v' || p == 'V') && (q == 'v' || q == 'V')){
						printf(" [Resultado: V]");
					}
						else if((p == 'v' || p == 'V') && (q == 'f' || q == 'F')){
							printf(" [Resultado: V]");
						}
							else if((p == 'f' || p == 'F') && ( q == 'v' || q == 'V')){
								printf(" [Resultado: V]");
							}
								else if((p == 'f' || p == 'F') && (q == 'f' || q == 'F')){
									printf(" [Resultado: F]");
								}
								else printf("\n [Indispon�vel!]");
					printf("\n\n Deseja mudar de opera��o?(S/N): ");
					scanf("%c", &sair);
					fflush(stdin);
					if(sair == 's' || sair == 'S' ){
						break;
					}	
				}while(sair != 's' || sair != 'S');
				
				break;
			}
			case 4: {
				do{
					printf("\n === CONDI��O ===\n");
					fflush(stdin);
					printf("\n Informe p:(V/F) ");
					scanf("%c", &p);
					fflush(stdin);
					printf(" Informe q:(V/F) ");
					scanf("%c", &q);
					fflush(stdin);
					if((p == 'v' || p == 'V') && (q == 'v' || q == 'V')){
						printf(" [Resultado: V]");
					}
						else if((p == 'v' || p == 'V') && (q == 'f' || q == 'F')){
							printf(" [Resultado: F]");
						}
							else if((p == 'f' || p == 'F') && ( q == 'v' || q == 'V')){
								printf(" [Resultado: V]");
							}
								else if((p == 'f' || p == 'F') && (q == 'f' || q == 'F')){
									printf(" [Resultado: V]");
								}
								else printf("\n [Indispon�vel!]");
					printf("\n\n Deseja mudar de opera��o?(S/N): ");
					scanf("%c", &sair);
					fflush(stdin);
					if(sair == 's' || sair == 'S' ){
						break;
					}
				}while(sair != 's' || sair != 'S');
				
				break;
			}
			case 5: {
				do{
					printf("\n === BICONDI��O ===\n");
					fflush(stdin);
					printf("\n Informe p:(V/F) ");
					scanf("%c", &p);
					fflush(stdin);
					printf(" Informe q:(V/F) ");
					scanf("%c", &q);
					fflush(stdin);
					if((p == 'v' || p == 'V') && (q == 'v' || q == 'V')){
						printf(" [Resultado: V]");
					}
						else if((p == 'v' || p == 'V') && (q == 'f' || q == 'F')){
							printf(" [Resultado: F]");
						}
							else if((p == 'f' || p == 'F') && ( q == 'v' || q == 'V')){
								printf(" [Resultado: F]");
							}
								else if((p == 'f' || p == 'F') && (q == 'f' || q == 'F')){
									printf(" [Resultado: V]");
								}
								else printf("\n [Indispon�vel!]");
					printf("\n\n Deseja mudar de opera��o?(S/N): ");
					scanf("%c", &sair);
					fflush(stdin);
					if(sair == 's' || sair == 'S' ){
						break;
					}
				}while(sair != 's' || sair != 'S');
				
				break;
			}
			default: {
				printf("\n [Op��o indispon�vel!]");
				break;
			}
		}
	Sleep(2000); //para que o resultado n�o seja apagado antes do usuario ler
	system("cls"); //apaga o que est� no terminal
	if(aux != 0){
		printf("\n -> MENU"); //reapresenta o menu pois usuario ira esquecer as op��es
		printf("\n\n |1| - Nega��o (N�O/NOT)\n |2| - Conjun��o (E/AND)\n |3| - Disjun��o (OU/OR)\n |4| - Condi��o (SE... ENT�O)\n |5| - Bicondi��o (SE.. SOMENTE SE)\n |0| - Sair do programa\n");		
	} 
	
	}while(aux != 0);
	
	return 0;
}
