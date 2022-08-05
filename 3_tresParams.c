#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
int criar_array(int *array_int, int max_elementos)
{
	int idx = 0;
	char array_str[128];
 	char valor[16];
 	char *posicao_inicio = NULL;
 	char *posicao_fim = NULL;

 	printf ("Informe os valores do tipo inteiros, separados por virgula\n");
 	scanf ("%s", array_str);
 	
 	if (strlen (array_str) > 0)
 	{
 		posicao_inicio = array_str;
 		
 		do {
 			posicao_fim = strchr(posicao_inicio, ',');
 			memset(valor,0, sizeof(valor));
 			
 			if(posicao_fim != NULL) 
 			{
				memcpy(valor, posicao_inicio,(int) (posicao_fim - posicao_inicio) );
				posicao_inicio = (posicao_fim + 1 );
		 	}
		 	else if(posicao_inicio != NULL)
		 	{
				memcpy(valor, posicao_inicio,(int) strlen(posicao_inicio) );
	 		}
 	
 			if(strlen(valor)) 
 			{
 				array_int[idx++] = atoi(valor);
			}
 		}while (posicao_fim != NULL && idx < max_elementos);
 	}

	printf ("ARRAY -> [" );
	
	for(int i=0; i<idx; i++)
	{
 		printf ("%d", array_int[i]);
 		if(i+1 < idx){ 	printf(","); }
	}
 	
 	printf ("] \n");

	return idx;
}

int compare(const void *a, const void *b)
{
	return (*(int*)a > *(int*)b); 
}

int maximo_elementos(int valor_ref, int* array, int tamanho_array) 
{
	
	//qsort(array, tamanho_array, sizeof(int), compare);
	
	int res = 0; 
	int contador = 0;
	int contador_index; 
	for(int i = 1; i < tamanho_array; ++i)
	{
		contador += array[i]; 
		if (contador <= valor_ref)
		{
			res = contador; 
			contador_index = i; 
		}
		
	}
	
	return contador_index;
}

int main() 
{
	const int max_elementos = 128;
	int array_int[max_elementos] ;
 	int qtd_elementos = 0;
 	int tamanho_array = 0;
 	int valor_ref = 0;
 	
 	tamanho_array = criar_array(array_int, max_elementos);
 	printf("Informe o valor para agrupamento.\n");
 	scanf ("%d", &valor_ref);
 	qtd_elementos = maximo_elementos(valor_ref, array_int, tamanho_array);


 	printf("O numero máximo de agrupamento e [%d].\n", qtd_elementos);

	return 0;
}
