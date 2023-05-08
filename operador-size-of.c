#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
  /*operador SHORT para tipo INTEIROS
  INTERVALO: -32.768 ate 32.767 tipos inteiros
  use o %hi ou %d */
  short int x = 32767;
  int y = 0;
  printf("Tamanho de um int na memoria: %d bytes\n",sizeof y);
  printf("Tamanho memoria em SHORT INT: %d bytes\n",sizeof x);
  //
  /*  int y = 0;
  short int x = 32767;
  
  printf("Valor de x: %d\n",x);
  x++;
  printf("Valor de x: %hi bytes\n",x);
  
  
  */
 	
 	
	return 0;
}
