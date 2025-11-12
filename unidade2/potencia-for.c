/*
Programa: Potência com for
Descrição: Recebe um número X do usuário e outro y e eleva x a Y
Autor: Sérgio Mercês
Data: 11/11/2025
*/

#include <stdio.h>
#include <stdlib.h>

int line(){
    for(int i = 0; i < 80; i++)
    {
        putchar('=');
    }

    return 0;
}

int main(){
    int base, expoente;
    long int potencia;
    base = 0;
    expoente = 0;
    potencia = 1;

    system("clear");
    line();
    printf("\n\t\t\tEXPONENCIAÇÃO COM LAÇO FOR\n");
    line();

    printf("\n\nDigite o valor da base: ");
    scanf(" %d", &base);
    printf("Digite o valor do expoente: ");
    scanf(" %d", &expoente);
   
    if(expoente == 0){
        potencia = 1;
    }
    else if(expoente == 1){
        potencia = base;
    }
    else if(expoente > 1){
        for(int i = 0; i < expoente; i++){
            potencia = potencia * base;
        }
    }
    else {
        system("clear");
        printf("\v\v\v\t\t\tInforme um expoente inteiro positivo!");
        getchar();
        system("./potencia-for");
    }

    printf("\n\n%d ^ %d = %ld\n\n", base, expoente, potencia);

    getchar();
    return 0;
}
