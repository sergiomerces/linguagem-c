/*
Programa: Cálculo de Salário Líquido
Escrito por: Sérgio Mercês
Data: 09/11/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int line()
{
   for (int i = 0; i < 80; i++)
      putchar('=');

   putchar('\n');
}

int main()
{

   float salarioBruto = 0;
   float salarioLiquido = 0;
   float aliquotaINSS = 0;
   float aliquotaIR = 0;
   float descontoINSS = 0;
   float descontoIR = 0;
   float descontoTotal = 0;

   system("clear");
   line();
   printf("\t\t\tCÁLCULO SALÁRIO LÍQUIDO\n");
   line();

   printf("\nInforme o valor do Salário Bruto: R$ ");
   scanf(" %f", &salarioBruto);

   // validação INSS
   if (salarioBruto <= 1320.00)
   {
      aliquotaINSS = 7.5;
      descontoINSS = (salarioBruto * aliquotaINSS) / 100;
   }
   else if (salarioBruto <= 2571.29)
   {
      aliquotaINSS = 9;
      descontoINSS = (salarioBruto * aliquotaINSS) / 100;
   }
   else if (salarioBruto <= 3586.94)
   {
      aliquotaINSS = 12;
      descontoINSS = (salarioBruto * aliquotaINSS) / 100;
   }
   else
   {
      aliquotaINSS = 14;
      descontoINSS = (salarioBruto * aliquotaINSS) / 100;
   }

   // validação IR
   if (salarioBruto <= 1903.98)
   {
      aliquotaIR = 0;
      descontoIR = (salarioBruto * aliquotaIR) / 100;
   }
   else if (salarioBruto <= 2826.65)
   {
      aliquotaIR = 7.5;
      descontoIR = (salarioBruto * aliquotaIR) / 100;
   }
   else if (salarioBruto <= 3751.05)
   {
      aliquotaIR = 15;
      descontoIR = (salarioBruto * aliquotaIR) / 100;
   }
   else if (salarioBruto <= 4664.68)
   {
      aliquotaIR = 22.5;
      descontoIR = (salarioBruto * aliquotaIR) / 100;
   }
   else
   {
      aliquotaIR = 27.5;
      descontoIR = (salarioBruto * aliquotaIR) / 100;
   }

   // cálculo de desconto total
   descontoTotal = descontoINSS + descontoIR;
   // calculo do salario líquido
   salarioLiquido = salarioBruto - descontoTotal;

   printf("\nSalário Bruto: \tR$ %.2f", salarioBruto);
   printf("\nAlíquota INSS: \t%.1f", aliquotaINSS);
   printf("\nAlíquota IR: \t%.1f", aliquotaIR);

   // validação de isento
   if (aliquotaIR == 0)
   {
      printf("\t\t**ISENTO**");
   }

   printf("\nDesconto INSS: \tR$ %.2f", descontoINSS);
   printf("\nDesconto IR: \tR$ %.2f", descontoIR);
   printf("\n\nDesconto Total: \tR$ %.2f", descontoTotal);
   printf("\n\nSalário Líquido: \tR$ %.2f\n\n", salarioLiquido);

   getchar();
   return 0;
}
