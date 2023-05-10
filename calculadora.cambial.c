#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/*Crie um programa em C permitindo fazer conversão cambial
entre REAIS e DOLARES.A taxa de cambio é: US$1,0 = R$5,30.
Que leia valor em REAIS e mostre o resultado em DOLLAR*/


float valorReal,valorDollar;


printf("Digite o valor em REAIS a ser convertido");
scanf("%f", &valorReal);

valorDollar = valorReal/5,30;
printf("Valor em Dollar: US$%.2f\n", valorDollar);
	
	
	
	return 0;
}
