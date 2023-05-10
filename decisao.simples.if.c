#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");


/*DECISÃO SIMPLES:
Verificando se um número é negativo.
*/
 int a = 10;
 
 printf("\nDigite um valor qualquer: ");
 scanf("%d", &a);
 
 if(a < 0)
 printf("\nValor negativo!\n");
  printf("\nContinuação do programa\n");
   
	
	
	return 0;
}
