#include <stdio.h>

int main()
{
    int matriz[4][3];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    return 0;
}