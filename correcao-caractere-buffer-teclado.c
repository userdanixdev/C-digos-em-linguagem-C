#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
   /*char sexo;
 	int idade;
 	float peso,altura;
 	*/
 	char a,b;
 	
 	printf("Digite uma letra: ");
 	scanf("%c",&a);
 	/*podemos colocar uma funcao entre as outras 
 	sem colocar o espaco na segunda funcao - */
 	//incluindo mais uma funcao de leitura do usuario//
 	scanf("%c");// a funcao ira remover o BUFFER DE TECLADO//
 	
 	printf("Digite um letra:");
 	scanf("%c",&b);
	 //ENTER foi lido na segunda funcao//
	 //use ESPACO na segunda funcao//
 	printf("Primeira letra: %c\nSegunda letra: %c",a,b);
 	
	return 0;
}
