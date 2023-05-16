#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

setlocale(LC_ALL,"Portuguese");

int mes;

printf("Digite um número: ");
scanf("%d", &mes);

switch (mes){
	case 1:
		printf("\nJaneiro\n");
		break;
	case 2:
		printf("\Fevereiro\n");
		break;
	case 3:
		printf("\Março\n");
		break;
	case 4:
		printf("\Abril\n");
		break;
	case 5:
		printf("\Maio\n");
		break;
	case 6:
		printf("\Junho\n");
		break;
	case 7:
		printf("\Julho\n");
		break;
	case 8:
		printf("\Agosto\n");
		break;
	case 9:
		printf("\Setembro\n");
		break;
	case 10:
		printf("\Outubro\n");
		break;
	case 11:
		printf("\nNovembro\n");
		break;
	case 12:
		printf("\nDezembro\n");
		break;
	default:
		printf("\n\tValor não correspondido de nenhum mês.");
			}
	
				return 0;								
}

