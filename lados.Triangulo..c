#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
/*  Fazer um programa para verificar e identificar o
comprimento dos lados de um triangulo. Informar se é
euilatero, isoseles ou escaleno, caso não, informar que
nao formam um triangulo
		Equilatero : 3 lados iguais
		Isoceles: 2 lados iguais
		Escaleno: 3 lados diferentes
		
		a + b > c : a soma dos dois lados tem que ser maior que o terceiro

		
*/
int a,b,c;

printf("Digite tres valores: ");
scanf("%d%d%d", &a,&b,&c);

if (a +b> c && a+c>b && b+c>a){
	printf("Os 3 lados formam um triangulo\n");
	if(a ==b && a==c)
		printf("Equilatero\n");
	else 
		if(a == b || a== c || b == c)
		printf("ISOSCELES\n");
		else
		printf("ESCALENO");
				
}
	else 
		printf("os 3 lados nao formam um triangulo.\n");
		


return 0;
}





