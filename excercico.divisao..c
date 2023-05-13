#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/* Escreva um programa que leia um número e informe se ele é
divisível por 2, por 3 ou por 5 ou se é divisível por 
nenhum deles
*/
int num;

printf("Digite um valor qualquer:");
scanf("%d",&num);

// resto de divisão é o simbolo em C, % (por cento)
if(num % 2 ==0 || num % 3 == 0 || num % 5 == 0 )
	printf("É divisível por 2,3 ou 5.\n");
else 
	printf("Não é divisível por 2,3 e 5.\n");
	

	return 0;
}
