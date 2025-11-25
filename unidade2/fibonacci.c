/*
Programa: Sequência de Fibonacci
Autor: Sérgio Mercês
Descrição: Este programa calcula e exibe a sequência de Fibonacci até um número especificado de termos fornecido pelo usuário.
Data: 27/06/2024
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, primeiro, segundo, proximo;
    primeiro = 0;
    segundo = 1;
    proximo = 0;

    system("clear");
    printf("\t\t\tSEQUÊNCIA DE FIBONACCI");
    printf("\n\nDigite o número de termos da sequência de Fibonacci que você gostaria de calcular: ");
    scanf(" %d", &n);
    printf("\n\nSequência de Fibonacci até o %d ° termo:\n\n", n);

    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            proximo = i;
        }
        else
        {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf(" %d ", proximo);
    }
    printf("\n\n");
    return 0;
}
