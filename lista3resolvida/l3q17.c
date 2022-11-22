#include <stdio.h>

/*
 *
 * 17. Ler um valor N e escreva todos os valores inteiros entre 1 (inclusive) e N (inclusive).
 * Considere que o N será sempre maior que ZERO.
 *
 */

int main(void)
{
  int n;
  printf("Digite o valor de N ");
  scanf("%i", &n);
  for (int i = 1; i <= n; i++)
  {
    printf("%i\n", i);
  }
  return 0;
}