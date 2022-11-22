#include <stdio.h>

/*
 *
 *9.Ler o nome de 2 times e o número de gols marcados na partida (para cada time). Escrever o
 * nome do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE.
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