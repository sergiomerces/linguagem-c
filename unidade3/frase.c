#include <stdio.h>

int main(){
    char frase[101];

    printf("\nDigite uma frase: ");
    fflush(stdin);
    fgets(frase, 101, stdin);
    printf("\nFrase digitada:\n%s\n\n", frase);

    return 0;
}
