#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_LIVROS 3

typedef struct
{
    char titulo[60];
    char autor[30];
    char ISBN[14];
    int publicacao;
    int estoque;
} Livro;

int main()
{

    char autorProcurado[60];
    char ISBNProcurado[14];

    Livro livros[NUM_LIVROS] = {
        {"Memorias de um futuro esquecido",
         "Martelo de Assis",
         "1231231231239",
         1899,
         10},

        {"O silêncio dos inocentes gritando",
         "Franz Kafta",
         "4564564564568",
         1915,
         5},

        {"A menina que roubava livros e os devolvia com juros",
         "Dan Brownie",
         "7897897897896",
         1949,
         8}};

    system("clear");

    // realizar busca por autor
    // limpa o buffer de leitura
    fflush(stdin);
    printf("Digite o nome do autor para procurar livros: ");
    fgets(autorProcurado, 60, stdin);

    // remove o \n ao fim da string
    autorProcurado[strcspn(autorProcurado, "\n")] = 0;
    printf("Livros por %s\n", autorProcurado);

    for (int i = 0; i < NUM_LIVROS; i++)
    {
        if (strcmp(livros[i].autor, autorProcurado) == 0)
        {
            printf("Título: %s\n", livros[i].titulo);
            printf("ISSBN: %s\n", livros[i].ISBN);
            printf("Publicação: %d\n", livros[i].publicacao);
            printf("Estoque: %d\n", livros[i].estoque);
            printf("\n");
        }
    }

    // verificar a disponibilidade de um livro
    fflush(stdin);
    printf("Digite o ISBN do livro para verificar a disponibilidade: ");
    fgets(ISBNProcurado, 14, stdin);

    // remove o \n ao fim da string
    ISBNProcurado[strcspn(ISBNProcurado, "\n")] = 0;

    for (int i = 0; i < NUM_LIVROS; i++)
    {
        if (strcmp(livros[i].ISBN, ISBNProcurado) == 0)
        {
            printf("O livro %s está disponível em estoque: %d\n\n", livros[i].titulo, livros[i].estoque);
        }
    }

    getchar();
    return 0;
}