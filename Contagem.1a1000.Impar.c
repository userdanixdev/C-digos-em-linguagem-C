#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese_Brazil");


	/* SOMA de números impares de 1 a 1000 e mostre a resposta
	como sabemos quantos vezes sera executado o códido então è PARA
	*/
	int i,soma = 0;	// soma para acumular com 0(zero) //
					// tipo um vetor de inicialização //
	for (i=1;i<=1000;i++) // o FOR sera executado 1000 vezes //
		if(i % 2 ==1) /// se o resto da divisao for 1 a soma sera feita//
			soma += i; // soma = soma +1 // sera executado 500 vezes //
			
	printf("Soma dos números ímpares de 1 a 1000: %d\n\n", soma);
						
					
					
	return 0;
}
