#include <stdio.h>

/*
 *
 * 5. Ler 3 valores (considere que não serão informados valores iguais) e escrever o maior deles.
 *
 */
int main(void)
{
  int n1, n2, n3;
  printf("Digite um valor\n");
  scanf("%i%i%i", &n1, &n2, &n3);
  if (n1 > n2 && n1 > n3)
  {
    printf("Maior valor é %i", n1);
  }
  else if (n2 > n1 && n2 > n3)
  {
    printf("Maior valor é %i", n2);
  }
  else
  {
    printf("Maior valor é %i", n3);
  }
  return 0;
}
