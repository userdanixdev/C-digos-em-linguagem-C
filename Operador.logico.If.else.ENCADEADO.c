#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

int a = 10;

printf("\nDigite um valor qualquer: ");
scanf("%d",&a);

if(a<0)
	printf("\Valor NEGATIVO!\n");
else{
	if(a>0)
		printf("\n\tValor POSITIVO!\n");
	else
		printf("\n\tValor igual a zero!\n");
	
}

//	segunda versão//
if (a<0)
	printf	("\n\tValor NEGATIVO!\n");
else if(a>0)
	printf("\n\tValor POSITIVO!\n");
else
	printf("\n\tValor igual a zero!\n");
	
/* a diferença esta na identação somente*/
//execução é a mesma//

		
	return 0;
}
