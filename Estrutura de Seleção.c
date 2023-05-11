#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
ESTRUTURA DE SELEÇÃO  -  SW ITCH CASE - 
Opções - (1)Cadastrar produto 
       - (2)Vender Produto
       - (3)Buscar Produtdo
	   - (4Imprimnir Relatório
	   - (0)Sair
	   
	*/
int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

	int opcao;

printf("1 - Cadastrar produto\n2 - Vender produto\n3 - Buscar produto\n4 - Imprimir\n5 - Sair");
scanf("%d", &opcao);

switch(opcao){
	case 1:
		printf("\nCadastrando novo produto.\n");
		break; //quebrar ou parar a execução do código//
	case 2:
		printf("\nVendendo um nome produto.")	;
		break; //break obrigatório no CASE//
	case 3:
		printf("\nBuscando novo produto.\n")	;
		break;
	case 4:
		printf("\nImprimindo relatório.\n")	;
		break;
	case 5:
	printf("\nSAINDO....\n")	;
		break;
		default:
			printf("\nOpção inválida!\n");
			}
		
				return 0;

}
