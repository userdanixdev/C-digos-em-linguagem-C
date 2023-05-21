#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main (void) {

    setlocale (LC_ALL,"Portuguese");

    char tipoMedia;
    //float nota1=0, nota2=0, nota3=0, media=0;
	volatile long double nota1=0.0, nota2=0.0, nota3=0.0, media=0.0;
	
    printf("\n\n\tDigite as 3 notas: ");
     scanf("%Lf%Lf%Lf");
    scanf("%Lf %Lf%Lf", &nota1,&nota2,&nota3);
    fflush(stdin);

    printf("\n\n\t***************************\n");
    printf("\t*** SISTEMA DE MÉDIAS ***\n");
    printf("\t***************************\n");

    printf("\n\t[A] - ARITMÉTICA\n\t[P] - PONDERADA (PESOS 3-3-4)\n\n");

    printf("\n\n\tESCOLHA UMA OPÇÃO: ");
    scanf(" %c", &tipoMedia);

    switch (tipoMedia){

    case 'a' :
    case 'A' :
        media = (nota1+nota2+nota3)/3;
        printf("\n\n\tMédia Aritmética: %.2f\n\n", media);
        break;

    case 'p' :
    case 'P' :
        media = (nota1*3+nota2*3+nota3*4)/10;
        printf("\n\n\tMédia Ponderada: %.2f\n\n", media);
        break;

    default :
        printf("Opção INVÁLIDA! FIM DO PROGRAMA");

    }

	
return 0;
		}		





