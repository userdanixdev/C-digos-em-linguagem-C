#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

//	setlocale(LC_ALL,"Portuguese");
	
	
 /*O IMC (�NDICE DE MASSA CORPORAL) pode ser calculado 
 dividindo-se o peso da pessoa (em KG) pela altura(H em metros)
 elevado ao quadrado (IMC=m/h�).
 Escreva um programaque leia o peso e a altura de uma pessoa,
 calcule e mostre o IMC e a faixa em que o indiv�duo se enquadra
 de acordo com a tabela abaixo:
 
 		IMC						INTERPRETA��O
 	Menor que 18,5				abaixo do peso
	Entre 18,5 e menor que 25   Peso normal
	Entre 25 e menor que 30		Sobrepeso
	Entre 30 e menor que 35		Obesidade grau 1
	Entre 35 e menor que 40		Obesidade grau 2
	Maior ou igual a 40			Obesidade grau 3
	 	
 		 */
 		 
 // determinar a cria��o de vari�veis//
  
 float massa,altura,imc;
 
 printf("Digite seu peso (em KG) e sua altura(em metros): ");
 scanf("%f%f",&massa,&altura);
 
 imc = massa /(altura * altura);
 
 
 /*  VERS�O COM EXPRESS�O DE CONDI��O ? (SE FOR VERDADEIRO) E (:) PARA FALSO. 
 */
    (imc < 18.5) ? printf("\n\n\tABAIXO DO PESO\n") :
        ((imc >= 18.5) && (imc < 25)) ? printf("\n\n\tPESO IDEAL\n") :
            ((imc >= 25) && (imc < 30)) ? printf("\n\n\tSOBRE PESO\n") :
                ((imc >= 30) && (imc < 35)) ? printf("\n\n\tOBESIDADE GRAU 1\n") :
                    ((imc >= 35) && (imc < 40)) ? printf("\n\n\tOBESIDADE GRAU 2\n") :
                        printf("\n\n\tOBESIDADE GRAU 3\n");
 
 
 /*
if(imc < 18.5)
 	printf("IMC: %f\tAbaixo do peso\n",imc);
else if(imc >=18.5 && imc < 25)
 	printf("IMC: %.2f\tPeso normal\n",imc);
else if(imc >= 25 && imc < 30)
	printf("IMC: %.2f\tSobrepeso\n",imc);	
else if(imc >= 30 && imc < 35)
	printf("IMC: %.2f\tObesidade grau 1\n",imc);
else if(imc >= 35 && imc < 40)
	printf("IMC: %.2f\tObesidade grau 2\n", imc);
else //nao preciso de if, somente uma e ultima condi��o//
	printf("IMC: %.2f\tObesidade grau 3\n", imc);
*/		



	
	return  0;	
}
