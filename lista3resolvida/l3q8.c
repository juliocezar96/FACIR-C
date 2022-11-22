#include <stdio.h>

/*
 *
 * 8. Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se formam ou não um triângulo. OBS: para formar um triângulo, o valor de cada lado deve ser menor que a soma dos outros 2 lados.
 *
 *
 */

int main(void)
{
  int a, b, c;
  printf("Digite o valor de A, B e C\n");
  scanf("%i%i%i", &a, &b, &c);
  if (a < b + c)
  {
    printf("É triangulo a ");
  }
  else if (b < a + c)
  {
    printf("é triangulo b ");
  }
  else if (c < a + b)
  {
    printf("é triangulo c ");
  }
  else
  {
    printf("Não é triangulo");
  }

  return 0;
}