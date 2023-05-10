#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/*Faça um programa para ler do teclado a quantidade
de segundos e imprimir na tela a conversão para HORAS;
MINUTOS e SEGUNDOS*/

int segundos,h,m,s,resto;

printf("Digite uma quantidade em SEGUNDOS: ");
scanf("%d", &segundos);
// 3672 segundos//
h = segundos / 3600;
resto = segundos % 3600;
m = resto /60;
s = resto % 60;

printf("%d:%d:%d\n",h,m,s);
	
	
	
	return 0;
}
