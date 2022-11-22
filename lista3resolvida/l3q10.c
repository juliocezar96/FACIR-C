#include <stdio.h>

/*
 *
 * 10. Ler dois valores e imprimir uma das três mensagens a seguir:
 * ‘Números iguais’, caso os números sejam iguais;
 * ‘Primeiro é maior’, caso o primeiro seja maior que o segundo;
 * ‘Segundo maior’, caso o segundo seja maior que o primeiro.
 *
 */

int main(void)
{
  char time1, time2;
  int gol1, gol2;

  scanf("%s %s %i %i", &time1, &time2, &gol1, &gol2);
  if (gol1 > gol2)
  {
    printf("Time %s vencedor", time1);
  }
  else if (gol1 < gol2)
  {
    printf("Time %s vencedor", time2);
  }

  return 0;
}