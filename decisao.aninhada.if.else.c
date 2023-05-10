#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

	int a = 10;
 
 printf("\nDigite um valor qualquer: ");
 scanf("%d", &a);
  
 
  printf("Operador Ternário: \n");
  a < 0 ? printf("\n\tValor negativo\n") :printf("Valor positivo ou igual a zero\n");
  
  printf("\n\tIF/ELSE:\n");
if(a < 0){
 
  printf("\n\tValor negativo!\n");
    }
  else{
  	if(a > 0)
  printf("\n\tValor positivo!\n");
    else
	printf("\nValor igual a zero\n");
	      
    printf("\nContinuação do programa\n");
    
	}
	/* se for apenas uma instrução o uso de chaves
	é OPCIONAL.
	Se for mais de uma instrução o uso de chaves
	è obrigatório*/
	
	
	return 0;
}
