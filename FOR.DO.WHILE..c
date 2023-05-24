#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
		
		/*
			Diferenças entre FOR, WHILE, DO{}WHILE
		*/
int main()
{

// FOR //

int i=0;

printf("Gerado com FOR: ");
for(i =0;i<=10; i++);
printf("%d",i);

i=0;
// while //
printf("\n\nGerado com WHILE: ");
while(1<= 10){
	printf("%d",i++);
}
	i=0;
do{

	printf("Digite um valor maior que zero: ");
	scanf("%d", &i);
	while(i <=0);
	printf("Valor lido: %d\n\n", i);
}
// o faça executa primeiro depois testa, é encoberto com chaves//

return 0;
}





