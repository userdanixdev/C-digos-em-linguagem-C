#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/*Uma empresa contrata um encanador a 45 reais por dia;
faça um programa que solicite o número de dias trabalhados
pelo encanador, e imprima a quantia liquida que deverá ser
paga e terá que descontar 8% de IMPOSTO DE RENDA*/

float dias,valorFinal,desconto;

printf("Quantos dias trabalhados? ");
scanf("%f", &dias);

valorFinal = dias *45;
desconto = valorFinal *8/100;
valorFinal = valorFinal - desconto;

printf("A receber: R$%.2f\nDesconto R$%.2f\n", valorFinal, desconto);

	
	
	
	return 0;
}
