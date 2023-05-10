#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");


/*OPERADORES RELACIONAIS
MENOR QUE (A < B)  quando o resultado é verdadeiro é 1;
MAIOR QUE (A > B) resultado falso é 0;
menor ou igual (A <= B) falso=0 ou verdadeiro =1;
maior ou igual (A >= B) falso=0 ou verdadeiro =1;
igual (a == b) falso = 0 verdadeiro = 1;
diferente (a !=b) falso = 0 verdadeiro = 1;
*/
 int a = 10, b = 20;
 
 printf("\n\tResultado:  %d\n\n", a or b);
 
	
	
	return 0;
}
