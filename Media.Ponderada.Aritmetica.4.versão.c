#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){

 // Vari�veis: 
     float nota1, nota2, nota3;
	float media_aritmetica, media_ponderada;
	float peso1, peso2, peso3, peso_total;
	int opcao;
	
	
// Verifica��o do scanf de notas: 
	do { printf("\n\nDigite a op��o a seguir: 	\n0- sair do programa 	\n1- Utilizar o programa \n\n");
		retorno_scanf = scanf("%d", &opcao);
		
		}
		if (opcao < 0 || opcao > 1){
			printf("\nN�mero inv�lido, tente novamente digitando um n�mero v�lido.\n");
			retorno_scanf = 0;}
			
		else if (opcao == 0){
			printf("\nAt� mais.");
			exit (0);}
			
		else if (opcao == 1){
			do { printf("\n Digite o valor das 3 notas: ");
			retorno_scanf = scanf("%f%f%f", &nota1, &nota2, &nota3);
			
			printf("\n Agora, digite o n�mero da op��o de m�dia a ser calculada: \n 1- M�dia aritm�tica \n 2- M�dia ponderada\n\n");
			retorno_scanf = scanf("%d", &opcao);
			
			do {letra = getchar();}while (letra != '\n');
			
			if (retorno_scanf == 0)
				printf("\n Caracteres, palavras ou usar ponto para n�meros decimais n�o s�o permitidos. \n");
			
			// Verifica se algum valor que o usu�rio digitou nas vari�veis est� fora do esperado:  
			if (nota1 < 0 || nota2 < 0 || nota3 < 0 || nota1 > 10 || nota2 > 10 || nota3 > 10){			
				printf("\n\n Valores para as notas menores que 0 ou maiores que 10 n�o s�o permitidos. \n\n");
				retorno_scanf = 0;
				}
			else if (opcao < 1 || opcao > 2){
				printf("\n\n O n�mero que digitado para a escolha da m�dia � inv�lido.\n\n");
				retorno_scanf = 0;
			}
	
		}while(retorno_scanf == 0);
	
	// verifica��o do scanf dos pesos: 	
			if (opcao == 2) {
		 		do {printf("\n Por fim, digite o valor dos pesos: ");
					retorno_scanf = scanf("%f%f%f", &peso1, &peso2, &peso3);
						
					peso_total = peso1 + peso2 + peso3;
				 
					if (retorno_scanf == 0 )
						printf("\n Caracteres ou palavras n�o s�o permitidos. \n");
					do {letra = getchar();}while (letra != '\n');
			
			// Verifica se algum valor que o usu�rio digitou nas vari�veis est� fora do esperado:  
					if (peso1 < 0 || peso2 < 0 || peso3 < 0 || peso1 > 10 || peso2 > 10 || peso3 > 10){			
						printf("\n\n Valores para os pesos menores que 0 ou maiores que 10 n�o s�o permitidos. \n\n");
						retorno_scanf = 0;
							}
					if (peso_total != 10){ 
						printf(" \n A soma dos pesos � diferente de 10.");		
						printf("\n Digite o valor dos pesos novamente. \n");
						retorno_scanf = 0;
						}
					}while(retorno_scanf == 0 );
			}		
		
		// Funcionamento do c�digo: 
			switch(opcao){
				case 1:
					media_aritmetica = (nota1 + nota2 + nota3)/3;
					printf("O valor da m�dia artim�tica das notas �: %.2f", media_aritmetica);
					break;
				case 2:
					media_ponderada = (nota1 * peso1 + nota2* peso2 + nota3 * peso3)/10;
					printf("O valor da m�dia ponderada das notas �: %.2f", media_ponderada);
					break;	
			}
		}
	}while (retorno_scanf == 0);
return 0;
}





