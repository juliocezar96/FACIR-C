#include <stdio.h>

/*
 *
 * 11. Ler as idades de 2 homens e de 2 mulheres (considere que as idades dos homens serão
 * sempre diferentes entre si, bem como as das mulheres). Calcule e escreva a soma das idades
 * do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo
 * com a mulher mais velha.
 *
 */

int main(void)
{
  int h1, h2, m1, m2;
  printf("Digite o valor do homem 1, homem 2, mulher 1 e mulher 2 \n");
  scanf("%i%i%i%i", &h1, &h2, &m1, &m2);
  if (h1 > h2)
  {
    if (m1 < m2)
    {
      printf("A soma do homem mais velho com a mulher mais nova é %i \n", h1 + m1);
      printf("o produto das idades do homem mais novo com a mulher mais velha é %i \n", h2 * m2);
    }
    else
    {
      printf("A soma do homem mais velho com a mulher mais nova é %i \n", h1 + m2);
      printf("o produto das idades do homem mais novo com a mulher mais velha é %i \n", h2 * m1);
    }
  }
  else if (h1 < h2)
  {
    if (m1 < m2)
    {
      printf("A soma do homem mais velho com a mulher mais nova é %i \n", h2 + m1);
      printf("o produto das idades do homem mais novo com a mulher mais velha é %i \n", h1 * m2);
    }
    else
    {
      printf("A soma do homem mais velho com a mulher mais nova é %i", h2 + m2);
      printf("o produto das idades do homem mais novo com a mulher mais velha é %i \n", h1 * m1);
    }
  }

  return 0;
}