#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");
/* operador UNSIGNED trocar o t%d pro %u
limite para tipo inteiro: 2.147.483.647
assim tambem SHORT UNSIGNED para alocar menos numeros ainda*/

unsigned int x = 2147483647;
//sem estouro de memória//

unsigned short int y = 55000;
//shor t int -->%hi ou %d
unsigned long int w = 2148142584848486441;

printf("\n\t%lu\n\n", w);

/*unsigned int x;
//a variavel x vai receber sempre POSITIVO//
unsigned short int y;*/

	
	
	return 0;
}
