#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 char letra;
 printf("Digite uma letra:  ");
 //scanf("%c",&letra);//
 letra = getchar();
 printf("Caractere lido: %c\n",letra);
 
	
	return 0;
}
