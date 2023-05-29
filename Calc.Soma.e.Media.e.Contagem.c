#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese_Brazil");


int i,somaImpares=0, qtdImpares=0, soma = 0;


for (i=1;i<=1000;i+=2){
somaImpares = somaImpares + i;
qtdImpares = qtdImpares + 1;
soma += i;
	printf("%d ",i);
}

printf("\nSoma total é: %d\n", somaImpares);
printf("\nA média é: %d", (somaImpares/qtdImpares));


	
					
	return 0;
}
