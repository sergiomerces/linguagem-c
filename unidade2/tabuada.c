/*
Programa: tabuada.c
Descrição: Gera a tabuada de um número fornecido pelo usuário.
Autor: Sérgio Mercês
Data: 11/11/25
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, multiplicador, resultado;
    numero = 0;
    multiplicador = 0;
    resultado = 0;

    system("clear");
    printf("Digite um número para ver a tabuada: ");
    scanf(" %d", &numero);
    printf("\nTabuada do %d:\n", numero);

    while (multiplicador <= 10)
    {
        resultado = numero * multiplicador;
        printf("%1.2d x %1.2d = %1.2d\n", numero, multiplicador, resultado);
        multiplicador++;
    }

    getchar();
    return 0;
}