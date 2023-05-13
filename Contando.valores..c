#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/* Escreva um programa em c que lê 5 números inteiros, um por vez.
 Conte quantos destes valores são negativos e positivos;
 ao final, imprimir na tela a quantidade dos negativos e positivos
*/

/*int um,dois,tres,quatro,cinco,positivos = 0,negativos = 0;

printf("Digite o primeiro valor:");
scanf("%d",&um);
printf("Digite o segundo valor:");
scanf("%d",&dois);
printf("Digite o terceiro valor:");
scanf("%d",&tres);
printf("Digite o quarto valor:");
scanf("%d",&quatro);
printf("Digite o quinto valor:");
scanf("%d",&cinco);

if(um < 0)
	negativos++;  // negativos +=1; negativos =negativos + 1 . vai somar mais um//
else
	positivos++;
 
if(dois < 0)
	negativos++;
else
	positivos++;
if(tres < 0)
	negativos++;
else
	positivos++;
if(tres < 0)
	negativos++;
else
	positivos++;
if(quatro < 0)
	negativos++;
else
	positivos++;
if(cinco < 0)
	negativos++;
else
	positivos++;
		printf("\nPositivos: %d\nNegativos:%d\n",positivos,negativos);
		    */
	// 2 versão //
	// com variável VALOR somente //
	
int valor,positivos = 0,negativos = 0;

printf("Digite o primeiro valor:");
scanf("%d",&valor);	
	if(valor < 0)
	negativos++;  // negativos +=1; negativos =negativos + 1 . vai somar mais um//
else
	positivos++;
 	printf("Digite o segundo valor:");
scanf("%d",&valor);	
	if(valor < 0)
	negativos++;  // negativos +=1; negativos =negativos + 1 . vai somar mais um//
else
	positivos++;
	printf("Digite o terceiro valor:");
scanf("%d",&valor);	
	if(valor < 0)
	negativos++;  // negativos +=1; negativos =negativos + 1 . vai somar mais um//
else
	positivos++;
	printf("Digite o quarto valor:");
scanf("%d",&valor);	
	if(valor < 0)
	negativos++;  // negativos +=1; negativos =negativos + 1 . vai somar mais um//
else
	positivos++;
	printf("Digite o quinto valor:");
scanf("%d",&valor);	
	if(valor < 0)
	negativos++;  // negativos +=1; negativos =negativos + 1 . vai somar mais um//
else
	positivos++;
		printf("\nPositivos: %d\nNegativos:%d\n",positivos,negativos);
		
	return 0;
}
