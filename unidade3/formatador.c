#include <stdio.h>

int main()
{
    char cpf1[15];
    char cpf2[11];
    int i = 0, n = 0;

    printf("Digite o CPF na forma NNN.NNN.NNN-NN:\n");
    scanf(" %s", cpf1);

    for (i = 0; i < 15; i++)
    {
        if (cpf1[i] == '.' || cpf1[i] == '-')
        {
            continue;
        }
        else
        {
            cpf2[n] = cpf1[i];
            n++;
        }
    }
    printf("\nCPF formatado = %s\n", cpf2);
    getchar();
    return 0;
}
