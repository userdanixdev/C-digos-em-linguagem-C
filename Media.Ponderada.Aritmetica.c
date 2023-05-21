#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main() {
//setlocale(LC_ALL,"Portuguese");
 
 /* Um usuário deseja um programa onde possa escolher um tipo de média
 em que deseja calcular a partir de três notas. 
 Faça um programa que leia as notas e o tipo de média escolhida
 pelo usuário e calcule a média:
  - 'a' = ARITMÉTICA
  - 'P' = PONDERADA (PESOS: 3,3,4)
   
 */

float nota1,nota2,nota3;
char escolha;

printf("\n\tQual a média deseja?\na - Aritmética\nP - Ponderada\n");
scanf("%c",&escolha);

printf("\n\tDigite as três notas: ");
scanf("%f%f%f",&nota1,&nota2,&nota3);


/*PARA RESOLVER O BUFFER DO TECLADO COM A FUNÇÃO GETCHAR PARA A VARIÁVEL ESCOLHA 
OU UM SCANF ATRIBUIDO A LEITURA DE COM ISOLADO  */
//scanf("%c");
if  (escolha == 'a'|| escolha == 'A')

	printf("\n\tMédia aritmética: %.2f\n", (nota1+ nota2 + nota3 )/ 3);
	else if (escolha == 'p'|| escolha == 'P')
		printf("\n\tMédia Ponderada:  %.2f\n", (nota1*3 + nota2*3 + nota3* 4)/10);
	else	 
		printf("\n\tOpção inválida");


	
return 0;
		}		





