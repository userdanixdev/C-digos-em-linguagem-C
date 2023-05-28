#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese_Brazil");

// TABUADA //


	int i, num;
do{

	printf("Digite um valor entre 1 e 10: ");
	scanf("%d", &num);
	}while(num < 1 || num>10);
	/* essa estrutura de repetição para que o usuário ponha um numero
	que nao seja entre os 10 da tabuada
	*/
	for (i = 1; i <=10; i++)
		printf("%d * %d = %d\n",num, i, num*i);
		
		
		
	return 0;
}
