#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	setlocale(LC_ALL,"Portuguese");

printf("\n\t# Q4) Converte de Real para Dólar e vice-versa #\n");
    
    int opcao = 0;
    float valorReal = 0, valorDolar = 0;
    
    printf("\n\tO que deseja fazer?\n");
    printf("\n\t1 - Converter de Real para Dólar\n");
    printf("\n\t2 - Converter de Dólar para Real\n");
    printf("\n\tInforme a opção desejada: ");
    scanf("%d",&opcao);
    
    if( opcao == 1 ){
        printf("\n\tQual o valor em Reais que deseja converter para Dólar?\n\n\t");
        scanf("%f",&valorReal);
        printf("\n\tvalor = R$ %.2f\n", valorReal);
        valorDolar = valorReal/5.30;
        printf("\n\tValor convertido: U$ %.2f\n\n\n",valorDolar);
    }else if( opcao == 2 ){
        printf("\n\tQual o valor em Dólar que deseja converter para Real?\n\n\t");
        scanf("%f",&valorDolar);
        printf("\n\tvalor = US$ %.2f\n", valorDolar);
        valorReal = valorDolar*5.30;
        printf("\n\tValor convertido: R$ %.2f\n\n\n",valorReal);
    }

	
	return 0;
}
