#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){

 // Variáveis: 
     float nota1, nota2, nota3;
	float media_aritmetica, media_ponderada;
	float peso1, peso2, peso3, peso_total;
	int opcao;
	
	
// Verificação do scanf de notas: 
	do { printf("\n\nDigite a opção a seguir: 	\n0- sair do programa 	\n1- Utilizar o programa \n\n");
		retorno_scanf = scanf("%d", &opcao);
		
		}
		if (opcao < 0 || opcao > 1){
			printf("\nNúmero inválido, tente novamente digitando um número válido.\n");
			retorno_scanf = 0;}
			
		else if (opcao == 0){
			printf("\nAté mais.");
			exit (0);}
			
		else if (opcao == 1){
			do { printf("\n Digite o valor das 3 notas: ");
			retorno_scanf = scanf("%f%f%f", &nota1, &nota2, &nota3);
			
			printf("\n Agora, digite o número da opção de média a ser calculada: \n 1- Média aritmética \n 2- Média ponderada\n\n");
			retorno_scanf = scanf("%d", &opcao);
			
			do {letra = getchar();}while (letra != '\n');
			
			if (retorno_scanf == 0)
				printf("\n Caracteres, palavras ou usar ponto para números decimais não são permitidos. \n");
			
			// Verifica se algum valor que o usuário digitou nas variáveis está fora do esperado:  
			if (nota1 < 0 || nota2 < 0 || nota3 < 0 || nota1 > 10 || nota2 > 10 || nota3 > 10){			
				printf("\n\n Valores para as notas menores que 0 ou maiores que 10 não são permitidos. \n\n");
				retorno_scanf = 0;
				}
			else if (opcao < 1 || opcao > 2){
				printf("\n\n O número que digitado para a escolha da média é inválido.\n\n");
				retorno_scanf = 0;
			}
	
		}while(retorno_scanf == 0);
	
	// verificação do scanf dos pesos: 	
			if (opcao == 2) {
		 		do {printf("\n Por fim, digite o valor dos pesos: ");
					retorno_scanf = scanf("%f%f%f", &peso1, &peso2, &peso3);
						
					peso_total = peso1 + peso2 + peso3;
				 
					if (retorno_scanf == 0 )
						printf("\n Caracteres ou palavras não são permitidos. \n");
					do {letra = getchar();}while (letra != '\n');
			
			// Verifica se algum valor que o usuário digitou nas variáveis está fora do esperado:  
					if (peso1 < 0 || peso2 < 0 || peso3 < 0 || peso1 > 10 || peso2 > 10 || peso3 > 10){			
						printf("\n\n Valores para os pesos menores que 0 ou maiores que 10 não são permitidos. \n\n");
						retorno_scanf = 0;
							}
					if (peso_total != 10){ 
						printf(" \n A soma dos pesos é diferente de 10.");		
						printf("\n Digite o valor dos pesos novamente. \n");
						retorno_scanf = 0;
						}
					}while(retorno_scanf == 0 );
			}		
		
		// Funcionamento do código: 
			switch(opcao){
				case 1:
					media_aritmetica = (nota1 + nota2 + nota3)/3;
					printf("O valor da média artimética das notas é: %.2f", media_aritmetica);
					break;
				case 2:
					media_ponderada = (nota1 * peso1 + nota2* peso2 + nota3 * peso3)/10;
					printf("O valor da média ponderada das notas é: %.2f", media_ponderada);
					break;	
			}
		}
	}while (retorno_scanf == 0);
return 0;
}





