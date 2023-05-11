#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/*  OPERADOR LÓGICO &&*/
// ALISTAMENTO MILITAR //

int idade;
char sexo;

printf("Digite seu sexo F ou M e sua idade: ");
scanf("%c%d", &sexo, &idade);

if(sexo== 'm' && idade ==18)
	//if(idade == 18)//
	printf("Alistamento obrigatório!\n");
	else 
	printf("Dispensado!\n");
	
		
	return 0;
}
