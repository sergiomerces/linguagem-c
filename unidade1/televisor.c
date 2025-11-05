#include <stdio.h>
#include <stdlib.h>

int main(void){

    float preco_venda, valor_desconto, valor_imposto, valor_final;

    const float TAXA_DESCONTO = 0.05;
    const float TAXA_IMPOSTO = 0.1;

    preco_venda = 1500.00;
    valor_desconto = preco_venda * TAXA_DESCONTO;
    valor_imposto = (preco_venda - valor_desconto) * TAXA_IMPOSTO;
    valor_final = preco_venda - valor_desconto + valor_imposto;

    system("clear");

    printf("Extrato de Compra");
    printf("\n\nPreço de Venda: R$ %.2f", preco_venda);
    printf("\nDesconto: R$ %.2f", valor_desconto);
    printf("\nImpostos: R$: %.2f", valor_imposto);
    printf("\nValor Final: R$ %.2f", valor_final);

    getchar();
    return 0;
}
