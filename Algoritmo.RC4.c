#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//==================================================
void troca(unsigned char *s, unsigned int i, unsigned int j)
	{
	unsigned char aux;
	aux=s[i];
	s[i]=s[j];
	s[j]=aux;
	}

//====================================================
void ksa(unsigned char *s, unsigned char* chave, unsigned int tamanho_chave)
	{
	unsigned int i;
	for (i = 0; i < 256; i++)
		{
		s[i]=i;
		}
	unsigned int j=0;
	for (i = 0; i < 256; i++)
		{
		j = (j + s[i] + chave[i % tamanho_chave]) % 256;
		troca(s, i, j);
		}
	}

//====================================================
void prga(const unsigned char *entrada, unsigned char** resultado, unsigned char *s, unsigned int tamanho_entrada)
	{
	unsigned int i=0;
	unsigned int j=0;

	// C
	if (*resultado!=NULL)
		free(*resultado);
	*resultado=(unsigned char*)malloc(tamanho_entrada+1);
	// C++
	//if (*resultado!=NULL)
	//	delete *resultado;
	//*resultado = new unsigned char[tamanho_entrada+1];

	for (unsigned int aux=0; aux < tamanho_entrada; aux++)
		{
		i = (i + 1) % 256;
		j = (j + s[i]) % 256;
		troca(s, i, j);
		(*resultado)[aux]=(s[(s[i] + s[j]) % 256])^entrada[aux];
		}
	(*resultado)[tamanho_entrada]=0;
	}

//====================================================
int main()
	{
	unsigned char chave[256];
	unsigned char *resultado=NULL;
	unsigned char s[256];
	unsigned int tamanho_chave, tamanho_entrada;
	unsigned char entrada[256];

	unsigned char confirma[256];
	int confirm;
	printf("Escreva a Frase a ser Criptografada:");
	scanf("%[^\n]%*c", entrada);
	tamanho_entrada=strlen((char*)entrada);
	printf("\nChave:");
	scanf("%[^\n]%*c", chave);
	tamanho_chave=strlen((char*)chave);
	system("pause");
	ksa(s, chave, tamanho_chave);
	prga(entrada, &resultado, s, tamanho_entrada);
	printf("\nResultado Gerado: %s\n", resultado);
	system("pause");
	printf("\n\nPara Desfazer, confirme a chave: ");
TENTA: scanf("%[^\n]%*c", confirma);
	confirm=strcmp((char*)confirma, (char*)chave);
	if (confirm==0)
		{
		printf("\nDesfazendo....\n");
		memcpy((char*)entrada, (char*)resultado, tamanho_entrada);
		ksa(s, chave, tamanho_chave);
		prga(entrada, &resultado, s, tamanho_entrada);
		printf("\nFrase Original: %s\n", resultado);
		system("pause");
		}
	else
		{
		printf("Chave nao confere, por favor insira a chave correta:\n");
		goto TENTA;
		}

	// C
	if (resultado!=NULL)
		free(resultado);
	// C++
	//if (resultado!=NULL)
	//	delete resultado;

	return 0;
	
}





