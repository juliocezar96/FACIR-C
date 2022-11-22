#include <stdio.h>

/*
 *
 * 14.Ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor, ou seja,
 * para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do
 * primeiro valor lido pelo segundo valor lido. (utilizar a estrutura REPETIR)
 *
 */

int main(void)
{
  int n1, n2, divisao;
  printf("Digite dois valores n1 e n2 \n");
  scanf("%i%i", &n1, &n2);
  while (n2 == 0)
  {
    printf("O valor nao pode ser Zero, digite um novo valor\n");
    scanf("%i", &n2);
  }
  divisao = n1 / n2;
  printf("o resultado da divisão é %i", divisao);
  return 0;
}
