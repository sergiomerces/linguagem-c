#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ALUNOS 3
#define NUM_DISCIPLINAS 3

int main() {
    float notas[NUM_ALUNOS][NUM_DISCIPLINAS] = {{7.5, 8.0, 9.0},{6.5, 7.0, 8.0},{8.0, 7.5, 8.5}} ;
    float mediasAluno[NUM_ALUNOS];
    float mediaGeral, soma = 0;

    //calcula a média das notas de cada aluno em cada disciplina
    for(int i = 0; i < NUM_ALUNOS; i++)
    {
        float soma = 0;
        for(int j = 0; j < NUM_DISCIPLINAS; j++)
        {
            soma += notas[i][j];
        }
        mediasAluno[i] = soma/NUM_DISCIPLINAS;
    }

    getchar();
    return 0;
}

