#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
		
		
		//estrutura de repeti��o WHILE //
		//	ENQUANTO = condi��o tamb�m //
int main()
{

int valor;
printf("Digite um valor mais que zero:");
scanf("%d", &valor);

// enquanto � uma condi��o //
while(valor <=0){
	printf("Valor invalido! Digite um valor maior que zero: ");
	scanf("%d", &valor);
	//WHILE nao tem limite de repeti��o, ate o usuario digitar o valor correto//
}
printf("Valor lido: %d\n\n", valor);



	return 0;
	
	
}





