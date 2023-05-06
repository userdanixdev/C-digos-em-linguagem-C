#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	/*system pause é específico do windows
 	não use ele em outro sistema operacional*/
 	//system ("pause");
 	printf("\nPressione qualquer tecla para finalizar.");
	//usuario precisa algum caractere//
	//getchar();
	//coloque no final getchar//
/*ou scanf("%c"),%c ira ler qualquer
	caracter ao pressionar*/
 	scanf("%c");
	return 0;
}
