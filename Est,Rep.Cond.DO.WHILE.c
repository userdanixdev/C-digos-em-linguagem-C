#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
		
		
		//estrutura de repetição DO{}WHILE //
		//	ENQUANTO = condição também 
		//  Variação FAÇA ENQUANTO = DO WHILE //
int main()
{

int valor;valor2;
printf("Digite um valor maior que zero:");
scanf("%d", &valor);

// enquanto é uma condição //
while(valor <=0){
	printf("Valor invalido! Digite um valor maior que zero: ");
	scanf("%d", &valor);
	//WHILE nao tem limite de repetição, ate o usuario digitar o valor correto//
}
printf("Valor lido: %d\n\n", valor);

do{
	printf("Digite um valor maior que zero: ");
	scanf("%d", &valor2);
	while(valor2 <=0);
	printf("Valor lido: %d\n\n", valor2);
}
// o faça executa primeiro depois testa, é encoberto com chaves//


	return 0;
	
	
}





