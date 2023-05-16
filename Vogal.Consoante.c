#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL,"Portuguese");

/*       Faça um programa que peça ao usuário um character
e diga se é uma vogalou não.
*/

char letra;

printf("Digite um caracter: ");
scanf("%c", &letra);

//vogais: a, e , i , o e u e as MAIÚSCULAS//
//Porém, as vogais maiúculas tem códigos diferentes//
// comparações com as vogais do alfabeto//

if (letra =='a' || letra =='A' || letra == 'e' || letra=='E'|| letra=='i'
||letra=='I'|| letra =='o'||letra=='O' || letra=='u'|| letra== 'U')
	printf("\n\tVogal...\n");
else
	printf("\n\tConsoante.\n");
	
	
return 0;
		}		





