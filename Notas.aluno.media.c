#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese_Brazil");

 /* fazer um programa que leia notas de duas avaliações
 calcule e imprima a media semestral e que só aceite notas válidas
 nota valida è de 0 a 10. e cada nota deve ser validada separadamente*/

	float nota1,nota2,media;
	
	do{
		printf("Digite a primeira nota:  ");
	scanf("%f", &nota1);
}	while(nota1<0 || nota1 >10);

do{
	printf("Digite a segunda nota:  ");
	scanf("%f", &nota2);	
	}while(nota2 < 0 || nota2>10);
	
	media = (nota1 + nota2) / 2;		
		printf("Nota final:  %.2f\n", media);
		
	return 0;
}
