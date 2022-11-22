#include <stdio.h>

/*
 *
 * 1. Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se
 * que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre
 * o que ultrapassar este valor, calcular e escrever o seu salário total.
 * *
 */
int main(void)
{

  float salario, comissao, salarioTotal, valor;
  printf("Digite salario fixo e Valor das vendas\n ");
  scanf("%f%f", &salario, &valor);
  if (valor <= 1500)
  {
    comissao = valor * 0.03;
  }
  else if (valor > 1500)
  {
    comissao = valor * 0.03 + ((valor - 1500) * 0.05);
  }

  salarioTotal = salario + comissao;
  printf("salario total é=%f ", salarioTotal);

  return 0;
}
