#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese_Brazil");

				/* Leia um valor inteiro N, apresente o quadrado
				de cada um dos valores pares de 1 até N
				*/
 
int i,n;
	
	printf("Digite um valor inteiro: ");
	scanf("%d",&n);
	for(i=2; i<= n;i +=2)
	printf("%d ",i * i);

		
	return 0;
}
