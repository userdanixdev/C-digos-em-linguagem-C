#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
ESTRUTURA DE SELE��O  -  SW ITCH CASE - 
Op��es - (1)Cadastrar produto 
       - (2)Vender Produto
       - (3)Buscar Produtdo
	   - (4Imprimnir Relat�rio
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
		break; //quebrar ou parar a execu��o do c�digo//
	case 2:
		printf("\nVendendo um nome produto.")	;
		break; //break obrigat�rio no CASE//
	case 3:
		printf("\nBuscando novo produto.\n")	;
		break;
	case 4:
		printf("\nImprimindo relat�rio.\n")	;
		break;
	case 5:
	printf("\nSAINDO....\n")	;
		break;
		default:
			printf("\nOp��o inv�lida!\n");
			}
		
				return 0;

}
