#include <stdio.h>

/*
 *
 * 6. Ler 3 valores (considere que não serão informados valores iguais) e escrever a soma dos 2 maiores.
 *
 */

int main(void)
{
  int n1, n2, n3, soma;
  printf("Digite um valor\n");
  scanf("%i%i%i", &n1, &n2, &n3);
  if (n1 > n2 && n1 > n3)
  {
    if (n2 > n3)
    {
      soma = n1 + n2;
      printf("A soma dos dois mariores é %i", soma);
    }
    else
    {
      soma = n1 + n3;
      printf("A soma dos dois mariores é %i", soma);
    }
  }
  if (n2 > n1 && n2 > n3)
  {
    if (n1 > n3)
    {
      soma = n2 + n1;
      printf("A soma dos dois mariores é %i", soma);
    }
    else
    {
      soma = n2 + n3;
      printf("A soma dos dois mariores é %i", soma);
    }
  }
  if (n3 > n1 && n3 > n2)
  {
    if (n2 > n1)
    {
      soma = n3 + n2;
      printf("A soma dos dois mariores é %i", soma);
    }
    else
    {
      soma = n3 + n1;
      printf("A soma dos dois mariores é %i", soma);
    }
  }
  return 0;
}
