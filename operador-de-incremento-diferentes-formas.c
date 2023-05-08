#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
//int resultado,contador = 10;//

//SINONIMAS - tres formas diferentes com o mesmo resultado//
// de adicionar mais 1 a variavel//
//contador++;
//contado +=1;
//contador = contador + 1

/*resultado = ++contador ;
printf("Valor:  %d\n",resultado );
//printf("Valor:  %d\n",resultado, contador++);
/* INCREMENTO ao lado esquerdo da variavel sera incrementado 
depois, AGORA,se eu coloco A ESQUERDA vai colocar PRIMEIRO
*/
//printf("Valor: %d\n", ++contador);
//usada para repeticoes tipo for , mais pra frente sera utilizada//
int  resultado,contador= 10;
resultado = --contador;
printf("Valor:  %d\n", resultado);

	
	
	return 0;
}
