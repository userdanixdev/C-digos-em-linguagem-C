#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*    ELabore um programa que dado o número do mês, indica
quantos dias tem esse mês, utilizando a estrutura
     SWITCH CASE... Fevereiro tem 28 dias hien....

*/

int main() {
setlocale(LC_ALL,"Portuguese");

int mes;

printf("\n....digite o numero de um mes para saber a quantidade de dias nele....\n\n");
scanf("%i", &mes);


if(mes == 1)
printf("Janeiro: Contem 31 dias\n");
else if(mes ==  2)
printf("Fevereiro: 28 dias\n");
if(mes == 3)
printf("Março: 31 dias\n");
else if(mes == 4)
printf("Abril: 30 dias\n");
if(mes == 5)
printf("Maio: 31 dias\n");
else if(mes == 6)
printf("Junho: 30 dias\n");
if(mes == 7)
printf("Julho: 31 dias\n");
else if(mes == 8)
printf("Agosto: 31 dias\n");
if(mes == 9)
printf("Setembro: 30 dias\n");
else if(mes == 10)
printf("Outubro: 31 dias\n");
if(mes == 11)
printf("Novembro: 30 dias\n");
else if(mes == 12)
printf("Dezembro: 31 dias\n");
if (mes == 0 ||mes  >= 13)
printf("\nNão corresponde a nenhum mês!!!\n\n");
	
	//com estrutura até o final ELSE IF substituindo os IFS do código anterior ACIMA//
	// O resultado é o mesmo, quando inicia com if usa-se ELSE IF até o final, igual ABAIXO//
	
	if(mes == 1)
printf("Janeiro: Contem 31 dias\n");
else if(mes ==  2)
printf("Fevereiro: 28 dias\n");
else if(mes == 3)
printf("Março: 31 dias\n");
else if(mes == 4)
printf("Abril: 30 dias\n");
else if(mes == 5)
printf("Maio: 31 dias\n");
else if(mes == 6)
printf("Junho: 30 dias\n");
else if(mes == 7)
printf("Julho: 31 dias\n");
else if(mes == 8)
printf("Agosto: 31 dias\n");
else if(mes == 9)
printf("Setembro: 30 dias\n");
else if(mes == 10)
printf("Outubro: 31 dias\n");
else if(mes == 11)
printf("Novembro: 30 dias\n");
else if(mes == 12)
printf("Dezembro: 31 dias\n");
else if (mes == 0 ||mes  >= 13)
printf("\nNão corresponde a nenhum mês!!!\n\n");
					


	
return 0;
		}		





