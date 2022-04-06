#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <Windows.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int aux;
	char p, q, sair; //representam as proposições
	
	printf("\n\n");
	printf("\t _______________________________________________\n");
	printf("\t|\t\t\t\t\t\t|");
	printf("\n\t|  	Bem-vind@ à tabela lógica em C \t\t|\n");
	printf("\t|\t\t\t\t\t\t|\n");
	//Menu - contextualização do switch case
	printf("\n -> MENU");
	printf("\n\n |1| - Negação (NÃO/NOT)\n |2| - Conjunção (E/AND)\n |3| - Disjunção (OU/OR)\n |4| - Condição (SE... ENTÃO)\n |5| - Bicondição (SE.. SOMENTE SE)\n |0| - Sair do programa\n");
	do{
		printf("\n\n $ Informe a opção desejada: ");
		scanf("%d", &aux);
		switch(aux){
			case 0:{
				printf("\n Obrigado por utilizar a aplicação!");
				Sleep(1500);
				system("cls");
				printf("Saindo...");
				break;
			}
			case 1: {
				do{
					printf("\n === NEGAÇÃO ===\n");
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
							else printf("\n [Indisponível!]");
					printf("\n\n Deseja mudar de operação?(S/N): ");
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
					printf("\n === CONJUNÇÃO ===\n");
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
								else printf("\n [Indisponível!]");
					printf("\n\n Deseja mudar de operação?(S/N): ");
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
					printf("\n === DISJUNÇÃO ===\n");
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
								else printf("\n [Indisponível!]");
					printf("\n\n Deseja mudar de operação?(S/N): ");
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
					printf("\n === CONDIÇÃO ===\n");
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
								else printf("\n [Indisponível!]");
					printf("\n\n Deseja mudar de operação?(S/N): ");
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
					printf("\n === BICONDIÇÃO ===\n");
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
								else printf("\n [Indisponível!]");
					printf("\n\n Deseja mudar de operação?(S/N): ");
					scanf("%c", &sair);
					fflush(stdin);
					if(sair == 's' || sair == 'S' ){
						break;
					}
				}while(sair != 's' || sair != 'S');
				
				break;
			}
			default: {
				printf("\n [Opção indisponível!]");
				break;
			}
		}
	Sleep(2000); //para que o resultado não seja apagado antes do usuario ler
	system("cls"); //apaga o que está no terminal
	if(aux != 0){
		printf("\n -> MENU"); //reapresenta o menu pois usuario ira esquecer as opções
		printf("\n\n |1| - Negação (NÃO/NOT)\n |2| - Conjunção (E/AND)\n |3| - Disjunção (OU/OR)\n |4| - Condição (SE... ENTÃO)\n |5| - Bicondição (SE.. SOMENTE SE)\n |0| - Sair do programa\n");		
	} 
	
	}while(aux != 0);
	
	return 0;
}
