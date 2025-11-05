#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("\nA media das notas %.2f e %.2f eh: %.2f\n", nota1, nota2, media);
    system("pause");
    return 0;
}