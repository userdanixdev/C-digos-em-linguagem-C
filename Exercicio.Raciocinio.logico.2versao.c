#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/*Escreva um programa que leia três valores e apresente
qual é o maior e qual é o maior
*/
 int a,b,c,menor,maior;
 
 printf("Digite três valores:  ");
 scanf("%d%d%d",&a,&b,&c);
 
    // PRIMEIRA SOLUÇÃO//
 if(a<b){
 
 	if(a<c)
 	menor = a;
 	else 
 		menor =c;
}
 else{
 
 	if(b<c)
	 	menor =b;
	else
		menor =c;	 		
  }
	if(a>b){
	
		if(a>c)
			maior=a;
		else
			maior =c;
	}
	else{
	
		if(b>c)
			maior =b;
		else
			maior=c;
						
}
		printf("Primeira versão\n Menor: %d\tMaior: %d\n",menor,maior);
		
		// SEGUNDA VERSÃO //
		
menor = a;
maior = a;

if (menor >b)
	menor =b;
	if(menor >c)
		menor = c;
//maior ja recebeu o primeiro elemento//

	if(maior<b)
		maior=b;
		if(maior <c)
			maior = c;
			
	printf("Segunda versão\n Menor: %d\tMaior: %d\n",menor,maior);
							
		
	return 0;
}
