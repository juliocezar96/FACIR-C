#include <stdio.h>

/*
 *
 *4. Ler um valor e escrever se é positivo, negativo ou zero.
 *
 */

int main(void)
{
  int n;
  printf("Digite um valor\n");
  scanf("%i", &n);
  if (n > 0)
  {
    printf("Positivo");
  }
  else if (n < 0)
  {
    printf("Negativo");
  }
  else
  {
    printf("Zero");
  }
  return 0;
}
