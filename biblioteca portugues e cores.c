#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Portuguese");
	system("color 5E");//primeira se refere ao fundo.
	//a linha abaixo muda a cor do texto
	printf("\nOlá Mundo\n");
	system("pause");
	//cls limpa a tela
	system("cls");
	system("color F0");
	printf("\nDaniel Martins\n");
	system("pause");
	
	return 0;
}
