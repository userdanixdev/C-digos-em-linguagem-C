#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/*  Escrever um programa que leia o valor de real e converta para dólar e vice e versa
Tipo uma moeda cambial  de conversão.
*/
printf("\n\t #Questão \n\t## Converter de REAL para Dólar e vice-versa ###\n");

int opcao = 0;
float valorReal = 0,valorDolar = 0;

printf("\n\t O que deseja fazer?\n");
printf("\n\t( 1 )- Converter de Real para Dólar\n ");
printf("\n\t( 2 )- Converter de Dólar para Real\n)");
printf("\n\tNos informe a informação desejada:");
scanf("%d", &opcao);

if(opcao == 1 ){
	printf("\n\tQual valor em reais que deseja converter para dólar?\n\t");
	scanf("%f",&valorReal);
	printf("\n\tValor= R$ %.2f\n",valorReal);
	valorDolar = valorReal / 5.50;
	printf("\n\tValor Convertido: U$%.2f\n\n\n", valorDolar);
	}else if (opcao == 2){
		printf("\n\tQual o valor em Dólar que deseja converter para Real?\n\n\t");
		scanf("%f", &valorDolar);
		printf("\n\tValor = U$%2.f\n",valorDolar);
		valorReal = valorDolar *5.50;
		printf("\n\tValor Convertido:  R$%2.f\n\n\n", valorReal);
		
	}
	return 0;
	
}
