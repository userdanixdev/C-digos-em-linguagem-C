#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{

int a,b,c;

	printf("DIGITE 3 VALORES INTEIRO: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if ( (a+b) >= c && (b+c) >= a && (a+c) >= b){
		printf("OS LADOS FORMAM UM TRINGAULO DO TIPO ");
		if (a == b && b == c)
			printf("EQUILATERO\n");

		else if (a == b || b == c || c == a)
			printf("ISOCELES\n");

		else if	( a != b && b != c && c != a)
			printf("ESCALENO\n");
		
		else
			printf("\nVerifique os valores e tente novamente!\n");
	}
	else
		printf("OS VALORES NAO FORMAM UM TRIANGULO\n");


	return 0;
	
}





