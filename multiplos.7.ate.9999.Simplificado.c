#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese_Brazil");

 /* fazer um programa que imprima na tela todos o numeros 
 multiplos de 7 entre 1 e 9999
 */
int main(){
 
	int i;
/*
	for(i = 1; i <= 9999; i++){ // ele executa 10000 vezes e compara //
		if(i % 7 ==0) // 10000 vezes //
		printf("%4d ",i);
	}
*/
for(i = 7; i <= 9999; i+=7)
printf("%4d ",i);


		
	return 0;
}
