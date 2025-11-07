#include <stdio.h>
#include <stdlib.h>

int banner()
{
    printf("============================================================================\n");
    printf("                           RATEIO DA CONTA\n");
    printf("============================================================================\n");
    return 0;
}

int main(void)
{
    float valorConta = 0.0;
    float percentualDesconto = 0.0;
    float desconto = 0;
    float valorPagar = 0;
    float valorRateio = 0;
    int numeroPessoas = 0;

    system("clear");
    banner();
    printf("\n\nValor da Conta R$: ");
    scanf("%f", &valorConta);
    printf("\nPercentual de Desconto: ");
    scanf("%f", &percentualDesconto);
    printf("\nNúmero de Pessoas: ");
    scanf("%d", &numeroPessoas);

    desconto = (valorConta * percentualDesconto) / 100;
    valorPagar = valorConta - desconto;
    valorRateio = valorPagar / numeroPessoas;

    system("clear");
    banner();
    printf("\n\nValor da Conta R$: %.2f", valorConta);
    printf("\nDesconto (%.1f): R$ %.2f", percentualDesconto, desconto);
    printf("\nValor a Pagar R$: %.2f", valorPagar);
    printf("\nNúmero de Pessoas: %d", numeroPessoas);
    printf("\nTotal a pagar por pessoa: R$ %.2f\n\n", valorRateio);

    getchar();
    return 0;
}
