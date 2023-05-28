#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese_Brazil");

		//  SENHA VÁLIDA E INVÁLIDA //
		/* Escrever um programa que repeita a leitura da senha se
		ela for INVALIDA e mostrar a mensagem "SENHA INVALIDA"
		Se for a senha certa , mostrar ACESSO PERMITIDO.
		*/
	int senha, senhavalida = 123456;
	printf("Digite sua senha: ");
	scanf("%d", &senha);
	// enquanto nao digiitar a senha correta irá repetir //
	while(senha != senhavalida){
		printf("Senha inválida!\n\nDigite sua senha: ");
		scanf("%d", &senha);
	}	
		printf("ACESSO PERMITIDO.\n");
		
		
		
	return 0;
}
