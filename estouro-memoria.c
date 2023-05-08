#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
  /*operador SHORT para tipo INTEIROS
  INTERVALO: -32.768 ate 32.767 tipos inteiros
  use o %hi ou %d */
  int x = 2147483647; //2 bilhoes...//
  //tamanho maximo inteiro na memoria que podemos guardar//
  
  printf("Valor de X:  %d\n",x);
  x++;
  printf("Valor de x:  %d\n",x);
  
   // foi esse somado + 1 (-2147483648)33- bit para o sinal// 
/*no binario - o numero 2147483647 falta o bit de REFERENCIA
numero gerado que nao cabe na memoria para armazenar numero 
inteiro*/
 	
	return 0;
}
