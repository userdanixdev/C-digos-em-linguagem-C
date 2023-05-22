#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main () {
float nota1,nota2,nota3;
char escolha;

	printf("Qual é a média desejada?\na - Aritmetica\np- ponderada\n");
	scanf("%c", &escolha);
	
	if (escolha =='a'|| escolha =='p'){
	
	printf("Digite as tres notas: ");
	scanf("%f%f%f", &nota1,&nota2,&nota3);
}
	if(escolha =='a')
		printf("Media aritmetica:  %.2f\n", (nota1 + nota2 + nota3)/ 3);
	else 
	if(escolha =='p')
		printf("media ponderada: %.2f\n", (nota1*3 + nota2*3 + nota3*4)/ 10);
	else
	printf("\nOpcao invalida.\n");
					
    
    

	
		return 0;
		}		





