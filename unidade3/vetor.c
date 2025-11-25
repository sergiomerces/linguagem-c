/*
Programa: Vetor
Autor: Sérgio Mercês
Data: 25/11/2025
Descrição: Criar e ler um vetor de 5 elementos inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int num[5];

    system("clear");

    for (i = 0; i < 5; i++)
    {
        printf("Digite a posição %dº: ", i);
        scanf("%d", &num[i]);
    }

    printf("\nVetor: ");
    for (i = 4; i >= 0; i--)
    {
        printf(" %d ", num[i]);
    }
    printf("\n\n\n");
    return 0;
}
