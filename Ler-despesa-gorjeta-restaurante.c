#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

/*Escrever um programa que leia o valor da
- DESPESA DO RESTAURANTE;
-VALOR DA GORJETA(em porcentagem);
-N�mero de pessoas para dividir a conta;
-Imprimir o valor de cada pessoa.*/

	int numPessoas;
	float valorDespesa, gorjeta,valorTotal,valorPorPessoa;
	
	printf("Digite o valor da conta: \n)");
	printf("Digite a gorjeta: \n");
	printf("A quantidade de pessoas: \n");
	scanf("%f%f%d", &valorDespesa,&gorjeta, &numPessoas);
	valorTotal = valorDespesa * gorjeta/100 + valorDespesa;
	valorPorPessoa = valorTotal / numPessoas;
	printf("Cada um ir� pagar R$%.2f\n", valorPorPessoa);
	
	
	
	
	
	return 0;
}
