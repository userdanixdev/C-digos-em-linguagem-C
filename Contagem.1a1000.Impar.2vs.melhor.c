#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese_Brazil");


	/* SOMA de números impares de 1 a 1000 e mostre a resposta
	como sabemos quantos vezes sera executado o códido então è PARA
			
			Porém, com restrição de desempenho para execução em 500 vezes
	*/
	int i,soma = 0;	// soma para acumular com 0(zero) //
					// tipo um vetor de inicialização //
	for (i=1;i<=1000;i+=2){ //incremento pode ser de 2 em 2 //
	// então temos a certeza que todos os valores são impares//
	// eliminando o if de decisão e elimina tbm 1000 testes //
		//if(i % 2 ==1)// 
			soma += i; // soma = soma +1 // sera executado 500 vezes //
	printf("%3d ",i);		
}  // nao esquecer de colocar o par de chaves, pelo printf //
			
	printf("\nSoma dos números ímpares de 1 a 1000: %d\n\n", soma);
						
					
					
	return 0;
}

Colocar o resultado depois
