#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/*  OPERADOR L�GICO 'OU' { || }

TABELA DA VERDADE   A  B  A||B
                    v  v   v 
	                v  f   v
	                f  v   v
	                v  v   f
					
__________________________________					
					*/
					
int idade;

printf("Digite sua idade: ");
scanf("%d",&idade)					 ;

if(idade <= 5 || idade >= 60)
printf("Tem direito � gratuidade!\n");
else
	printf("N�o tem direito a gratuidade!\n");
	
	//retirar as chaves e operadores repetidos//
	/* os printf iguais sem necessidade, por isso o emprego
	do OPERADOR L�GICO OU " || "*/
		

		
	return 0;
}
