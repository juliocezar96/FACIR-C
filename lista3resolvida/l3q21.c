#include <stdio.h>

/*
 *
 * 21. Escreva as seguintes sequências de números: (1, 1 2 3 4 5 6 7 8 9 10) (2, 1 2 3 4 5 6 7 8 9
 * 10) (3, 1 2 3 4 5 6 7 8 9 10) (4, 1 2 3 4 5 6 7 8 9 10) e assim sucessivamente, até que o
 * primeiro número (antes da vírgula), também chegue a 10.
 *
 */

int main(void)
{
  for (int i = 1; i <= 10; i++)
  {

    printf("(%i, 1 2 3 4 5 6 7 8 9 10) \n", i);
  }

  return 0;
}