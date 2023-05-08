#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
//terceira forma leitura de ler CARACTERE//
char letra;
printf("Digite um caratere: ");
letra= getc(stdin); //onde fazer a leitura:teclado//
printf("Caractere lido: %c\n", letra);


 
	
	return 0;
}
