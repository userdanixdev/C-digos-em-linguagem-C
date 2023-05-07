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
 	
 	printf("Digite duas letras:");
 	scanf("%c %c",&a,&b);
 	// o enter do teclado sera lido - BUFFER DO TECLADO //
 	printf("Primeira letra: %c\nSegunda letra: %c",a,b);
 	/*leitura logica do programa,colocar espaco como COMANDO
 	para desconsiderar o buffer do teclado */
 	//ENTER, TAB ou ESPACO - sera desconsiderado//
 	//fflush(); - FUNCIONA SOMENTE Windows - 
	return 0;
}
