#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

	int a = 10;
 
 printf("\nDigite um valor qualquer: ");
 scanf("%d", &a);
  
 
  printf("Operador Tern�rio: \n");
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
	      
    printf("\nContinua��o do programa\n");
    
	}
	/* se for apenas uma instru��o o uso de chaves
	� OPCIONAL.
	Se for mais de uma instru��o o uso de chaves
	� obrigat�rio*/
	
	
	return 0;
}
