#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main() {
//setlocale(LC_ALL,"Portuguese");
 
 /* Um usu�rio deseja um programa onde possa escolher um tipo de m�dia
 em que deseja calcular a partir de tr�s notas. 
 Fa�a um programa que leia as notas e o tipo de m�dia escolhida
 pelo usu�rio e calcule a m�dia:
  - 'a' = ARITM�TICA
  - 'P' = PONDERADA (PESOS: 3,3,4)
   
 */

float nota1,nota2,nota3;
char escolha;

printf("\n\tQual a m�dia deseja?\na - Aritm�tica\nP - Ponderada\n");
scanf("%c",&escolha);

printf("\n\tDigite as tr�s notas: ");
scanf("%f%f%f",&nota1,&nota2,&nota3);


/*PARA RESOLVER O BUFFER DO TECLADO COM A FUN��O GETCHAR PARA A VARI�VEL ESCOLHA 
OU UM SCANF ATRIBUIDO A LEITURA DE COM ISOLADO  */
//scanf("%c");
if  (escolha == 'a'|| escolha == 'A')

	printf("\n\tM�dia aritm�tica: %.2f\n", (nota1+ nota2 + nota3 )/ 3);
	else if (escolha == 'p'|| escolha == 'P')
		printf("\n\tM�dia Ponderada:  %.2f\n", (nota1*3 + nota2*3 + nota3* 4)/10);
	else	 
		printf("\n\tOp��o inv�lida");


	
return 0;
		}		





