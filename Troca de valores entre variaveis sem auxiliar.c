#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");
int a,b,c;
printf("Digite dois valores na tela:  ");
scanf("%d%d",&a,&b);


printf("Valores lidos:  a: %d\tB:  %d\n",a,b);
/* x=10
   y=5
x= x + y -->15
y= x - y -->10
x= x - y -->5
*/
a = a +b;
b = a -b;
a = a -b;

printf("Valores lidos:  a: %d\tB:  %d\n",a,b);
	
	
	return 0;
}
