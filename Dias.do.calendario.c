#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*    ELabore um programa que dado o número do mês, indica
quantos dias tem esse mês, utilizando a estrutura
     SWITCH CASE... Fevereiro tem 28 dias hien....

*/

int main() {
setlocale(LC_ALL,"Portuguese");

int mes;
printf("Digite um número: ");
scanf("%d",&mes);

switch(mes){
	case 1:
	case 3:	
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:	
		printf("\nO mês possui 31 dias\n");
		break;
	case 2:
		printf("\nFevereiro com 28 dias\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("\nO mês possui 30 dias\n");
		break;
	default:
		printf("\nValor não corresponde a nenhum mês!\n");
					
}

	
return 0;
		}		





