#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/*Escreva um programa que leia tr�s valores e apresente
qual � o maior e qual � o maior
*/
 int a,b,c,menor,maior;
 
 printf("Digite tr�s valores:  ");
 scanf("%d%d%d",&a,&b,&c);
 
    // PRIMEIRA SOLU��O//
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
		printf("Primeira vers�o\n Menor: %d\tMaior: %d\n",menor,maior);
		
		// SEGUNDA VERS�O //
		
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
			
	printf("Segunda vers�o\n Menor: %d\tMaior: %d\n",menor,maior);
							
		
	return 0;
}
