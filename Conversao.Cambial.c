#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/* Crie um programa que permita fazer a conversão de REAL
para DOLLAR ou de DOLLAR para REAL. Utilize taxa de câmbio
de $1 igual a R$5.30.

*/
float valor,valorConvertido;
int opcao;

printf("Digite o valor que deseja converter: ");
scanf("%f",&valor);

printf("\n1 -  Converter de REAL para DOLLAR\n2 - Converter de DOLLAR para REAL\n");
scanf("%d",&opcao);

switch(opcao){
	case 1:
		//converter de real para dollar//
		valorConvertido = valor / 5.5;
			printf("Valor convertido: $%.2f dólares\n",valorConvertido);
		break;
	case 2:
		//dollar para real//
		valorConvertido = valor * 5.5;
			printf("Valor convertido: R$%.2f reais\n",valorConvertido);
		break;
		default:
		printf("\nOpção inválida...\n");
			
}
//	printf("Valor convertido: %.2f\n",valorConvertido);
	
	return 0;
}
