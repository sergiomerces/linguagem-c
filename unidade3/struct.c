#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno
{
    int matricula;
    int idade;
    char nome[30];
    char sexo;
};

int main()
{

    struct Aluno aluno1;
    struct Aluno aluno2 = {2000, 18, "Maria", 'F'};

    // inserindo dados no aluno1
    aluno1.matricula = 1000;
    strcpy(aluno1.nome, "Sergio");
    aluno1.sexo = 'M';
    aluno1.idade = 46;

    // imprimindo os dados do aluno1
    printf("Número de matrícula: %d\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Sexo: %c\n", aluno1.sexo);
    printf("Idade: %d\n", aluno1.idade);

    // imprimindo os dados do aluno1
    printf("\n");
    printf("Número de matrícula: %d\n", aluno2.matricula);
    printf("Nome: %s\n", aluno2.nome);
    printf("Sexo: %c\n", aluno2.sexo);
    printf("Idade: %d\n", aluno2.idade);

    return 0;
}